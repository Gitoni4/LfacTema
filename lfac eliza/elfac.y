%{
#include "efunctions.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
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

%token VAR PRINT NR RETURN TIPVAR ID SINGLECHAR STRING BGIN END MAIN IF CLASS INTERN EXTERN INT ELSE RETRN AND OR EQUAL GE LE GL THEN WHILE DO CHAR BOOL FLOAT NRFLOAT FALSE TRUE
%type <valINT> NR
%type <valFLOAT> NRFLOAT
%type <valSTRING> ID STRING TIPVAR
%type <variabila> declaratie 
%type <varvector> listadeclaratie 
%type <varvector> listedeclaratie
%type <valoare> init expresie
%type <valCHAR> SINGLECHAR
 

%start program
%left '+' '-'
%left '*' '/'

%%

program: declaratii instructiuni 

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
                     if (verifdeclvar($3, "global") == 1) 
                     {  
                          printf("Variabila : %s a fost deja declarata\n", $3->nume);
                          fflush(stdout);
                          $$ = $1;
                     }    
                     else
                     {
                          $$ = curentlistdecl($1, $3, nrdecl);
                     }
                 }
               | declaratie 
                 { 
                     if (verifdeclvar($1, "global") == 1) 
                     {  
                          printf("Variabila : %s a fost deja declarata\n", $1->nume);
                          fflush(stdout);
                     }
                     else
                     {
                            nrdecl = 0;
                            $$ = curentlistdecl (NULL, $1, nrdecl);
                     }
                 }
               ;

declaratie: ID 
            { 
              $$ = (struct var*)malloc(sizeof(struct var));
              $$->nume = (char*)malloc(128);
              strcpy($$->nume, $1);
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
            | ID '[' NR ']' '-' '>' expresie ';'
            | PRINT '(' NR ')' ';'
            | PRINT '(' ID ')' ';'
            | instrIF ';'
            | instrWHILE ';'
            | RETRN ID ';'
            | RETRN NR ';'
            | RETRN NRFLOAT ';'
            | RETRN BOOL ';'
            ;

instrIF: IF '(' listaexprIF ')' THEN '{' blocIF '}' 
        {
          printf("linia %d merge\n", yylineno);
             fflush(stdout);
        }
       | IF '(' listaexprIF ')' THEN '{' blocIF '}' ELSE '{' blocIF '}'
       ;

blocIF: bloc
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
              | expresieWHILE { printf("gata aici\n"); }
              ;

expresieWHILE: expresie  EQUAL  expresie { printf("gata si aici\n"); }
             | expresie  LE  expresie
             | expresie  GE  expresie
             | expresie  GL  expresie
             ;

expresie: expresie '+' expresie
          {
             printf("linia %d merge\n", yylineno);
             fflush(stdout);
             $$ = (struct varval*)malloc(sizeof(struct varval));
             printf("linia %d merge\n", yylineno);
             fflush(stdout);
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               printf("linia %d merge\n", yylineno);
               fflush(stdout);
               printf("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free($$);
             } 
             else
             {
                            printf("linia %d merge\n", yylineno);
             fflush(stdout);
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
              printf("linia %d merge\n", yylineno);
             fflush(stdout);
          } 
	      | expresie '-' expresie 
        {
             $$ = (struct varval*)malloc(sizeof(struct varval));
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               
               printf("Nu se pot efectua operatii cu 2 tipuri diferite\n");
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
	      | expresie '*' expresie 
        {
             $$ = (struct varval*)malloc(sizeof(struct varval));
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               
               printf("Nu se pot efectua operatii cu 2 tipuri diferite");
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
	      | expresie '/' expresie 
        {
             $$ = (struct varval*)malloc(sizeof(struct varval));
             if (((strcmp($1->tip, "int") == 0 || strcmp($1->tip, "string") == 0) && (strcmp($3->tip, "string") == 0 || strcmp($3->tip, "char") == 0))
                 || ((strcmp($3->tip, "int") == 0 || strcmp($3->tip, "string") == 0) && (strcmp($1->tip, "string") == 0 && strcmp($1->tip, "char") == 0)))
             {
               
               printf("Nu se pot efectua operatii cu 2 tipuri diferite\n");
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
        | init 
        { 
                       printf("linia %d merge\n", yylineno);
             fflush(stdout);
          $$ = $1; 
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