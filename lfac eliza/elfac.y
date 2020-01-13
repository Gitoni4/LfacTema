%{
#include "efunctions.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
extern int nrdecl;
extern int nrvar;
extern int nrfunctii;
int yyerror(char* s);
%}


%union 
{ 
  int valINT;
  float valFLOAT;
  char valCHAR;
  char* valSTRING;
  int valBOOL;
  struct var* variabila;
  struct var** varvector;
  struct varval* valoare;
}

%token VAR PRINT NR RETURN TIPVAR ID FUNCTIONVAR EVAL CLASSVAR SINGLECHAR STRING BGIN END MAIN IF CLASS INTERN EXTERN INT ELSE RETRN AND OR EQUAL GE LE GL THEN WHILE DO CHAR BOOL FLOAT NRFLOAT FALSE TRUE
%type <valINT> NR
%type <valFLOAT> NRFLOAT
%type <valSTRING> ID STRING TIPVAR
%type <variabila> declaratie param declFunct expresie
%type <varvector> listadeclaratie listaparam listadeclFunct
%type <varvector> listedeclaratie listedeclFunct
%type <valoare> init initf
%type <valCHAR> SINGLECHAR
 

%start program
%left '+' '-'
%left '*' '/'
%right "->"

%%

program: clase functii declaratii instructiuni 

clase: clasa
     | clase clasa
     ;

clasa: CLASS ID '{' corpclasa '}' ';'
     ;

corpclasa: corp
         | corpclasa corp
         ;

corp: EXTERN ':' declarariClass
    | INTERN ':' declarariClass
    ;

declarariClass: listedeclClass
              | declarariClass listedeclClass
              ;

listedeclClass: CLASSVAR TIPVAR listadeclClass
              ;

listadeclClass: listadeclClass ',' declClass ';'
              | declClass ';'
              ;

declClass: ID
         | ID '-' '>' initc
         ;

initc: NR
     | NRFLOAT
     | STRING
     ;

functii: functie 
       | functii functie 
       ;

functie: ID '(' listaparam ')' '-' '>' TIPVAR '{' declarariFunct blocFunct '}' ';'
         {
           if (programfuncts[nrfunctii] == NULL)
           {
             programfuncts[nrfunctii] = (struct funct*)malloc(sizeof(struct funct));
           }
           programfuncts[nrfunctii]->nume = (char*)malloc(128);
           strcpy(programfuncts[nrfunctii]->nume, $1); 
           programfuncts[nrfunctii]->freturn = (char*)malloc(128);
           strcpy(programfuncts[nrfunctii]->freturn, $7);
           nrfunctii++;
         }
       ;

listaparam: listaparam ',' param
            {
              adaugarevarlist($3);
              printf("%s %s, %d %f %s %s\n", $3->nume, $3->tip, $3->valint, $3->valfloat, $3->valstring, $3->varscope);
            }
          | param
            {
              adaugarevarlist($1);
              printf("%s %s, %d %f %s %s\n", $1->nume, $1->tip, $1->valint, $1->valfloat, $1->valstring, $1->varscope);
            }
          ;

param: TIPVAR ID 
       {
         $$ = (struct var*)malloc(sizeof(struct var));
         $$->nume = (char*)malloc(128);
         strcpy($$->nume, $2);
         $$->varscope = (char*)malloc(128);
         strcpy($$->varscope, "functie");
         $$->tip = (char*)malloc(128);
         strcpy($$->tip, $1);
       }
     ;

declarariFunct: listedeclFunct 
              | declarariFunct listedeclFunct
              ;

listedeclFunct: FUNCTIONVAR TIPVAR listadeclFunct ';'
                {
                  atribuiretiplist($3, $2, nrdecl, "functie"); 
                  adaugarelist($3, nrdecl);
                }
              ;

listadeclFunct: listadeclFunct ',' declFunct
                   {
                     
                     
                     if (verifdeclvar($3, "functie") != -1) 
                     {  
                          yyerror("Variabila a fost deja declarata\n");
                          fflush(stdout);
                          $$ = $1;
                     }    
                     else
                     {
                          $$ = curentlistdecl($1, $3, nrdecl++);
                     }
                 
                   }
                 | declFunct
                   {
                     nrdecl = 0;
                     if (verifdeclvar($1, "functie") != -1) 
                     {  
                          printf("Variabila : %s a fost deja declarata\n", $1->nume);
                          fflush(stdout);
                     }
                     else
                     {      
                        printf("%s %s, %d %f %s %s\n", $1->nume, $1->tip, $1->valint, $1->valfloat, $1->valstring, $1->varscope);
                        $$ = curentlistdecl (NULL, $1, nrdecl++);
                            
                     }
                   }
                 ;

