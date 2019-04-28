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
#line 1 "PL_I.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>

#define YYERROR_VERBOSE 1
#define YYSTYPE char*

int yylineno;

YYSTYPE yylval;

#define MAX_LENGTH_ASS_PROG 50

#define MAX_LENGTH_DCL_PART 50

#define MAX_LENGTH_IMP_PART 50

char s1[80];

char Prolog[3][80];
char Epilog[80];

char AssProg[MAX_LENGTH_ASS_PROG][80];
int pAssProg;

char DclPart[MAX_LENGTH_DCL_PART][80];
int pDclPart;

char ImpPart[MAX_LENGTH_IMP_PART][80];
int pImpPart;

char AssProgName[9];
char ErrorMessage[100];

int IsDclName( char* pName, int length) {
int i, j;
char etalon[9];

 for (i=0; i<pDclPart; i++) {

  j=0;
  while (DclPart[i][j] != ' ')  etalon[j++]=DclPart[i][j];
  etalon[j]=0;

  if (length != j) continue;

  if (memcmp(&DclPart[i][0], pName, length)) {
   continue;
  }
  else {
   return 0;
  }
 }
 return 1;
}

void yyerror(const char *str) {
 fprintf(stderr, "\n error: string N  %u, %s\n", yylineno, str);
}

void pro();
void odi(char *tpe, char *rzr, char *lit, char *type);
void odr(char *tpe, char *rzr);
void opr(char *pr_name);
int  oen(char *pr_name);
int  opa(char *ipe);
void avi_lit(char *lit);
int  avi_ipe(char *ipe);
void avi_avi_znk_lit(char *znk, char *lit);
int  avi_avi_znk_ipe(char *znk, char *avi, char *ipe);


#line 139 "PL_I.tab.c" /* yacc.c:339  */

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
   by #include "PL_I.tab.h".  */
#ifndef YY_YY_PL_I_TAB_H_INCLUDED
# define YY_YY_PL_I_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    PROC = 259,
    OPTIONS = 260,
    MAIN = 261,
    END = 262,
    DCL = 263,
    BIN = 264,
    FIXED = 265,
    NUM = 266,
    INIT = 267,
    CHAR = 268,
    BIT = 269,
    ZNK = 270
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PL_I_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "PL_I.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   65

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  22
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  25
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  68

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   270

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
      16,    17,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    19,    18,
       2,    20,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    81,    83,    84,    86,    87,    89,    90,
      91,    93,    95,    97,    99,   101,   103,   105,   107,   108,
     110,   112,   113,   114,   115,   116
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "PROC", "OPTIONS", "MAIN",
  "END", "DCL", "BIN", "FIXED", "NUM", "INIT", "CHAR", "BIT", "ZNK", "'('",
  "')'", "';'", "':'", "'='", "'|'", "$accept", "pro", "tel", "dec", "odc",
  "odi", "odr", "ipe", "rzr", "cif", "lit", "opr", "oen", "imp", "opa",
  "avi", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    40,    41,    59,    58,
      61,   124
};
# endif

#define YYPACT_NINF -42

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-42)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       2,   -11,    14,     7,    17,   -42,    19,    18,    15,   -42,
     -42,   -42,    21,   -42,     3,    24,   -42,   -42,     4,    19,
     -42,    12,    20,    13,    16,    22,    -1,   -42,    25,    23,
      26,    26,   -42,   -42,   -42,   -42,   -12,    27,    26,   -42,
      29,    30,    -1,   -42,    28,    32,    31,    39,    34,   -42,
     -42,    19,   -42,    -5,    37,   -42,   -42,    38,   -42,    44,
      45,   -42,    40,    41,    42,    43,   -42,   -42
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     0,     4,
       6,     7,     0,    12,     0,     0,     2,     5,     0,     3,
      18,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,     0,    17,    15,    22,    21,     0,     0,     0,    13,
       0,     0,     0,    20,     0,     0,     0,     0,     0,    24,
      23,     0,    16,     0,     0,    10,    25,     0,    11,     0,
       0,    14,     0,     0,     0,     0,     9,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,   -42,   -42,    33,   -42,   -42,    -6,   -27,   -42,
     -41,   -42,   -42,   -42,    46,   -42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,     9,    10,    11,    18,    40,    62,
      35,     3,    16,    19,    20,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    50,    13,    42,    41,     1,    43,    57,     4,    44,
      33,    46,    22,    58,     5,     6,    23,    24,    13,    63,
      34,    12,    13,     6,    26,    15,    21,    25,    28,    30,
      29,    37,    31,     0,     0,     0,    49,    39,     0,    38,
      32,    17,     0,     0,    45,    56,    47,    48,    53,    51,
      52,    54,    55,    59,    60,    61,    33,    64,    65,     0,
      66,    67,     0,     0,     0,    27
};

