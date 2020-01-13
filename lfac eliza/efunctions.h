#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct var
{
   int valint;
   char valchar;
   char* valstring;
   float valfloat;
   char* varscope;
   char* tip;
   char* nume;
};

struct varval
{
   int valint;
   char valchar;
   char* valstring;
   float valfloat;
   int valbool;
   char* tip; 
};

struct funct
{
  char* nume;
  char* freturn;
};

struct var* programvars[1000] ;
int nrvar = 0;
struct var** listdecl;
struct funct* programfuncts[25];
int nrfunctii = 0;
int nrparam;
int nrdecl;

int verifdeclvar (struct var* x, char* scopex)
{
    for (int i = 0; i < nrvar; i++)
    { 
        if (strcmp(programvars[i]->nume, x->nume) == 0)
        {
           if (strcmp(programvars[i]->varscope, x->varscope) == 0)
           {
               return i;
           }
           return i;
        }
    }
    return -1;
}

struct var** curentlistdecl (struct var** list, struct var* x, int lungime)
{

   struct var** curentlist = (struct var**)malloc(sizeof(size_t) * (lungime + 1));
   for (int i = 0; i < lungime; i++)
   {
       curentlist[i] = list[i];
   }
   curentlist[lungime] = x;
   if (list != NULL)
      free(list);
   return curentlist;
}


void atribuiretiplist(struct var** list, char* tip2, int lungime, char* scopex)
{
    if (strcmp(tip2, "int") != 0 && strcmp(tip2, "float") !=0 && strcmp(tip2, "char") !=0 && strcmp(tip2, "string") !=0)
    {
      printf ("Variabilei nu ii poate fi atribuit tipul : %s", tip2);
    }
    else
    {
      
      for (int i = 0; i < lungime; i++)
      {
          list[i]->varscope = (char*)malloc(128);
          list[i]->tip = (char*)malloc(128);
          strcpy(list[i]->varscope, scopex);
          strcpy(list[i]->tip, tip2);
          
      }      
    }
}

void adaugarelist (struct var** list, int lungime)
{
    
    for (int i = 0; i < lungime; i++)
    {
        if(!programvars[nrvar])
        {
            programvars[nrvar]=(struct var*)malloc(sizeof(struct var));
        }
        
        if (list[i]->valint)
        {
            programvars[nrvar]->valint = list[i]->valint;
        }
        programvars[nrvar]->valstring = (char*)malloc(128);
        if(list[i]->valstring)
        {
            strcpy(programvars[nrvar]->valstring, list[i]->valstring);//  char* valstring;
        }
        programvars[nrvar]->valfloat = list[i]->valfloat;//  float valfloat;
        programvars[nrvar]->varscope = (char*)malloc(128);
        if(list[i]->varscope)
        {
            strcpy(programvars[nrvar]->varscope, list[i]->varscope);//  char* varscope;
        }
        programvars[nrvar]->tip = (char*)malloc(128);
        if(list[i]->tip)
        {
            strcpy(programvars[nrvar]->tip, list[i]->tip);//  char* tip;
        }
        programvars[nrvar]->nume = (char*)malloc(128);
        if(list[i]->nume)
        {
            strcpy(programvars[nrvar++]->nume, list[i]->nume);
        }     //  char* nume;;  
        free(list[i]); 
    }
}

void adaugarevarlist(struct var* x)
{
    programvars[nrvar]=(struct var*)malloc(sizeof(struct var));
    programvars[nrvar]->nume = (char*)malloc(128);
    strcpy(programvars[nrvar]->nume, x->nume);
    programvars[nrvar]->tip = (char*)malloc(128);
    strcpy(programvars[nrvar++]->tip, x->tip);
}


