/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VAR = 258,
    PRINT = 259,
    NR = 260,
    RETURN = 261,
    TIPVAR = 262,
    ID = 263,
    FUNCTIONVAR = 264,
    EVAL = 265,
    CLASSVAR = 266,
    SINGLECHAR = 267,
    STRING = 268,
    BGIN = 269,
    END = 270,
    MAIN = 271,
    IF = 272,
    CLASS = 273,
    INTERN = 274,
    EXTERN = 275,
    INT = 276,
    ELSE = 277,
    RETRN = 278,
    AND = 279,
    OR = 280,
    EQUAL = 281,
    GE = 282,
    LE = 283,
    GL = 284,
    THEN = 285,
    WHILE = 286,
    DO = 287,
    CHAR = 288,
    BOOL = 289,
    FLOAT = 290,
    NRFLOAT = 291,
    FALSE = 292,
    TRUE = 293
  };
#endif
/* Tokens.  */
#define VAR 258
#define PRINT 259
#define NR 260
#define RETURN 261
#define TIPVAR 262
#define ID 263
#define FUNCTIONVAR 264
#define EVAL 265
#define CLASSVAR 266
#define SINGLECHAR 267
#define STRING 268
#define BGIN 269
#define END 270
#define MAIN 271
#define IF 272
#define CLASS 273
#define INTERN 274
#define EXTERN 275
#define INT 276
#define ELSE 277
#define RETRN 278
#define AND 279
#define OR 280
#define EQUAL 281
#define GE 282
#define LE 283
#define GL 284
#define THEN 285
#define WHILE 286
#define DO 287
#define CHAR 288
#define BOOL 289
#define FLOAT 290
#define NRFLOAT 291
#define FALSE 292
#define TRUE 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "elfac.y" /* yacc.c:1909  */
 
  int valINT;
  float valFLOAT;
  char valCHAR;
  char* valSTRING;
  int valBOOL;
  struct var* variabila;
  struct var** varvector;
  struct varval* valoare;

#line 141 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