static const yytype_int8 yycheck[] =
{
       6,    42,     3,    15,    31,     3,    18,    12,    19,    21,
      11,    38,     9,    18,     0,     8,    13,    14,     3,    60,
      26,     4,     3,     8,    20,     7,     5,     3,    16,    16,
      10,     6,    16,    -1,    -1,    -1,    42,    11,    -1,    16,
      18,     8,    -1,    -1,    17,    51,    17,    17,    17,    21,
      18,    12,    18,    16,    16,    11,    11,    17,    17,    -1,
      18,    18,    -1,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    23,    33,    19,     0,     8,    24,    25,    26,
      27,    28,     4,     3,    29,     7,    34,    26,    29,    35,
      36,     5,     9,    13,    14,     3,    20,    36,    16,    10,
      16,    16,    18,    11,    29,    32,    37,     6,    16,    11,
      30,    30,    15,    18,    21,    17,    30,    17,    17,    29,
      32,    21,    18,    17,    12,    18,    29,    12,    18,    16,
      16,    11,    31,    32,    17,    17,    18,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    22,    23,    24,    25,    25,    26,    26,    27,    27,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    35,
      36,    37,    37,    37,    37,    37
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     1,     1,    12,    11,
       7,     8,     1,     1,     1,     1,     8,     3,     1,     2,
       4,     1,     1,     3,     3,     4
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
        case 2:
#line 79 "PL_I.y" /* yacc.c:1646  */
    { pro(); }
#line 1316 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 89 "PL_I.y" /* yacc.c:1646  */
    { odi((yyvsp[-10]), (yyvsp[-6]), (yyvsp[-2]), "BIN"); }
#line 1322 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 90 "PL_I.y" /* yacc.c:1646  */
    { odi((yyvsp[-9]), (yyvsp[-6]), (yyvsp[-2]), "CHAR"); }
#line 1328 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 91 "PL_I.y" /* yacc.c:1646  */
    { odi((yyvsp[-5]), (yyvsp[-2]), "0", "BIT"); }
#line 1334 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 93 "PL_I.y" /* yacc.c:1646  */
    { odr((yyvsp[-6]), (yyvsp[-2])); }
#line 1340 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "PL_I.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1346 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 97 "PL_I.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1352 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "PL_I.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1358 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "PL_I.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1364 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 103 "PL_I.y" /* yacc.c:1646  */
    { opr((yyvsp[-7])); }
#line 1370 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "PL_I.y" /* yacc.c:1646  */
    { if ( oen((yyvsp[-1])) ) YYABORT; }
#line 1376 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 110 "PL_I.y" /* yacc.c:1646  */
    { if ( opa((yyvsp[-3])) ) YYABORT; }
#line 1382 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "PL_I.y" /* yacc.c:1646  */
    { avi_lit((yyvsp[0])); }
#line 1388 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "PL_I.y" /* yacc.c:1646  */
    { if ( avi_ipe((yyvsp[0])) ) YYABORT;}
#line 1394 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "PL_I.y" /* yacc.c:1646  */
    { avi_avi_znk_lit((yyvsp[-1]), (yyvsp[0])); }
#line 1400 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "PL_I.y" /* yacc.c:1646  */
    { if ( avi_avi_znk_ipe((yyvsp[-1]), "", (yyvsp[0])) ) YYABORT; }
#line 1406 "PL_I.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 116 "PL_I.y" /* yacc.c:1646  */
    { if ( avi_avi_znk_ipe("|", (yyvsp[-3]), (yyvsp[0])) ) YYABORT; }
#line 1412 "PL_I.tab.c" /* yacc.c:1646  */
    break;


#line 1416 "PL_I.tab.c" /* yacc.c:1646  */
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
#line 118 "PL_I.y" /* yacc.c:1906  */

/*
***************************************************************************************************************
*                   Начало библиотеки семантических программ                                                  *
***************************************************************************************************************
*/

/*
...............................................................................................................
. Программа void pro()                                                                                        .
. Соединяет в массиве AssProg вместе следующие части ассемблеровского эквивалента:                            .
.  - пролог (из массива Prolog),                                                                              ,
.  - императивную часть (из массива ImpPart),                                                                 .
.  - декларативную часть (из массива DeclPart),                                                               .
.  - эпилог (из массива epilog).                                                                              .
. Распечатывает результат                                                                                     .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void pro()
{int i,j;

                    memcpy(&AssProg[pAssProg++][0], &Prolog[0][0], 80);
                    memcpy(&AssProg[pAssProg++][0], &Prolog[1][0], 80);
                    memcpy(&AssProg[pAssProg++][0], &Prolog[2][0], 80);


                    for (i=0; i<pImpPart; i++) {
                     memcpy(&AssProg[pAssProg++][0], &ImpPart[i][0], 80);
                    }

                    for (i=0; i<pDclPart; i++) {
                     memcpy(&AssProg[pAssProg++][0], &DclPart[i][0], 80);
                    }

                    memcpy(&AssProg[pAssProg++], &Epilog[0], 80);

                    printf("\nR e s u l t   of   G e n e r a t i o n\n");
                    for (i=0; i<pAssProg; i++) {
                      printf("\n");
                      for (j=0; j<79; j++) {
                       printf("%c", AssProg[i][j]);
                      }
                    }

                    printf("\n");

                    if(yydebug) {

                     printf("\nDclPart");
                     for (i=0; i<pDclPart; i++) {
                      printf("\n");
                      for (j=0; j<79; j++) {
                       printf("%c", DclPart[i][j]);
                      }
                     }

                     printf("\n");

                     printf("\nImpPart");
                     for (i=0; i<pImpPart; i++) {
                      printf("\n");
                      for (j=0; j<79; j++) {
                       printf("%c", ImpPart[i][j]);
                      }
                     }

                     printf("\n");
                    }
}

/*
...............................................................................................................
. Программа void odi(char *ipe, char *rzr, char *lit)                                                         .
.                                                                                                             .
. Формирует и дописывает в свободную строку массива DclPart ассемблеровский эквивалент оператора ЯВУ,         .
. который  объявляет и инициализирует именованный объект (dcl с инициализацией).                              .
.                                                                                                             .
. Параметры: ipe (имя переменной), rzr (разрядность), lit (инициализирующее значение).                        .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void odi(char *ipe, char *rzr, char *lit, char *type) {
               memset(&s1[0], ' ', 80);
               memcpy(&s1[0], ipe, strlen(ipe));
               memcpy(&s1[9], "DC", 2);
               if(!memcmp(type, "CHAR", 4)) {
                s1[15]='C';
                s1[16]='L';
                memcpy(&s1[17], rzr, strlen(rzr));
               }
               else {
                s1[15]='B';
		s1[16]='L';
		memcpy(&s1[17], rzr, strlen(rzr));
               }
               s1[18]='\'';
               memcpy(&s1[19], lit, strlen(lit));
               s1[19+strlen(lit)]='\'';
               memcpy(&s1[30], "Variable declaration with initialization", 40);

               memcpy(&DclPart[pDclPart][0], &s1[0], 80);
               pDclPart++;
              }

/*
...............................................................................................................
. Программа void odr(char *ipe, char *rzr)                                                                    .
.                                                                                                             .
. Формирует и дописывает в свободную строку массива DclPart ассемблеровский эквивалент оператора ЯВУ,         .
. который  объявляет именованный объект (dcl без инициализации).                                              .
.                                                                                                             .
. Параметры: ipe (имя переменной), rzr (разрядность).                                                         .
.                                                                                                             .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void odr(char *ipe, char *rzr) {
               memset(&s1[0], ' ', 80);
               memcpy(&s1[0], ipe, strlen(ipe));
               memcpy(&s1[9], "DS", 2);
               if(!memcmp(rzr, "31", 2))
                s1[15]='F';
               else
                s1[15]='H';
               memcpy(&s1[30], "Variable declaration without initialization", 43);

               memcpy(&DclPart[pDclPart][0], &s1[0], 80);
               pDclPart++;
}

/*
...............................................................................................................
. Программа void opr(char *pr_name)                                                                           .
.                                                                                                             .
. Формирует и дописывает в свободную строку массива Prolog  ассемблеровский эквивалент оператора ЯВУ,         .
. который  объявляет пролог программы на ЯВУ (proc options ...).                                              .
.                                                                                                             .
. Параметры: pr_name (имя программы).                                                                         .
.                                                                                                             .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/


void opr(char *pr_name) {
               memset(&s1[0], ' ', 80);
               memcpy(&s1[0], pr_name, strlen(pr_name));
               memcpy(&s1[9], "START 0", 7);
               memcpy(&s1[30], "Programm start", 14);
               memcpy(&Prolog[0][0], &s1[0], 80);

               memset(&s1[0], ' ', 80);
               memcpy(&s1[9], "BALR  @RBASE,0", 14);
               memcpy(&s1[30], "Base initialization", 19);
               memcpy(&Prolog[1][0], &s1[0], 80);


               memset(&s1[0], ' ', 80);
               memcpy(&s1[9], "USING *,@RBASE", 14);
               memcpy(&s1[30], "Base declaration", 16);
               memcpy(&Prolog[2][0], &s1[0], 80);

               memcpy(&AssProgName[0], pr_name, strlen(pr_name));
}

/*
...............................................................................................................
. Программа int oen(char *pr_name)                                                                            .
.                                                                                                             .
. Формирует и дописывает в массив Epilog ассемблеровский эквивалент оператора ЯВУ,                            .
. который  объявляет эпилог программы на ЯВУ (end ...).                                                       .
.                                                                                                             .
. Параметры: pr_name (имя программы).                                                                         .
.                                                                                                             .
. Возвращаемый результат 0 (если pr_name совпадает с pr_name пролога) и 1 (в противном случае)                .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int oen(char *pr_name) {

               if (!memcmp(&Prolog[0][0], pr_name, strlen(pr_name))){

                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "END", 3);
                memcpy(&s1[30], "Programm end", 12);
                memcpy(&Epilog[0], &s1[0], 80);

                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "BCR   15,14", 11);
                memcpy(&s1[30], "Return from programm", 20);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
                return 0;
               }
               else {
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], pr_name);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in oen\n");
                yyerror(&ErrorMessage[0]);
                return 1;
               }
}

/*
...............................................................................................................
. Программа int opa(char *ipe)                                                                                .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент оператора ЯВУ,       .
. который  присваивает переменной ipe значение вычисленного арифметического выражения, находящегося в регистре.
. RRAB  (имя перемеменной =  ...).                                                                            .
.                                                                                                             .
. Параметры: pr_name (имя программы).                                                                         .
.                                                                                                             .
. Возвращаемый результат 0 (если ipe объявлена ранее в операторе dcl) и 1 (в противном случае)                .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int opa(char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in left part of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }
                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "STC", 3);
                memcpy(&s1[15], "@RABP2,", 7);
                memcpy(&s1[22], ipe, strlen(ipe));
                memcpy(&s1[30], "Result storage", 14);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                 pImpPart++;

                return 0;
}

/*
...............................................................................................................
. Программа void avi_lit(char *lit)                                                                           .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено литералом.                                                                           .
.                                                                                                             .
. Параметры: lit (литерал).                                                                                   .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void avi_lit(char *lit) {
                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "L", 1);
                memcpy(&s1[15], "RRAB,=F\'", 8);
                memcpy(&s1[23], lit, strlen(lit));
                memcpy(&s1[23+strlen(lit)], "\'", 1);
                memcpy(&s1[30], "Literal loading", 15);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
}

/*
...............................................................................................................
. Программа int avi_ipe(char *ipe)                                                                            .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено именем переменной ipe.                                                               .
.                                                                                                             .
. Параметры: ipe (имя переменной).                                                                            .
.                                                                                                             .
. Возвращаемый результат 0 (если ipe объявлена ранее в операторе dcl) и 1 (в противном случае)                .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int  avi_ipe(char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in avi of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }
                //memset(&s1[0], ' ', 80);
                //memcpy(&s1[9], "L", 1);
                //memcpy(&s1[15], "RRAB,", 5);
                //memcpy(&s1[20], ipe, strlen(ipe));
                //memcpy(&s1[30], "Variable value loading", 22);

                //memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                //pImpPart++;

                return 0;
}

/*
...............................................................................................................
. Программа void avi_avi_znk_lit(char *lit)                                                                   .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено как леворекурсивное с литералом справа.                                              .
.                                                                                                             .
. Параметры: znk (знак + или -) lit (литерал).                                                                .
.                                                                                                             .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void avi_avi_znk_lit(char *znk, char *lit) {
                memset(&s1[0], ' ', 80);
                if(!memcmp(znk, "+", 1)) {
                 memcpy(&s1[9], "A", 1);
                 memcpy(&s1[30], "Literal\'s value adding", 22);
                }
                if(!memcmp(znk, "-", 1)) {
                 memcpy(&s1[9], "S", 1);
                 memcpy(&s1[30], "Literal\'s value substracting", 28);
                }
                //memcpy(&s1[15], "RRAB,=F\'", 8);
                //memcpy(&s1[23], lit, strlen(lit));
                //memcpy(&s1[23+strlen(lit)], "\'", 1);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
}

/*
...............................................................................................................
. Программа int avi_avi_znk_ipe(char *znk, char *ipe)                                                         .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено как леворекурсивное с именем переменной справа.                                      .
.                                                                                                             .
. Параетры: lit (литерал).                                                                                    .
.                                                                                                             .
. Возвращаемый результат 0 (если ipe объявлена ранее в операторе dcl) и 1 (в противном случае)                .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int  avi_avi_znk_ipe(char *znk, char *avi, char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in avi of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }
                memset(&s1[0], ' ', 80);


                if(!memcmp(znk, "+", 1)) {
                 memcpy(&s1[9], "A", 1);
                 memcpy(&s1[30], "Variable\'s value adding", 23);
                 memcpy(&s1[15], "RRAB,", 5);
                 memcpy(&s1[20], ipe, strlen(ipe));

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
                }
                if(!memcmp(znk, "-", 1)) {
                 memcpy(&s1[9], "S", 1);
                 memcpy(&s1[30], "Variable\'s value substracting", 29);

                 memcpy(&s1[15], "RRAB,", 5);
                 memcpy(&s1[20], ipe, strlen(ipe));

                 memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                 pImpPart++;
                }
                if(!memcmp(znk, "|", 1)) {
		 //memcpy(&s1[9], "A", 1);
                 //memcpy(&s1[30], "Variable\'s value adding", 23);
                 //memcpy(&s1[15], "RRAB,", 5);
                 //memcpy(&s1[20], ipe, strlen(ipe));

                //memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                //pImpPart++;
		 char operands1 [16];
                 sprintf (operands1, "@RABP1(5),%s", avi);
		 add_asm_command("", "MVC", operands1, "Copy value for 1st variable");
                 char operands2 [16];
                 sprintf (operands1, "@RABP2+5(4),%s", ipe);
		 add_asm_command("", "MVC", operands1, "Copy value for 2nd variable");
		 add_asm_command("", "L", "@RABP2,@ZERO", "Load zero value");
		 add_asm_command("", "L", "@RABP3,@ONENUMB", " Load onenumb value");
		 add_asm_command("", "LA", "@RABP5,@RABP1", "Load address");
		 add_asm_command("", "L", "@RABP6,@ZERO", "Load zero value");
		 add_asm_command("L2", "C", "@RABP6,@COUNTER", " Compare iteration num");
		add_asm_command("", "BC", "8,L3", "Go to L3");
		add_asm_command("L4", "L", "@RABP4,@ZERO", "Loade zero value");
		add_asm_command("", "IC", "@RABP4,0(@RABP5,@RABP6)", "");
		add_asm_command("", "CR", "@RABP4,@ONECHAR", " Compare with onechar");
		add_asm_command("", "BC", "8,L1", "Go to L1");
		add_asm_command("", "SRL", "@RABP3,1", "Right shift");
		add_asm_command("", "A", "@RABP6,@CONST", "Counter increment");
		add_asm_command("", "BC", "15,L2", "Go to L2");
		add_asm_command("L1", "OR", "@RABP2,@RABP3", "OR operation");
		add_asm_command("", "SRL", "@RABP3,1", "Right shift");
		add_asm_command("", "A", "@RABP6,@CONST", "Counter increment");
		add_asm_command("", "BC", "15,L2", "Go to L2");
		add_asm_command("L3", "SRL", "@RABP2,24", "Right shift");


		}

                return 0;
}

void add_asm_command (const char* label,
                      const char* operation,
                      const char* operands,
                      const char* comment
                      )
{
    memset (&ImpPart[pImpPart], ' ', 80);
    memcpy (&ImpPart[pImpPart][0],  label,     strlen(label));
    memcpy (&ImpPart[pImpPart][9],  operation, strlen(operation));
    memcpy (&ImpPart[pImpPart][15], operands,  strlen(operands));
    memcpy (&ImpPart[pImpPart][30], comment,   strlen(comment));

    ++pImpPart;
}
void add_dcl_command (const char* label,
                      const char* operation,
                      const char* operands,
                      const char* comment
                      )
{
    memset (&DclPart[pDclPart], ' ', 80);
    memcpy (&DclPart[pDclPart][0],  label,     strlen(label));
    memcpy (&DclPart[pDclPart][9],  operation, strlen(operation));
    memcpy (&DclPart[pDclPart][15], operands,  strlen(operands));
    memcpy (&DclPart[pDclPart][30], comment,   strlen(comment));
    ++pDclPart;
}


/*
***************************************************************************************************************
*                   Конец  библиотеки семантических программ                                                  *
***************************************************************************************************************
*/

/*
...............................................................................................................
. Программа int yywrap()                                                                                      .
.                                                                                                             .
. Вызывается по достижении EOF входного потока                                                                .
.                                                                                                             .
. Возвращаемый результат 0 (если работа д.б. продолжена) и 1 (в противном случае)                             .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int yywrap() {
 return 1;
}

/*
...............................................................................................................
. Программа int main()                                                                                        .
.                                                                                                             .
. Главная программа. Начинает работу, проводит начальную инициализацию, обращается к парсеру (yyparse) и      .
. при отсутствии ошибок разгружает результат компиляции из массива AssProg в выходной файл Results.ass,       .
. а в случае преждевременного завершения парсера - выдает аварийное сообщение                                 .
.                                                                                                             .
. Возвращаемый результат 0 (компиляция успешна) и 1 (в противном случае)                                      .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
 pAssProg=0;
 pDclPart=0;
 add_dcl_command ("@RBASE", "EQU", "15","");
 add_dcl_command ("@RABP1", "DC", "CL9\' \'","");
 add_dcl_command ("@RABP2", "EQU", "2","");
 add_dcl_command ("@RABP3", "EQU", "3","");
 add_dcl_command ("@RABP4", "EQU", "4","");
 add_dcl_command ("@RABP5", "EQU", "5","");
 add_dcl_command ("@RABP6", "EQU", "6","");
 add_dcl_command ("@COUNTER", "DC", "F\'9\'","");
 add_dcl_command ("@ZERO", "DC", "F\'0\'","");
 add_dcl_command ("@ONENUMB", "DC", "BL32\'1\'","");
 add_dcl_command ("", "DS", "0F","");
 add_dcl_command ("@ONECHAR", "DC", "BL32\'0000000000001101\'","");
 add_dcl_command ("@CONST", "DC", "F\'1\'","");

// memset(&DclPart[0][0], ' ', 80);
// memcpy(&DclPart[0][0], "RBASE    EQU   5", 16);
// memset(&DclPart[1][0], ' ', 80);
// memcpy(&DclPart[1][0], "RVIX     EQU   14", 17);
// memset(&DclPart[2][0], ' ', 80);
// memcpy(&DclPart[2][0], "RRAB     EQU   3", 16);
// pDclPart=3;
 pImpPart=0;
// yydebug=1;
 if (!yyparse()) {
  int fn, i;
  if ( 0 >= (fn=open("Result.ass", O_CREAT|O_WRONLY|O_TRUNC, S_IWUSR))) {
   printf("\n*** error it is not impossible to open Result.ass file\n");
  }
  else {
   for (i=0; i<pAssProg; i++) {
    if (80 != write(fn, &AssProg[i][0], 80)){
     printf("\n*** error during writing Result.ass file\n");
     break;
    }
   }
   close(fn);
   printf("\n*** Compilation is successfull\n");
  }
 return 0;
 }
 else {
  printf("\n*** Compilation is not successfull\n");
 }
 return 1;
}