declFunct: ID
           {
             $$ = (struct var*)malloc(sizeof(struct var));
             $$->nume = (char*)malloc(128);
             strcpy($$->nume, $1);
             $$->varscope = (char*)malloc(128);
             strcpy($$->varscope, "functie");
           }
         | ID '-' '>' initf
           {
              $$ = (struct var*)malloc(sizeof(struct var));
              $$->nume = (char*)malloc(128);
              $$->tip = (char*)malloc(128);
              if (strcmp($4->tip, "float") == 0)
              {
                strcpy($$->nume, $1);
                $$->valfloat = $4->valfloat;
              }
              if (strcmp($4->tip, "int") == 0)
              {
                strcpy($$->nume, $1);
                $$->valint = $4->valint;
              }
              if (strcmp($4->tip, "char") == 0)
              {
                strcpy($$->nume, $1);
                $$->valchar = $4->valchar;
              }
              if (strcmp($4->tip, "string") == 0)
              {
                strcpy($$->nume, $1);
                $$->valstring = (char *)malloc(128);
                strcpy($$->valstring, $4->valstring);
              }
                strcpy($$->tip, $4->tip);
                $$->varscope = (char*)malloc(128);
                strcpy($$->varscope, "functie");
           }
         ;

initf: NR
       { 
         $$ = (struct varval*)malloc(sizeof(struct varval));
         $$->tip = (char*)malloc(128);
         strcpy($$->tip, "int");
         $$->valint = $1;   
       }
     | NRFLOAT
       {
          $$ = (struct varval*)malloc(sizeof(struct varval));
          $$->tip = (char*)malloc(128);
          strcpy($$->tip, "float");
          $$->valfloat = $1;      
       }
     | STRING
       {
           $$ = (struct varval*)malloc(sizeof(struct varval));
           $$->tip = (char*)malloc(128);
           $$->valstring = (char*)malloc(128);
           strcpy($$->tip, "string");
           strcpy($$->valstring, $1);
       }
     ;

blocFunct: instrFunct
         | blocFunct instrFunct
         ;

instrFunct: ID '-' '>' expresie  ';'
          | ID '[' NR ']' '-' '>' expresie ';'
          | PRINT '(' NR ')' ';'
          | PRINT '(' ID ')' ';'
          | instrIF ';'
          | instrWHILE ';'
          | RETRN ID ';'
          | RETRN NR ';'
          | RETRN NRFLOAT ';'
          ;

          

declaratii:  listedeclaratie ';' 
    	   | declaratii listedeclaratie ';'	
     	   ;

listedeclaratie: VAR TIPVAR listadeclaratie 
                 { 
                     
                     atribuiretiplist($3, $2, nrdecl, "global"); 
                     adaugarelist($3, nrdecl);                  
                 }
               ;

listadeclaratie: listadeclaratie ',' declaratie 
                 {
                     
                     if (verifdeclvar($3, "global") != -1) 
                     {  
                          yyerror("Variabila a fost deja declarata\n");
                          fflush(stdout);
                          $$ = $1;
                     }    
                     else
                     {
                          $$ = curentlistdecl($1, $3, nrdecl++);
                          printf("%s %s, %d %f %s %s\n", $3->nume, $3->tip, $3->valint, $3->valfloat, $3->valstring, $3->varscope);
                     }
                 }
               | declaratie 
                 { 
                     nrdecl = 0;
                     if (verifdeclvar($1, "global") != -1) 
                     {  
                          yyerror("Variabila a fost deja declarata\n");
                          fflush(stdout);
                     }
                     else
                     {      
                        printf("%s %s, %d %f %s %s\n", $1->nume, $1->tip, $1->valint, $1->valfloat, $1->valstring, $1->varscope);
                        $$ = curentlistdecl (NULL, $1, nrdecl++);
                            
                     }
                 }
               ;

