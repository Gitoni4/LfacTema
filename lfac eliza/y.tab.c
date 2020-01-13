/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "elfac.y" /* yacc.c:339  */

#include "efunctions.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
extern int nrdecl;
extern int nrvar;
extern int nrfunctii;
int yyerror(char* s);

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 15 "elfac.y" /* yacc.c:355  */
 
  int valINT;
  float valFLOAT;
  char valCHAR;
  char* valSTRING;
  int valBOOL;
  struct var* variabila;
  struct var** varvector;
  struct varval* valoare;

#line 205 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,    41,    39,    48,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    46,
       2,     2,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    46,    47,    50,    53,    54,    57,    58,
      61,    62,    65,    68,    69,    72,    73,    76,    77,    78,
      81,    82,    85,    99,   104,   111,   123,   124,   127,   134,
     150,   167,   175,   207,   214,   221,   231,   232,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   248,   249,   252,
     260,   275,   292,   302,   335,   342,   349,   356,   366,   369,
     370,   373,   412,   413,   414,   415,   416,   417,   434,   435,
     438,   439,   440,   443,   444,   445,   446,   449,   452,   453,
     454,   457,   458,   459,   460,   463,   522,   570,   618,   666,
     692
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "PRINT", "NR", "RETURN", "TIPVAR",
  "ID", "FUNCTIONVAR", "EVAL", "CLASSVAR", "SINGLECHAR", "STRING", "BGIN",
  "END", "MAIN", "IF", "CLASS", "INTERN", "EXTERN", "INT", "ELSE", "RETRN",
  "AND", "OR", "EQUAL", "GE", "LE", "GL", "THEN", "WHILE", "DO", "CHAR",
  "BOOL", "FLOAT", "NRFLOAT", "FALSE", "TRUE", "'+'", "'-'", "'*'", "'/'",
  "\"->\"", "'{'", "'}'", "';'", "':'", "','", "'>'", "'('", "')'", "'['",
  "']'", "$accept", "program", "clase", "clasa", "corpclasa", "corp",
  "declarariClass", "listedeclClass", "listadeclClass", "declClass",
  "initc", "functii", "functie", "listaparam", "param", "declarariFunct",
  "listedeclFunct", "listadeclFunct", "declFunct", "initf", "blocFunct",
  "instrFunct", "declaratii", "listedeclaratie", "listadeclaratie",
  "declaratie", "init", "instructiuni", "bloc", "instructiune", "instrIF",
  "listaexprIF", "expresieIF", "instrWHILE", "listaexprWHILE",
  "expresieWHILE", "expresie", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,    43,
      45,    42,    47,   294,   123,   125,    59,    58,    44,    62,
      40,    41,    91,    93
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    10,    35,     2,  -120,    32,  -120,    30,  -120,    29,
    -120,    77,   123,   131,  -120,     1,    71,    97,    98,     5,
    -120,   138,    26,  -120,   145,   140,   109,  -120,  -120,   147,
     147,   113,  -120,  -120,   123,   116,   120,   114,  -120,    58,
    -120,   154,   147,  -120,   147,  -120,  -120,   115,   117,   145,
     118,   -29,   119,   121,   122,   148,    58,   124,   127,   157,
    -120,   160,    21,  -120,    73,   125,   170,     0,     0,     0,
    -120,  -120,  -120,  -120,   136,   129,   132,   135,  -120,  -120,
    -120,  -120,  -120,   130,   133,     0,   134,  -120,  -120,    61,
     137,    84,    43,   139,    94,    65,   142,   157,  -120,   171,
     143,   146,    74,   153,     0,     0,     0,     0,   149,   152,
       0,     0,     0,     0,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     9,   150,   178,    56,  -120,  -120,  -120,
    -120,   155,    80,    80,  -120,  -120,  -120,   156,  -120,  -120,
     110,   110,   110,   110,   158,  -120,  -120,   110,   110,   110,
     110,  -120,  -120,  -120,  -120,  -120,   186,   159,   -24,    22,
    -120,    -2,  -120,   161,   162,     0,    58,    58,   163,    15,
    -120,    90,   164,   181,   165,   166,   168,   169,  -120,  -120,
    -120,    85,   172,   173,   167,  -120,   186,   174,   175,     0,
     144,  -120,  -120,  -120,  -120,  -120,   176,  -120,    54,  -120,
     177,   182,    93,   179,   180,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,   183,    58,     0,   184,   101,  -120,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     1,     0,     4,     0,
      20,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       6,     0,     0,    24,     0,     0,     0,     2,    47,     0,
       0,     0,     7,    25,     0,     0,    52,    49,    51,     0,
      48,     0,     9,    10,     8,     5,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
      11,     0,     0,    50,     0,     0,     0,     0,     0,     0,
      58,    60,    65,    66,    15,    12,     0,     0,    54,    56,
      57,    55,    53,     0,     0,     0,     0,    90,    89,     0,
       0,    72,     0,     0,    80,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    63,    64,
      61,     0,    85,    86,    87,    88,    67,     0,    70,    71,
      73,    75,    74,    76,     0,    78,    79,    81,    83,    82,
      84,    17,    19,    18,    16,    13,     0,     0,     0,     0,
      27,     0,    36,     0,     0,     0,     0,     0,    31,     0,
      30,     0,     0,     0,     0,     0,     0,     0,    37,    42,
      43,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,    45,    44,    46,    22,    62,    68,    77,     0,    29,
       0,     0,     0,     0,     0,    33,    35,    34,    32,    40,
      41,    38,     0,     0,     0,     0,     0,    69,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   196,  -120,   187,   190,    44,  -120,   104,
    -120,  -120,   201,  -120,   188,  -120,    79,  -120,    41,  -120,
    -120,    60,  -120,   215,  -120,   185,   189,  -120,   -56,  -120,
    -119,    18,  -120,  -117,    19,  -120,   -66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    19,    20,    42,    43,    75,    76,
     154,     9,    10,    22,    23,   126,   127,   169,   170,   208,
     161,   162,    15,    16,    37,    38,    88,    27,    55,    56,
      57,    90,    91,    58,    93,    94,    92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    89,   157,    95,    13,    78,   158,   163,    87,   164,
       7,    65,    79,    80,   151,    53,   172,    25,     5,   102,
       1,   159,   152,    66,    17,    18,    78,   174,   173,    54,
     175,     1,    13,    79,    80,     6,    81,     7,   132,   133,
     134,   135,   163,   177,   164,   153,   140,   141,   142,   143,
      31,    95,    95,   147,   148,   149,   150,    81,   176,   205,
     157,   185,    50,   186,   158,   125,    51,   206,    52,   112,
     113,   114,   115,    53,    34,    53,    11,    35,    83,   159,
      12,    84,   104,   105,   106,   107,    60,    54,    60,    54,
     207,   119,   120,   121,   122,   187,    17,    18,   188,   181,
     104,   105,   106,   107,   104,   105,   106,   107,   110,   111,
     182,   183,   108,   104,   105,   106,   107,    28,   117,   118,
     130,   106,   107,   202,   104,   105,   106,   107,   138,   139,
      21,   195,   104,   105,   106,   107,   145,   146,    24,   211,
     104,   105,   106,   107,    29,    30,    33,   218,   216,   104,
     105,   106,   107,    36,    39,    40,    47,   215,    41,    45,
      48,    59,    49,    70,    61,    74,    62,    77,    64,    67,
      72,    68,    69,    73,    85,    86,    96,    97,    98,    99,
     125,   100,   137,   144,   101,   156,   190,   103,   109,   128,
     116,   123,   129,   131,   168,   136,   155,   203,   204,     8,
     166,   124,   167,   184,   165,   160,    32,   179,   180,   171,
      14,   191,   192,   189,   193,   194,   198,   196,   197,   212,
      44,   178,    46,   209,   213,   200,   201,   199,   210,   217,
      26,     0,   214,     0,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82
};

