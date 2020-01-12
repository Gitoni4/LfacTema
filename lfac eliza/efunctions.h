#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct var
{
   int valint;
   char valchar;
   char* valstring;
   float valfloat;
   int valbool;
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

struct var** programvars ;
int nrvar = 0;
struct var** listdecl;
int nrdecl;

int verifdeclvar (struct var* x, char* scopex)
{
    for (int i = 0; i < nrvar; i++)
    { 
        printf("hai mergi\n");
        fflush(stdout);
        if (programvars[i]->nume == x->nume)
        {
            printf("hai mergi\n");
        fflush(stdout);
           if (strcmp(programvars[i]->varscope, x->varscope) == 0)
           {
               printf("hai mergi\n");
        fflush(stdout);
               return 1;
           }
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
        programvars[nrvar++] = list[i];  
    }
    free(list);
}