declaratie: ID 
            { 
              
              $$ = (struct var*)malloc(sizeof(struct var));
              $$->nume = (char*)malloc(128);
              strcpy($$->nume, $1);
              $$->varscope = (char*)malloc(128);
              strcpy($$->varscope, "global");

            }
          | ID '-' '>' init 
            { 
              $$ = (struct var*)malloc(sizeof(struct var));
              $$->nume = (char*)malloc(128);
              $$->tip = (char*)malloc(128);
              if (strcmp($4->tip, "float") == 0)
              {
                strcpy($$->nume, $1);
                $$->valfloat = $4->valfloat;
              }
              if (strcmp($4->tip, "int") == 0)
              {
                strcpy($$->nume, $1);
                $$->valint = $4->valint;
              }
              if (strcmp($4->tip, "char") == 0)
              {
                strcpy($$->nume, $1);
                $$->valchar = $4->valchar;
              }
              if (strcmp($4->tip, "string") == 0)
              {
                strcpy($$->nume, $1);
                $$->valstring = (char *)malloc(128);
                strcpy($$->valstring, $4->valstring);
              }
                strcpy($$->tip, $4->tip);
                $$->varscope = (char*)malloc(128);
                strcpy($$->varscope, "global");
              }
            
          ;

init: NR
      { 
        $$ = (struct varval*)malloc(sizeof(struct varval));
        $$->tip = (char*)malloc(128);
        strcpy($$->tip, "int");
        $$->valint = $1;   
        }
        | NRFLOAT
        {
          $$ = (struct varval*)malloc(sizeof(struct varval));
          $$->tip = (char*)malloc(128);
          strcpy($$->tip, "float");
          $$->valfloat = $1;
        }
        | SINGLECHAR
        {
          $$ = (struct varval*)malloc(sizeof(struct varval));
          $$->tip = (char*)malloc(128);
          strcpy($$->tip, "char");
          $$->valchar = $1;
        }
        |  STRING 
        {
           $$ = (struct varval*)malloc(sizeof(struct varval));
           $$->tip = (char*)malloc(128);
           $$->valstring = (char*)malloc(128);
           strcpy($$->tip, "string");
           strcpy($$->valstring, $1);
        }  
        ; 
      
instructiuni: MAIN BGIN bloc END  
     	     ;
     
bloc: instructiune 
    | instructiune bloc
    ;

instructiune: ID '-' '>' expresie  ';'
              {
                for (int i = 0; i < nrvar; i++)
                {
                  if (strcmp($1, programvars[i]->nume) == 0)
                  {
                    if ($4->varscope != NULL)
                    {
                      if (strcmp(programvars[i]->varscope, $4->varscope) == 0)
                      {
                        if (strcmp(programvars[i]->tip, $4->tip) == 0)
                        {
                          if (strcmp(programvars[i]->tip, "int") == 0)
                          {
                            programvars[i]->valint = $4->valint;
              
                          }
                          if (strcmp(programvars[i]->tip, "float") == 0)
                          {
                            programvars[i]->valfloat = $4->valfloat;
                          }
                          if (strcmp(programvars[i]->tip, "strcpy") == 0)
                          {
                            strcpy(programvars[i]->valstring, $4->valstring);
                          }
                        }
                        else
                        {
                          yyerror("Nu se pot efectua operatii intre variabile de tipuri diferite\n");
                        }
                      }
                      else
                      {
                        yyerror("Nu se pot efectua operatii intre variabile de scope-uri diferite\n");
                      }
                    }
                  }
                }
              }    
            | ID '[' NR ']' '-' '>' expresie ';'
            | PRINT '(' NR ')' ';' 
            | PRINT '(' ID ')' ';' 
            | instrIF ';'
            | instrWHILE ';'
            | EVAL '(' expresie ')' ';'
            {
              if (strcmp($3->tip, "int") == 0)
              {
                printf("Eval = %d , de tip int\n", $3->valint);
              } 
              if (strcmp($3->tip, "float") == 0)
              {
                printf("Eval = %f , de tip float\n", $3->valfloat);
              } 
              if (strcmp($3->tip, "string") == 0)
              {
                printf("Eval = %s , de tip string\n", $3->valstring);
              } 
            }
            ;

instrIF: IF '(' listaexprIF ')' THEN '{' bloc '}'  
       | IF '(' listaexprIF ')' THEN '{' bloc '}' ELSE '{' bloc '}'
       ;

listaexprIF: expresieIF AND listaexprIF
           | expresieIF OR listaexprIF
           | expresieIF
           ;

expresieIF: expresie  EQUAL  expresie
          | expresie  LE  expresie
          | expresie  GE  expresie
          | expresie  GL  expresie
          ;