static const yytype_int16 yycheck[] =
{
      56,    67,     4,    69,     3,     5,     8,   126,     8,   126,
       8,    40,    12,    13,     5,    17,    40,    16,     8,    85,
      18,    23,    13,    52,    19,    20,     5,     5,    52,    31,
       8,    18,     3,    12,    13,     0,    36,     8,   104,   105,
     106,   107,   161,    45,   161,    36,   112,   113,   114,   115,
      45,   117,   118,   119,   120,   121,   122,    36,    36,     5,
       4,    46,     4,    48,     8,     9,     8,    13,    10,    26,
      27,    28,    29,    17,    48,    17,    44,    51,     5,    23,
      50,     8,    39,    40,    41,    42,    42,    31,    44,    31,
      36,    26,    27,    28,    29,     5,    19,    20,     8,   165,
      39,    40,    41,    42,    39,    40,    41,    42,    24,    25,
     166,   167,    51,    39,    40,    41,    42,    46,    24,    25,
      46,    41,    42,   189,    39,    40,    41,    42,   110,   111,
       7,    46,    39,    40,    41,    42,   117,   118,     7,    46,
      39,    40,    41,    42,    47,    47,     8,    46,   214,    39,
      40,    41,    42,     8,    14,    46,    40,   213,    11,    46,
      40,     7,    48,    15,    49,     8,    49,     7,    50,    50,
      46,    50,    50,    46,    49,     5,    40,    48,    46,    44,
       9,    51,    30,    32,    51,     7,     5,    53,    51,    46,
      51,    49,    46,    40,     8,    46,    46,    53,    22,     3,
      44,    97,    44,    40,    49,   126,    19,    46,    46,    50,
       9,    46,    46,    49,    46,    46,    49,    45,    45,    40,
      30,   161,    34,    46,    44,    51,    51,   186,    46,    45,
      15,    -1,    49,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    55,    56,    57,     8,     0,     8,    57,    65,
      66,    44,    50,     3,    66,    76,    77,    19,    20,    58,
      59,     7,    67,    68,     7,    16,    77,    81,    46,    47,
      47,    45,    59,     8,    48,    51,     8,    78,    79,    14,
      46,    11,    60,    61,    60,    46,    68,    40,    40,    48,
       4,     8,    10,    17,    31,    82,    83,    84,    87,     7,
      61,    49,    49,    79,    50,    40,    52,    50,    50,    50,
      15,    82,    46,    46,     8,    62,    63,     7,     5,    12,
      13,    36,    80,     5,     8,    49,     5,     8,    80,    90,
      85,    86,    90,    88,    89,    90,    40,    48,    46,    44,
      51,    51,    90,    53,    39,    40,    41,    42,    51,    51,
      24,    25,    26,    27,    28,    29,    51,    24,    25,    26,
      27,    28,    29,    49,    63,     9,    69,    70,    46,    46,
      46,    40,    90,    90,    90,    90,    46,    30,    85,    85,
      90,    90,    90,    90,    32,    88,    88,    90,    90,    90,
      90,     5,    13,    36,    64,    46,     7,     4,     8,    23,
      70,    74,    75,    84,    87,    49,    44,    44,     8,    71,
      72,    50,    40,    52,     5,     8,    36,    45,    75,    46,
      46,    90,    82,    82,    40,    46,    48,     5,     8,    49,
       5,    46,    46,    46,    46,    46,    45,    45,    49,    72,
      51,    51,    90,    53,    22,     5,    13,    36,    73,    46,
      46,    46,    40,    44,    49,    82,    90,    45,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      65,    65,    66,    67,    67,    68,    69,    69,    70,    71,
      71,    72,    72,    73,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    77,
      78,    78,    79,    79,    80,    80,    80,    80,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    86,    86,    87,    88,    88,
      88,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     6,     1,     2,     3,     3,
       1,     2,     3,     4,     2,     1,     4,     1,     1,     1,
       1,     2,    12,     3,     1,     2,     1,     2,     4,     3,
       1,     1,     4,     1,     1,     1,     1,     2,     5,     8,
       5,     5,     2,     2,     3,     3,     3,     2,     3,     3,
       3,     1,     1,     4,     1,     1,     1,     1,     4,     1,
       2,     5,     8,     5,     5,     2,     2,     5,     8,    12,
       3,     3,     1,     3,     3,     3,     3,     8,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 22:
#line 86 "elfac.y" /* yacc.c:1646  */
    {
           if (programfuncts[nrfunctii] == NULL)
           {
             programfuncts[nrfunctii] = (struct funct*)malloc(sizeof(struct funct));
           }
           programfuncts[nrfunctii]->nume = (char*)malloc(128);
           strcpy(programfuncts[nrfunctii]->nume, (yyvsp[-11].valSTRING)); 
           programfuncts[nrfunctii]->freturn = (char*)malloc(128);
           strcpy(programfuncts[nrfunctii]->freturn, (yyvsp[-5].valSTRING));
           nrfunctii++;
         }
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 100 "elfac.y" /* yacc.c:1646  */
    {
              adaugarevarlist((yyvsp[0].variabila));
              printf("%s %s, %d %f %s %s\n", (yyvsp[0].variabila)->nume, (yyvsp[0].variabila)->tip, (yyvsp[0].variabila)->valint, (yyvsp[0].variabila)->valfloat, (yyvsp[0].variabila)->valstring, (yyvsp[0].variabila)->varscope);
            }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 105 "elfac.y" /* yacc.c:1646  */
    {
              adaugarevarlist((yyvsp[0].variabila));
              printf("%s %s, %d %f %s %s\n", (yyvsp[0].variabila)->nume, (yyvsp[0].variabila)->tip, (yyvsp[0].variabila)->valint, (yyvsp[0].variabila)->valfloat, (yyvsp[0].variabila)->valstring, (yyvsp[0].variabila)->varscope);
            }
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 112 "elfac.y" /* yacc.c:1646  */
    {
         (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
         (yyval.variabila)->nume = (char*)malloc(128);
         strcpy((yyval.variabila)->nume, (yyvsp[0].valSTRING));
         (yyval.variabila)->varscope = (char*)malloc(128);
         strcpy((yyval.variabila)->varscope, "functie");
         (yyval.variabila)->tip = (char*)malloc(128);
         strcpy((yyval.variabila)->tip, (yyvsp[-1].valSTRING));
       }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 128 "elfac.y" /* yacc.c:1646  */
    {
                  atribuiretiplist((yyvsp[-1].varvector), (yyvsp[-2].valSTRING), nrdecl, "functie"); 
                  adaugarelist((yyvsp[-1].varvector), nrdecl);
                }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 135 "elfac.y" /* yacc.c:1646  */
    {
                     
                     
                     if (verifdeclvar((yyvsp[0].variabila), "functie") != -1) 
                     {  
                          yyerror("Variabila a fost deja declarata\n");
                          fflush(stdout);
                          (yyval.varvector) = (yyvsp[-2].varvector);
                     }    
                     else
                     {
                          (yyval.varvector) = curentlistdecl((yyvsp[-2].varvector), (yyvsp[0].variabila), nrdecl++);
                     }
                 
                   }
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "elfac.y" /* yacc.c:1646  */
    {
                     nrdecl = 0;
                     if (verifdeclvar((yyvsp[0].variabila), "functie") != -1) 
                     {  
                          printf("Variabila : %s a fost deja declarata\n", (yyvsp[0].variabila)->nume);
                          fflush(stdout);
                     }
                     else
                     {      
                        printf("%s %s, %d %f %s %s\n", (yyvsp[0].variabila)->nume, (yyvsp[0].variabila)->tip, (yyvsp[0].variabila)->valint, (yyvsp[0].variabila)->valfloat, (yyvsp[0].variabila)->valstring, (yyvsp[0].variabila)->varscope);
                        (yyval.varvector) = curentlistdecl (NULL, (yyvsp[0].variabila), nrdecl++);
                            
                     }
                   }
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "elfac.y" /* yacc.c:1646  */
    {
             (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
             (yyval.variabila)->nume = (char*)malloc(128);
             strcpy((yyval.variabila)->nume, (yyvsp[0].valSTRING));
             (yyval.variabila)->varscope = (char*)malloc(128);
             strcpy((yyval.variabila)->varscope, "functie");
           }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "elfac.y" /* yacc.c:1646  */
    {
              (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
              (yyval.variabila)->nume = (char*)malloc(128);
              (yyval.variabila)->tip = (char*)malloc(128);
              if (strcmp((yyvsp[0].valoare)->tip, "float") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valfloat = (yyvsp[0].valoare)->valfloat;
              }
              if (strcmp((yyvsp[0].valoare)->tip, "int") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valint = (yyvsp[0].valoare)->valint;
              }
              if (strcmp((yyvsp[0].valoare)->tip, "char") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valchar = (yyvsp[0].valoare)->valchar;
              }
              if (strcmp((yyvsp[0].valoare)->tip, "string") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valstring = (char *)malloc(128);
                strcpy((yyval.variabila)->valstring, (yyvsp[0].valoare)->valstring);
              }
                strcpy((yyval.variabila)->tip, (yyvsp[0].valoare)->tip);
                (yyval.variabila)->varscope = (char*)malloc(128);
                strcpy((yyval.variabila)->varscope, "functie");
           }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 208 "elfac.y" /* yacc.c:1646  */
    { 
         (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
         (yyval.valoare)->tip = (char*)malloc(128);
         strcpy((yyval.valoare)->tip, "int");
         (yyval.valoare)->valint = (yyvsp[0].valINT);   
       }
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 215 "elfac.y" /* yacc.c:1646  */
    {
          (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
          (yyval.valoare)->tip = (char*)malloc(128);
          strcpy((yyval.valoare)->tip, "float");
          (yyval.valoare)->valfloat = (yyvsp[0].valFLOAT);      
       }
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 222 "elfac.y" /* yacc.c:1646  */
    {
           (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
           (yyval.valoare)->tip = (char*)malloc(128);
           (yyval.valoare)->valstring = (char*)malloc(128);
           strcpy((yyval.valoare)->tip, "string");
           strcpy((yyval.valoare)->valstring, (yyvsp[0].valSTRING));
       }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 253 "elfac.y" /* yacc.c:1646  */
    { 
                     
                     atribuiretiplist((yyvsp[0].varvector), (yyvsp[-1].valSTRING), nrdecl, "global"); 
                     adaugarelist((yyvsp[0].varvector), nrdecl);                  
                 }
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 261 "elfac.y" /* yacc.c:1646  */
    {
                     
                     if (verifdeclvar((yyvsp[0].variabila), "global") != -1) 
                     {  
                          yyerror("Variabila a fost deja declarata\n");
                          fflush(stdout);
                          (yyval.varvector) = (yyvsp[-2].varvector);
                     }    
                     else
                     {
                          (yyval.varvector) = curentlistdecl((yyvsp[-2].varvector), (yyvsp[0].variabila), nrdecl++);
                          printf("%s %s, %d %f %s %s\n", (yyvsp[0].variabila)->nume, (yyvsp[0].variabila)->tip, (yyvsp[0].variabila)->valint, (yyvsp[0].variabila)->valfloat, (yyvsp[0].variabila)->valstring, (yyvsp[0].variabila)->varscope);
                     }
                 }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 276 "elfac.y" /* yacc.c:1646  */
    { 
                     nrdecl = 0;
                     if (verifdeclvar((yyvsp[0].variabila), "global") != -1) 
                     {  
                          yyerror("Variabila a fost deja declarata\n");
                          fflush(stdout);
                     }
                     else
                     {      
                        printf("%s %s, %d %f %s %s\n", (yyvsp[0].variabila)->nume, (yyvsp[0].variabila)->tip, (yyvsp[0].variabila)->valint, (yyvsp[0].variabila)->valfloat, (yyvsp[0].variabila)->valstring, (yyvsp[0].variabila)->varscope);
                        (yyval.varvector) = curentlistdecl (NULL, (yyvsp[0].variabila), nrdecl++);
                            
                     }
                 }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 293 "elfac.y" /* yacc.c:1646  */
    { 
              
              (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
              (yyval.variabila)->nume = (char*)malloc(128);
              strcpy((yyval.variabila)->nume, (yyvsp[0].valSTRING));
              (yyval.variabila)->varscope = (char*)malloc(128);
              strcpy((yyval.variabila)->varscope, "global");

            }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 303 "elfac.y" /* yacc.c:1646  */
    { 
              (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
              (yyval.variabila)->nume = (char*)malloc(128);
              (yyval.variabila)->tip = (char*)malloc(128);
              if (strcmp((yyvsp[0].valoare)->tip, "float") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valfloat = (yyvsp[0].valoare)->valfloat;
              }
              if (strcmp((yyvsp[0].valoare)->tip, "int") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valint = (yyvsp[0].valoare)->valint;
              }
              if (strcmp((yyvsp[0].valoare)->tip, "char") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valchar = (yyvsp[0].valoare)->valchar;
              }
              if (strcmp((yyvsp[0].valoare)->tip, "string") == 0)
              {
                strcpy((yyval.variabila)->nume, (yyvsp[-3].valSTRING));
                (yyval.variabila)->valstring = (char *)malloc(128);
                strcpy((yyval.variabila)->valstring, (yyvsp[0].valoare)->valstring);
              }
                strcpy((yyval.variabila)->tip, (yyvsp[0].valoare)->tip);
                (yyval.variabila)->varscope = (char*)malloc(128);
                strcpy((yyval.variabila)->varscope, "global");
              }
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 336 "elfac.y" /* yacc.c:1646  */
    { 
        (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
        (yyval.valoare)->tip = (char*)malloc(128);
        strcpy((yyval.valoare)->tip, "int");
        (yyval.valoare)->valint = (yyvsp[0].valINT);   
        }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 343 "elfac.y" /* yacc.c:1646  */
    {
          (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
          (yyval.valoare)->tip = (char*)malloc(128);
          strcpy((yyval.valoare)->tip, "float");
          (yyval.valoare)->valfloat = (yyvsp[0].valFLOAT);
        }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 350 "elfac.y" /* yacc.c:1646  */
    {
          (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
          (yyval.valoare)->tip = (char*)malloc(128);
          strcpy((yyval.valoare)->tip, "char");
          (yyval.valoare)->valchar = (yyvsp[0].valCHAR);
        }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 357 "elfac.y" /* yacc.c:1646  */
    {
           (yyval.valoare) = (struct varval*)malloc(sizeof(struct varval));
           (yyval.valoare)->tip = (char*)malloc(128);
           (yyval.valoare)->valstring = (char*)malloc(128);
           strcpy((yyval.valoare)->tip, "string");
           strcpy((yyval.valoare)->valstring, (yyvsp[0].valSTRING));
        }
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 374 "elfac.y" /* yacc.c:1646  */
    {
                for (int i = 0; i < nrvar; i++)
                {
                  if (strcmp((yyvsp[-4].valSTRING), programvars[i]->nume) == 0)
                  {
                    if ((yyvsp[-1].variabila)->varscope != NULL)
                    {
                      if (strcmp(programvars[i]->varscope, (yyvsp[-1].variabila)->varscope) == 0)
                      {
                        if (strcmp(programvars[i]->tip, (yyvsp[-1].variabila)->tip) == 0)
                        {
                          if (strcmp(programvars[i]->tip, "int") == 0)
                          {
                            programvars[i]->valint = (yyvsp[-1].variabila)->valint;
              
                          }
                          if (strcmp(programvars[i]->tip, "float") == 0)
                          {
                            programvars[i]->valfloat = (yyvsp[-1].variabila)->valfloat;
                          }
                          if (strcmp(programvars[i]->tip, "strcpy") == 0)
                          {
                            strcpy(programvars[i]->valstring, (yyvsp[-1].variabila)->valstring);
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
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 418 "elfac.y" /* yacc.c:1646  */
    {
              if (strcmp((yyvsp[-2].variabila)->tip, "int") == 0)
              {
                printf("Eval = %d , de tip int\n", (yyvsp[-2].variabila)->valint);
              } 
              if (strcmp((yyvsp[-2].variabila)->tip, "float") == 0)
              {
                printf("Eval = %f , de tip float\n", (yyvsp[-2].variabila)->valfloat);
              } 
              if (strcmp((yyvsp[-2].variabila)->tip, "string") == 0)
              {
                printf("Eval = %s , de tip string\n", (yyvsp[-2].variabila)->valstring);
              } 
            }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 464 "elfac.y" /* yacc.c:1646  */
    {
            if (((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope != NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope != NULL && strcmp((yyvsp[-2].variabila)->varscope, (yyvsp[0].variabila)->varscope) == 0))  
            { 
              if (((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 || strcmp((yyvsp[-2].variabila)->tip, "string") == 0) && (strcmp((yyvsp[0].variabila)->tip, "string") == 0 || strcmp((yyvsp[0].variabila)->tip, "char") == 0))
                 || ((strcmp((yyvsp[0].variabila)->tip, "int") == 0 || strcmp((yyvsp[0].variabila)->tip, "string") == 0) && (strcmp((yyvsp[-2].variabila)->tip, "string") == 0 && strcmp((yyvsp[-2].variabila)->tip, "char") == 0)))
             {
               
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free((yyval.variabila));
             } 
             else
             {
               if ((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 && strcmp((yyvsp[0].variabila)->tip, "float") == 0) || (strcmp((yyvsp[-2].variabila)->tip, "float") == 0 && strcmp((yyvsp[0].variabila)->tip, "int") == 0))
               {
                 strcpy((yyval.variabila)->tip, "float");
               }
               if (strcmp((yyvsp[-2].variabila)->tip, (yyvsp[0].variabila)->tip) == 0)
               {
                 strcpy((yyval.variabila)->tip, (yyvsp[-2].variabila)->tip);
               }
               if (strcmp((yyval.variabila)->tip, "int") == 0)
               {
                 
                 (yyval.variabila)->valint = (yyvsp[-2].variabila)->valint + (yyvsp[0].variabila)->valint;
               }
               if (strcmp((yyval.variabila)->tip, "float") == 0)
               {
                 if(strcmp((yyvsp[-2].variabila)->tip, "int") == 0)
                  {
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valint + (yyvsp[0].variabila)->valfloat;
                  }
                  else 
                  {
                    if(strcmp((yyvsp[0].variabila)->tip, "int") == 0)
                    {
                       (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat + (yyvsp[0].variabila)->valint;
                    } 
                    else
                    {
                      (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat + (yyvsp[0].variabila)->valfloat;
                    }
                  }   
               }
               if(strcmp((yyval.variabila)->tip, "string") == 0)
               {
                 (yyval.variabila)->valstring = (char*)malloc(128);
                 strcpy((yyval.variabila)->valstring, strcat((yyvsp[-2].variabila)->valstring, (yyvsp[0].variabila)->valstring));
               }
              }
            }
            else
            {
              
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            }
          }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 523 "elfac.y" /* yacc.c:1646  */
    {
         if (((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope != NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope != NULL && strcmp((yyvsp[-2].variabila)->varscope, (yyvsp[0].variabila)->varscope) == 0))  
          {   
             if (((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 || strcmp((yyvsp[-2].variabila)->tip, "string") == 0) && (strcmp((yyvsp[0].variabila)->tip, "string") == 0 || strcmp((yyvsp[0].variabila)->tip, "char") == 0))
                 || ((strcmp((yyvsp[0].variabila)->tip, "int") == 0 || strcmp((yyvsp[0].variabila)->tip, "string") == 0) && (strcmp((yyvsp[-2].variabila)->tip, "string") == 0 && strcmp((yyvsp[-2].variabila)->tip, "char") == 0)))
             {
               
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free((yyval.variabila));
             } 
             else
             {
               if ((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 && strcmp((yyvsp[0].variabila)->tip, "float") == 0) || (strcmp((yyvsp[-2].variabila)->tip, "float") == 0 && strcmp((yyvsp[0].variabila)->tip, "int") == 0))
               {
                 strcpy((yyval.variabila)->tip, "float");
               }
               if (strcmp((yyvsp[-2].variabila)->tip, (yyvsp[0].variabila)->tip) == 0)
               {
                 strcpy((yyval.variabila)->tip, (yyvsp[-2].variabila)->tip);
               }
               if (strcmp((yyval.variabila)->tip, "int") == 0)
               {
                 (yyval.variabila)->valint = (yyvsp[-2].variabila)->valint - (yyvsp[0].variabila)->valint;
               }
               if (strcmp((yyval.variabila)->tip, "float") == 0)
               {
                 if(strcmp((yyvsp[-2].variabila)->tip, "int") == 0)
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valint - (yyvsp[0].variabila)->valfloat;
                 else if(strcmp((yyvsp[0].variabila)->tip, "int") == 0)
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat - (yyvsp[0].variabila)->valint;
                 else
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat - (yyvsp[0].variabila)->valfloat;
               }
               if(strcmp((yyval.variabila)->tip, "string") == 0)
               {
                 (yyval.variabila)->valstring = (char*)malloc(128);
                 strcpy((yyval.variabila)->valstring, strcat((yyvsp[-2].variabila)->valstring, (yyvsp[0].variabila)->valstring));
               }
             }
            }
            else
            {
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            }
          }
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 571 "elfac.y" /* yacc.c:1646  */
    {
          if (((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope != NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope != NULL && strcmp((yyvsp[-2].variabila)->varscope, (yyvsp[0].variabila)->varscope) == 0))  
          {   
             if (((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 || strcmp((yyvsp[-2].variabila)->tip, "string") == 0) && (strcmp((yyvsp[0].variabila)->tip, "string") == 0 || strcmp((yyvsp[0].variabila)->tip, "char") == 0))
                 || ((strcmp((yyvsp[0].variabila)->tip, "int") == 0 || strcmp((yyvsp[0].variabila)->tip, "string") == 0) && (strcmp((yyvsp[-2].variabila)->tip, "string") == 0 && strcmp((yyvsp[-2].variabila)->tip, "char") == 0)))
             {
               
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite");
               fflush(stdout);
               free((yyval.variabila));
             } 
             else
             {
               if ((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 && strcmp((yyvsp[0].variabila)->tip, "float") == 0) || (strcmp((yyvsp[-2].variabila)->tip, "float") == 0 && strcmp((yyvsp[0].variabila)->tip, "int") == 0))
               {
                 strcpy((yyval.variabila)->tip, "float");
               }
               if (strcmp((yyvsp[-2].variabila)->tip, (yyvsp[0].variabila)->tip) == 0)
               {
                 strcpy((yyval.variabila)->tip, (yyvsp[-2].variabila)->tip);
               }
               if (strcmp((yyval.variabila)->tip, "int") == 0)
               {
                 (yyval.variabila)->valint = (yyvsp[-2].variabila)->valint * (yyvsp[0].variabila)->valint;
               }
               if (strcmp((yyval.variabila)->tip, "float") == 0)
               {
                 if(strcmp((yyvsp[-2].variabila)->tip, "int") == 0)
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valint * (yyvsp[0].variabila)->valfloat;
                 else if(strcmp((yyvsp[0].variabila)->tip, "int") == 0)
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat * (yyvsp[0].variabila)->valint;
                 else
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat * (yyvsp[0].variabila)->valfloat;
               }
               if(strcmp((yyval.variabila)->tip, "string") == 0)
               {
                 (yyval.variabila)->valstring = (char*)malloc(128);
                 strcpy((yyval.variabila)->valstring, strcat((yyvsp[-2].variabila)->valstring, (yyvsp[0].variabila)->valstring));
               }
              }
            } 
            else
            {
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            } 
          }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 619 "elfac.y" /* yacc.c:1646  */
    {
          if (((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope != NULL) || ((yyvsp[-2].variabila)->varscope == NULL && (yyvsp[0].variabila)->varscope == NULL) || ((yyvsp[-2].variabila)->varscope != NULL && (yyvsp[0].variabila)->varscope != NULL && strcmp((yyvsp[-2].variabila)->varscope, (yyvsp[0].variabila)->varscope) == 0))  
          {  
          
             if (((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 || strcmp((yyvsp[-2].variabila)->tip, "string") == 0) && (strcmp((yyvsp[0].variabila)->tip, "string") == 0 || strcmp((yyvsp[0].variabila)->tip, "char") == 0))
                 || ((strcmp((yyvsp[0].variabila)->tip, "int") == 0 || strcmp((yyvsp[0].variabila)->tip, "string") == 0) && (strcmp((yyvsp[-2].variabila)->tip, "string") == 0 && strcmp((yyvsp[-2].variabila)->tip, "char") == 0)))
             {
               yyerror("Nu se pot efectua operatii cu 2 tipuri diferite\n");
               fflush(stdout);
               free((yyval.variabila));
             } 
             else
             {
               if ((strcmp((yyvsp[-2].variabila)->tip, "int") == 0 && strcmp((yyvsp[0].variabila)->tip, "float") == 0) || (strcmp((yyvsp[-2].variabila)->tip, "float") == 0 && strcmp((yyvsp[0].variabila)->tip, "int") == 0))
               {
                 strcpy((yyval.variabila)->tip, "float");
               }
               if (strcmp((yyvsp[-2].variabila)->tip, (yyvsp[0].variabila)->tip) == 0)
               {
                 strcpy((yyval.variabila)->tip, (yyvsp[-2].variabila)->tip);
               }
               if (strcmp((yyval.variabila)->tip, "int") == 0)
               {
                 (yyval.variabila)->valint = (yyvsp[-2].variabila)->valint / (yyvsp[0].variabila)->valint;
               }
               if (strcmp((yyval.variabila)->tip, "float") == 0)
               {
                 if(strcmp((yyvsp[-2].variabila)->tip, "int") == 0)
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valint / (yyvsp[0].variabila)->valfloat;
                 else if(strcmp((yyvsp[0].variabila)->tip, "int") == 0)
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat / (yyvsp[0].variabila)->valint;
                 else
                    (yyval.variabila)->valfloat = (yyvsp[-2].variabila)->valfloat / (yyvsp[0].variabila)->valfloat;
               }
               if(strcmp((yyval.variabila)->tip, "string") == 0)
               {
                 (yyval.variabila)->valstring = (char*)malloc(128);
                 strcpy((yyval.variabila)->valstring, strcat((yyvsp[-2].variabila)->valstring, (yyvsp[0].variabila)->valstring));
               }
              }
            } 
            else
            {
              yyerror("Nu se pot efectua operatii intre variabile de scope diferit\n");
              fflush(stdout);
            } 
          }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 667 "elfac.y" /* yacc.c:1646  */
    { 
          
          struct var* auxvar = (struct var*)malloc(sizeof(struct var));
          auxvar->tip = (char*)malloc(128);
          auxvar->valstring = (char*)malloc(128);
          auxvar->varscope = (char*)malloc(128);
          auxvar->varscope = NULL;
          if (strcmp((yyvsp[0].valoare)->tip, "int") == 0)
          {
            strcpy(auxvar->tip, (yyvsp[0].valoare)->tip);
            auxvar->valint = (yyvsp[0].valoare)->valint;
          } 
          if (strcmp((yyvsp[0].valoare)->tip, "float") == 0)
          {
            strcpy(auxvar->tip, (yyvsp[0].valoare)->tip);
            auxvar->valfloat = (yyvsp[0].valoare)->valfloat;
          } 
          if (strcmp((yyvsp[0].valoare)->tip, "string") == 0)
          {
            strcpy(auxvar->tip, (yyvsp[0].valoare)->tip);
            strcpy(auxvar->valstring, (yyvsp[0].valoare)->valstring);
          } 
          (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
          (yyval.variabila) = auxvar;
        }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 693 "elfac.y" /* yacc.c:1646  */
    {
          (yyval.variabila) = (struct var*)malloc(sizeof(struct var));
          (yyval.variabila)->tip = (char*)malloc(128);
          int varnumar = 0;
          for (int i = 0; i < nrvar && varnumar == 0; i++)
          {
            
            if (strcmp(programvars[i]->nume, (yyvsp[0].valSTRING)) == 0)
            {
               
               varnumar = 1;
            }
          }
          if (varnumar == 1)
          {
             
            strcpy((yyval.variabila)->tip, programvars[varnumar]->tip);
            if (strcmp((yyval.variabila)->tip, "int") == 0)
            {
                (yyval.variabila)->valint = programvars[varnumar]->valint;
            }
            if (strcmp((yyval.variabila)->tip, "float") == 0)
            {
                (yyval.variabila)->valfloat = programvars[varnumar]->valfloat;
            }
            if (strcmp((yyval.variabila)->tip, "string") == 0)
            {
               (yyval.variabila)->valstring = (char*)malloc(128);
               strcpy((yyval.variabila)->valstring, programvars[varnumar]->valstring);
            }
          }
          if (varnumar == 0)
          { 
            yyerror("Variabila nu a fost declarata, linia \n");
          }      
        }
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2121 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 732 "elfac.y" /* yacc.c:1906  */


int yyerror(char * s)
{
  printf("\n!!!  eroare: %s la linia:%d\n",s,yylineno);
}



int main(int argc, char** argv)
{
  yyin=fopen(argv[1],"r");
  yyparse();
}