instrWHILE: WHILE '(' listaexprWHILE ')' DO '{' bloc '}'
          ;
         
listaexprWHILE: expresieWHILE AND listaexprWHILE
              | expresieWHILE OR listaexprWHILE
              | expresieWHILE 
              ;

expresieWHILE: expresie  EQUAL  expresie
             | expresie  LE  expresie
             | expresie  GE  expresie
             | expresie  GL  expresie
             ;

expresie: expresie '+' expresie
          {
            if (($1->varscope != NULL && $3->varscope == NULL) || ($1->varscope == NULL && $3->varscope != NULL) || ($1->varscope == NULL && $3->varscope == NULL) || ($1->varscope != NULL && $3->varscope != NULL && strcmp($1->varscope, $3->varscope) == 0))  
            { 
              if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free($$);
             } 
             else
             {
               if ((strcmp($1->tip, "int") == 0 && strcmp($3->tip, "float") == 0) || (strcmp($1->tip, "float") == 0 && strcmp($3->tip, "int") == 0))
               {
                 strcpy($$->tip, "float");
               }
               if (strcmp($1->tip, $3->tip) == 0)
               {
                 strcpy($$->tip, $1->tip);
               }
               if (strcmp($$->tip, "int") == 0)
               {
                 
                 $$->valint = $1->valint + $3->valint;
               }
               if (strcmp($$->tip, "float") == 0)
               {
                 if(strcmp($1->tip, "int") == 0)
                  {
                    $$->valfloat = $1->valint + $3->valfloat;
                  }
                  else 
                  {
                    if(strcmp($3->tip, "int") == 0)
                    {
                       $$->valfloat = $1->valfloat + $3->valint;
                    } 
                    else
                    {
                      $$->valfloat = $1->valfloat + $3->valfloat;
                    }
                  }   
               }
               if(strcmp($$->tip, "string") == 0)
               {
                 $$->valstring = (char*)malloc(128);
                 strcpy($$->valstring, strcat($1->valstring, $3->valstring));
               }
              }
            }
            else
            {
              
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            }
          } 
	      | expresie '-' expresie 
        {
         if (($1->varscope != NULL && $3->varscope == NULL) || ($1->varscope == NULL && $3->varscope != NULL) || ($1->varscope == NULL && $3->varscope == NULL) || ($1->varscope != NULL && $3->varscope != NULL && strcmp($1->varscope, $3->varscope) == 0))  
          {   
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free($$);
             } 
             else
             {
               if ((strcmp($1->tip, "int") == 0 && strcmp($3->tip, "float") == 0) || (strcmp($1->tip, "float") == 0 && strcmp($3->tip, "int") == 0))
               {
                 strcpy($$->tip, "float");
               }
               if (strcmp($1->tip, $3->tip) == 0)
               {
                 strcpy($$->tip, $1->tip);
               }
               if (strcmp($$->tip, "int") == 0)
               {
                 $$->valint = $1->valint - $3->valint;
               }
               if (strcmp($$->tip, "float") == 0)
               {
                 if(strcmp($1->tip, "int") == 0)
                    $$->valfloat = $1->valint - $3->valfloat;
                 else if(strcmp($3->tip, "int") == 0)
                    $$->valfloat = $1->valfloat - $3->valint;
                 else
                    $$->valfloat = $1->valfloat - $3->valfloat;
               }
               if(strcmp($$->tip, "string") == 0)
               {
                 $$->valstring = (char*)malloc(128);
                 strcpy($$->valstring, strcat($1->valstring, $3->valstring));
               }
             }
            }
            else
            {
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            }
          } 
	      | expresie '*' expresie 
        {
          if (($1->varscope != NULL && $3->varscope == NULL) || ($1->varscope == NULL && $3->varscope != NULL) || ($1->varscope == NULL && $3->varscope == NULL) || ($1->varscope != NULL && $3->varscope != NULL && strcmp($1->varscope, $3->varscope) == 0))  
          {   
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite");
               fflush(stdout);
               free($$);
             } 
             else
             {
               if ((strcmp($1->tip, "int") == 0 && strcmp($3->tip, "float") == 0) || (strcmp($1->tip, "float") == 0 && strcmp($3->tip, "int") == 0))
               {
                 strcpy($$->tip, "float");
               }
               if (strcmp($1->tip, $3->tip) == 0)
               {
                 strcpy($$->tip, $1->tip);
               }
               if (strcmp($$->tip, "int") == 0)
               {
                 $$->valint = $1->valint * $3->valint;
               }
               if (strcmp($$->tip, "float") == 0)
               {
                 if(strcmp($1->tip, "int") == 0)
                    $$->valfloat = $1->valint * $3->valfloat;
                 else if(strcmp($3->tip, "int") == 0)
                    $$->valfloat = $1->valfloat * $3->valint;
                 else
                    $$->valfloat = $1->valfloat * $3->valfloat;
               }
               if(strcmp($$->tip, "string") == 0)
               {
                 $$->valstring = (char*)malloc(128);
                 strcpy($$->valstring, strcat($1->valstring, $3->valstring));
               }
              }
            } 
            else
            {
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            } 
          } 
	      | expresie '/' expresie 
        {
          if (($1->varscope != NULL && $3->varscope == NULL) || ($1->varscope == NULL && $3->varscope != NULL) || ($1->varscope == NULL && $3->varscope == NULL) || ($1->varscope != NULL && $3->varscope != NULL && strcmp($1->varscope, $3->varscope) == 0))  
          {  
          
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free($$);
             } 
             else
             {
               if ((strcmp($1->tip, "int") == 0 && strcmp($3->tip, "float") == 0) || (strcmp($1->tip, "float") == 0 && strcmp($3->tip, "int") == 0))
               {
                 strcpy($$->tip, "float");
               }
               if (strcmp($1->tip, $3->tip) == 0)
               {
                 strcpy($$->tip, $1->tip);
               }
               if (strcmp($$->tip, "int") == 0)
               {
                 $$->valint = $1->valint / $3->valint;
               }
               if (strcmp($$->tip, "float") == 0)
               {
                 if(strcmp($1->tip, "int") == 0)
                    $$->valfloat = $1->valint / $3->valfloat;
                 else if(strcmp($3->tip, "int") == 0)
                    $$->valfloat = $1->valfloat / $3->valint;
                 else
                    $$->valfloat = $1->valfloat / $3->valfloat;
               }
               if(strcmp($$->tip, "string") == 0)
               {
                 $$->valstring = (char*)malloc(128);
                 strcpy($$->valstring, strcat($1->valstring, $3->valstring));
               }
              }
            } 
            else
            {
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            } 
          } 
        | init 
        { 
          
          struct var* auxvar = (struct var*)malloc(sizeof(struct var));
          auxvar->tip = (char*)malloc(128);
          auxvar->valstring = (char*)malloc(128);
          auxvar->varscope = (char*)malloc(128);
          auxvar->varscope = NULL;
          if (strcmp($1->tip, "int") == 0)
          {
            strcpy(auxvar->tip, $1->tip);
            auxvar->valint = $1->valint;
          } 
          if (strcmp($1->tip, "float") == 0)
          {
            strcpy(auxvar->tip, $1->tip);
            auxvar->valfloat = $1->valfloat;
          } 
          if (strcmp($1->tip, "string") == 0)
          {
            strcpy(auxvar->tip, $1->tip);
            strcpy(auxvar->valstring, $1->valstring);
          } 
          $$ = (struct var*)malloc(sizeof(struct var));
          $$ = auxvar;
        }
        | ID 
        {
          $$ = (struct var*)malloc(sizeof(struct var));
          $$->tip = (char*)malloc(128);
          int varnumar = 0;
          for (int i = 0; i < nrvar && varnumar == 0; i++)
          {
            
            if (strcmp(programvars[i]->nume, $1) == 0)
            {
               
               varnumar = 1;
            }
          }
          if (varnumar == 1)
          {
             
            strcpy($$->tip, programvars[varnumar]->tip);
            if (strcmp($$->tip, "int") == 0)
            {
                $$->valint = programvars[varnumar]->valint;
            }
            if (strcmp($$->tip, "float") == 0)
            {
                $$->valfloat = programvars[varnumar]->valfloat;
            }
            if (strcmp($$->tip, "string") == 0)
            {
               $$->valstring = (char*)malloc(128);
               strcpy($$->valstring, programvars[varnumar]->valstring);
            }
          }
          if (varnumar == 0)
          { 
            yyerror("Variabila nu a fost declarata, linia \n");
          }      
        }  
        ;
           

%%

int yyerror(char * s)
{
  printf("\n!!!  eroare: %s la linia:%d\n",s,yylineno);
}



int main(int argc, char** argv)
{
  yyin=fopen(argv[1],"r");
  yyparse();
}