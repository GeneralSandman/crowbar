/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_LITERAL = 258,
     DOUBLE_LITERAL = 259,
     STRING_LITERAL = 260,
     REGEXP_LITERAL = 261,
     IDENTIFIER = 262,
     IF = 263,
     ELSE = 264,
     ELSIF = 265,
     WHILE = 266,
     FOR = 267,
     FOREACH = 268,
     RETURN_T = 269,
     BREAK = 270,
     CONTINUE = 271,
     NULL_T = 272,
     LP = 273,
     RP = 274,
     LC = 275,
     RC = 276,
     LB = 277,
     RB = 278,
     SEMICOLON = 279,
     COLON = 280,
     COMMA = 281,
     ASSIGN_T = 282,
     LOGICAL_AND = 283,
     LOGICAL_OR = 284,
     EQ = 285,
     NE = 286,
     GT = 287,
     GE = 288,
     LT = 289,
     LE = 290,
     ADD = 291,
     SUB = 292,
     MUL = 293,
     DIV = 294,
     MOD = 295,
     TRUE_T = 296,
     FALSE_T = 297,
     EXCLAMATION = 298,
     DOT = 299,
     ADD_ASSIGN_T = 300,
     SUB_ASSIGN_T = 301,
     MUL_ASSIGN_T = 302,
     DIV_ASSIGN_T = 303,
     MOD_ASSIGN_T = 304,
     INCREMENT = 305,
     DECREMENT = 306,
     TRY = 307,
     CATCH = 308,
     FINALLY = 309,
     THROW = 310,
     BOOLEAN_T = 311,
     INT_T = 312,
     DOUBLE_T = 313,
     STRING_T = 314,
     NEW = 315
   };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define REGEXP_LITERAL 261
#define IDENTIFIER 262
#define IF 263
#define ELSE 264
#define ELSIF 265
#define WHILE 266
#define FOR 267
#define FOREACH 268
#define RETURN_T 269
#define BREAK 270
#define CONTINUE 271
#define NULL_T 272
#define LP 273
#define RP 274
#define LC 275
#define RC 276
#define LB 277
#define RB 278
#define SEMICOLON 279
#define COLON 280
#define COMMA 281
#define ASSIGN_T 282
#define LOGICAL_AND 283
#define LOGICAL_OR 284
#define EQ 285
#define NE 286
#define GT 287
#define GE 288
#define LT 289
#define LE 290
#define ADD 291
#define SUB 292
#define MUL 293
#define DIV 294
#define MOD 295
#define TRUE_T 296
#define FALSE_T 297
#define EXCLAMATION 298
#define DOT 299
#define ADD_ASSIGN_T 300
#define SUB_ASSIGN_T 301
#define MUL_ASSIGN_T 302
#define DIV_ASSIGN_T 303
#define MOD_ASSIGN_T 304
#define INCREMENT 305
#define DECREMENT 306
#define TRY 307
#define CATCH 308
#define FINALLY 309
#define THROW 310
#define BOOLEAN_T 311
#define INT_T 312
#define DOUBLE_T 313
#define STRING_T 314
#define NEW 315




/* Copy the first part of user declarations.  */
#line 1 "diksam.y"

#include <stdio.h>
#include "diksamc.h"
#define YYDEBUG 1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 6 "diksam.y"
{
    char                *identifier;
    ParameterList       *parameter_list;
    ArgumentList        *argument_list;
    Expression          *expression;
    ExpressionList      *expression_list;
    Statement           *statement;
    StatementList       *statement_list;
    Block               *block;
    Elsif               *elsif;
    AssignmentOperator  assignment_operator;
    TypeSpecifier       *type_specifier;
    DVM_BasicType       basic_type_specifier;
    ArrayDimension      *array_dimension;
}
/* Line 193 of yacc.c.  */
#line 238 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 251 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   406

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    26,    33,    39,    46,    52,    55,    60,    62,
      66,    68,    71,    73,    77,    79,    83,    85,    87,    89,
      91,    93,    95,    97,   101,   103,   107,   109,   113,   117,
     119,   123,   127,   131,   135,   137,   141,   145,   147,   151,
     155,   159,   161,   164,   167,   169,   171,   176,   180,   185,
     189,   192,   195,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,   221,   226,   230,   235,   237,   240,   244,
     247,   251,   252,   254,   258,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   287,   295,   302,   311,
     313,   316,   322,   323,   326,   333,   344,   353,   354,   356,
     360,   361,   363,   367,   371,   381,   386,   394,   398,   402,
     408,   409,   414
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    63,    -1,    62,    63,    -1,    66,    -1,
      88,    -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,
      64,    -1,    65,    22,    23,    -1,    65,     7,    18,    67,
      19,   104,    -1,    65,     7,    18,    19,   104,    -1,    65,
       7,    18,    67,    19,    24,    -1,    65,     7,    18,    19,
      24,    -1,    65,     7,    -1,    67,    26,    65,     7,    -1,
      71,    -1,    68,    26,    71,    -1,    88,    -1,    69,    88,
      -1,    71,    -1,    70,    26,    71,    -1,    73,    -1,    80,
      72,    71,    -1,    27,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    49,    -1,    74,    -1,    73,    29,    74,
      -1,    75,    -1,    74,    28,    75,    -1,    76,    -1,    75,
      30,    76,    -1,    75,    31,    76,    -1,    77,    -1,    76,
      32,    77,    -1,    76,    33,    77,    -1,    76,    34,    77,
      -1,    76,    35,    77,    -1,    78,    -1,    77,    36,    78,
      -1,    77,    37,    78,    -1,    79,    -1,    78,    38,    79,
      -1,    78,    39,    79,    -1,    78,    40,    79,    -1,    80,
      -1,    37,    79,    -1,    43,    79,    -1,    81,    -1,    83,
      -1,    81,    22,    70,    23,    -1,    80,    44,     7,    -1,
      80,    18,    68,    19,    -1,    80,    18,    19,    -1,    80,
      50,    -1,    80,    51,    -1,    18,    70,    19,    -1,     7,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,    41,
      -1,    42,    -1,    17,    -1,    82,    -1,    20,    87,    21,
      -1,    20,    87,    26,    21,    -1,    60,    64,    84,    -1,
      60,    64,    84,    86,    -1,    85,    -1,    84,    85,    -1,
      22,    70,    23,    -1,    22,    23,    -1,    86,    22,    23,
      -1,    -1,    71,    -1,    87,    26,    71,    -1,    70,    24,
      -1,    89,    -1,    93,    -1,    94,    -1,    95,    -1,    97,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,     8,    18,    70,    19,   104,    -1,     8,    18,    70,
      19,   104,     9,   104,    -1,     8,    18,    70,    19,   104,
      90,    -1,     8,    18,    70,    19,   104,    90,     9,   104,
      -1,    91,    -1,    90,    91,    -1,    10,    18,    70,    19,
     104,    -1,    -1,     7,    25,    -1,    92,    11,    18,    70,
      19,   104,    -1,    92,    12,    18,    96,    24,    96,    24,
      96,    19,   104,    -1,    92,    13,    18,     7,    25,    70,
      19,   104,    -1,    -1,    70,    -1,    14,    96,    24,    -1,
      -1,     7,    -1,    15,    98,    24,    -1,    16,    98,    24,
      -1,    52,   104,    53,    18,     7,    19,   104,    54,   104,
      -1,    52,   104,    54,   104,    -1,    52,   104,    53,    18,
       7,    19,   104,    -1,    55,    70,    24,    -1,    65,     7,
      24,    -1,    65,     7,    27,    70,    24,    -1,    -1,    20,
     105,    69,    21,    -1,    20,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    57,    60,    61,    70,    74,    78,    82,
      88,    92,    98,   102,   106,   110,   116,   120,   126,   130,
     136,   140,   146,   147,   153,   154,   160,   164,   168,   172,
     176,   180,   186,   187,   193,   194,   200,   201,   205,   211,
     212,   216,   220,   224,   230,   231,   235,   241,   242,   246,
     250,   256,   257,   261,   267,   268,   271,   275,   279,   283,
     287,   291,   295,   299,   303,   304,   305,   306,   307,   311,
     315,   319,   322,   326,   332,   336,   342,   343,   349,   355,
     359,   367,   370,   374,   380,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   396,   400,   404,   408,   414,
     415,   421,   428,   431,   437,   443,   450,   457,   460,   463,
     470,   473,   476,   482,   488,   492,   496,   501,   506,   510,
     517,   516,   524
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_LITERAL", "DOUBLE_LITERAL",
  "STRING_LITERAL", "REGEXP_LITERAL", "IDENTIFIER", "IF", "ELSE", "ELSIF",
  "WHILE", "FOR", "FOREACH", "RETURN_T", "BREAK", "CONTINUE", "NULL_T",
  "LP", "RP", "LC", "RC", "LB", "RB", "SEMICOLON", "COLON", "COMMA",
  "ASSIGN_T", "LOGICAL_AND", "LOGICAL_OR", "EQ", "NE", "GT", "GE", "LT",
  "LE", "ADD", "SUB", "MUL", "DIV", "MOD", "TRUE_T", "FALSE_T",
  "EXCLAMATION", "DOT", "ADD_ASSIGN_T", "SUB_ASSIGN_T", "MUL_ASSIGN_T",
  "DIV_ASSIGN_T", "MOD_ASSIGN_T", "INCREMENT", "DECREMENT", "TRY", "CATCH",
  "FINALLY", "THROW", "BOOLEAN_T", "INT_T", "DOUBLE_T", "STRING_T", "NEW",
  "$accept", "translation_unit", "definition_or_statement",
  "basic_type_specifier", "type_specifier", "function_definition",
  "parameter_list", "argument_list", "statement_list", "expression",
  "assignment_expression", "assignment_operator", "logical_or_expression",
  "logical_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplicative_expression", "unary_expression",
  "primary_expression", "primary_no_new_array", "array_literal",
  "array_creation", "dimension_expression_list", "dimension_expression",
  "dimension_list", "expression_list", "statement", "if_statement",
  "elsif_list", "elsif", "label_opt", "while_statement", "for_statement",
  "foreach_statement", "expression_opt", "return_statement",
  "identifier_opt", "break_statement", "continue_statement",
  "try_statement", "throw_statement", "declaration_statement", "block",
  "@1", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    72,    73,    73,    74,    74,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      90,    91,    92,    92,    93,    94,    95,    96,    96,    97,
      98,    98,    99,   100,   101,   101,   101,   102,   103,   103,
     105,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     5,     6,     5,     2,     4,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     2,     2,     1,     1,     4,     3,     4,     3,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     1,     2,     3,     2,
       3,     0,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     6,     8,     1,
       2,     5,     0,     2,     6,    10,     8,     0,     1,     3,
       0,     1,     3,     3,     9,     4,     7,     3,     3,     5,
       0,     4,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     102,    64,    65,    66,    67,    63,     0,   107,   110,   110,
      70,     0,    81,     0,    68,    69,     0,     0,     0,     6,
       7,     8,     9,     0,   102,     2,    10,     0,     4,     0,
      22,    24,    32,    34,    36,    39,    44,    47,    51,    54,
      71,    55,     5,    85,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,   103,     0,    63,   108,     0,   111,
       0,     0,     0,    82,     0,    52,    51,    53,   120,     0,
       0,     0,     1,     3,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,    28,    29,    30,    31,    60,
      61,     0,     0,     0,     0,     0,     0,   109,   112,   113,
      62,    72,     0,   122,   102,     0,     0,   117,     0,    74,
      76,     0,   118,     0,    11,    23,    33,    35,    37,    38,
      40,    41,    42,    43,    45,    46,    48,    49,    50,    59,
       0,    18,    57,    25,     0,     0,   107,     0,     0,    73,
      83,     0,   102,    20,     0,   115,     0,     0,    77,    75,
       0,     0,     0,     0,    58,     0,    56,     0,     0,     0,
      95,     0,   121,    21,     0,    78,    79,     0,    15,    13,
      16,     0,     0,   119,    19,     0,   107,     0,     0,     0,
      97,    99,     0,    80,    14,    12,     0,   104,     0,     0,
      96,     0,     0,   100,   116,    17,   107,     0,     0,    98,
       0,     0,   106,     0,   114,     0,   101,   105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,   162,   140,   152,    29,
      30,   101,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   119,   120,   159,    64,    42,    43,   190,
     191,    44,    45,    46,    47,    58,    48,    60,    49,    50,
      51,    52,    53,    69,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
     271,  -142,  -142,  -142,  -142,    17,     0,   346,    47,    47,
    -142,   346,   346,   346,  -142,  -142,   346,    79,   346,  -142,
    -142,  -142,  -142,    56,   155,  -142,  -142,     6,  -142,   141,
    -142,   116,   136,    57,    99,   120,   -13,  -142,    59,   126,
    -142,  -142,  -142,  -142,   140,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,   346,  -142,   159,   164,  -142,
     165,   166,    20,  -142,    30,  -142,    -1,  -142,   170,    82,
     142,   171,  -142,  -142,    14,   177,  -142,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   298,  -142,   188,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,   346,   346,   183,   184,   185,    41,  -142,  -142,  -142,
    -142,  -142,    16,  -142,   271,   186,    79,  -142,   346,   187,
    -142,     5,  -142,   346,  -142,  -142,   136,    57,    99,    99,
     120,   120,   120,   120,   -13,   -13,  -142,  -142,  -142,  -142,
      52,  -142,  -142,  -142,    70,   346,   346,   198,    79,  -142,
    -142,     7,   213,  -142,   199,  -142,   121,   339,  -142,   200,
     -12,     8,    55,   150,  -142,   346,  -142,    66,   201,   207,
     168,   122,  -142,  -142,   189,  -142,  -142,   203,  -142,  -142,
    -142,    49,    56,  -142,  -142,    79,   346,   346,    79,   205,
     172,  -142,    79,  -142,  -142,  -142,     9,  -142,   211,    72,
    -142,   346,    79,  -142,   182,  -142,   346,    79,   111,  -142,
      79,   218,  -142,    79,  -142,    79,  -142,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   214,   216,  -112,  -142,  -142,  -142,  -142,    -7,
     -11,  -142,  -142,   146,   161,   103,    58,   100,    -6,    39,
    -142,  -142,  -142,  -142,   123,  -142,  -142,  -108,  -142,  -142,
      51,  -142,  -142,  -142,  -142,  -141,  -142,   234,  -142,  -142,
    -142,  -142,  -142,  -113,  -142
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      57,    63,   151,   155,    62,   168,   153,    65,    68,   161,
      67,    70,   178,    74,   171,   180,   205,    91,    55,     1,
       2,     3,     4,    56,   160,    88,    89,    90,    75,    75,
      75,    75,   121,    10,    11,   170,    12,   149,   122,   110,
     151,   123,    54,    93,   173,   198,    77,   179,   106,    99,
     100,   111,    66,    13,    59,    66,   112,    14,    15,    16,
     148,    19,    20,    21,    22,   211,   125,    77,   195,    68,
     196,   164,   197,   194,   181,   200,    23,    91,   165,   204,
     141,   182,   136,   137,   138,   185,    92,    80,    81,   209,
     143,   207,    77,   166,   212,   144,    77,   214,    77,    68,
     216,   150,   217,    93,    94,    95,    96,    97,    98,    99,
     100,   156,    19,    20,    21,    22,   163,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
     213,    82,    83,    84,    85,   115,   116,    77,   167,    57,
     130,   131,   132,   133,   175,    78,   122,    77,   102,   123,
     156,   103,   104,   105,   184,    72,    86,    87,     1,     2,
       3,     4,     5,     6,    79,    76,   117,    77,    77,     7,
       8,     9,    10,    11,   183,    12,    77,   188,   189,    57,
     199,   202,   189,   128,   129,    77,   134,   135,   107,   108,
     109,   113,    13,   118,   208,   142,    14,    15,    16,    57,
     124,   145,   146,   147,   154,   169,   174,    17,   192,   157,
      18,    19,    20,    21,    22,    23,     1,     2,     3,     4,
       5,     6,   177,   201,   126,   186,   193,     7,     8,     9,
      10,    11,   187,    12,   172,   206,   210,   215,    73,    71,
     127,   203,   158,    61,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,    18,    19,
      20,    21,    22,    23,     1,     2,     3,     4,     5,     6,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,    56,     0,     0,    13,     0,
       0,     0,    14,    15,    16,    10,    11,   139,    12,     0,
       0,     0,     0,    17,     0,     0,    18,    19,    20,    21,
      22,    23,     0,     0,     0,    13,     0,     0,     0,    14,
      15,    16,     1,     2,     3,     4,    56,     0,     0,     1,
       2,     3,     4,    56,     0,     0,    10,    11,    23,    12,
       0,     0,   176,    10,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,    15,    16,    13,     0,     0,     0,    14,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,    23
};

static const yytype_int16 yycheck[] =
{
       7,    12,   114,   116,    11,   146,   114,    13,    20,   121,
      16,    18,    24,     7,     7,     7,     7,    18,    18,     3,
       4,     5,     6,     7,    19,    38,    39,    40,    22,    22,
      22,    22,    18,    17,    18,   148,    20,    21,    24,    19,
     152,    27,    25,    44,   152,   186,    26,   160,    55,    50,
      51,    21,    13,    37,     7,    16,    26,    41,    42,    43,
      19,    56,    57,    58,    59,   206,    77,    26,   181,    20,
     182,    19,   185,    24,    19,   188,    60,    18,    26,   192,
      91,    26,    88,    89,    90,    19,    27,    30,    31,   202,
     101,    19,    26,    23,   207,   102,    26,   210,    26,    20,
     213,   112,   215,    44,    45,    46,    47,    48,    49,    50,
      51,   118,    56,    57,    58,    59,   123,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      19,    32,    33,    34,    35,    53,    54,    26,   145,   146,
      82,    83,    84,    85,    23,    29,    24,    26,    22,    27,
     157,    11,    12,    13,   165,     0,    36,    37,     3,     4,
       5,     6,     7,     8,    28,    24,    24,    26,    26,    14,
      15,    16,    17,    18,    24,    20,    26,     9,    10,   186,
     187,     9,    10,    80,    81,    26,    86,    87,    24,    24,
      24,    21,    37,    22,   201,     7,    41,    42,    43,   206,
      23,    18,    18,    18,    18,     7,     7,    52,    19,    22,
      55,    56,    57,    58,    59,    60,     3,     4,     5,     6,
       7,     8,    22,    18,    78,    24,    23,    14,    15,    16,
      17,    18,    25,    20,    21,    24,    54,    19,    24,    23,
      79,   190,   119,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,    56,
      57,    58,    59,    60,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,     3,     4,     5,     6,     7,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    17,    18,    60,    20,
      -1,    -1,    23,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    37,    -1,    -1,    -1,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    14,    15,    16,
      17,    18,    20,    37,    41,    42,    43,    52,    55,    56,
      57,    58,    59,    60,    62,    63,    64,    65,    66,    70,
      71,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    88,    89,    92,    93,    94,    95,    97,    99,
     100,   101,   102,   103,    25,    18,     7,    70,    96,     7,
      98,    98,    70,    71,    87,    79,    80,    79,    20,   104,
      70,    64,     0,    63,     7,    22,    24,    26,    29,    28,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    18,    27,    44,    45,    46,    47,    48,    49,    50,
      51,    72,    22,    11,    12,    13,    70,    24,    24,    24,
      19,    21,    26,    21,   105,    53,    54,    24,    22,    84,
      85,    18,    24,    27,    23,    71,    74,    75,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    19,
      68,    71,     7,    71,    70,    18,    18,    18,    19,    21,
      71,    65,    69,    88,    18,   104,    70,    22,    85,    86,
      19,    65,    67,    70,    19,    26,    23,    70,    96,     7,
     104,     7,    21,    88,     7,    23,    23,    22,    24,   104,
       7,    19,    26,    24,    71,    19,    24,    25,     9,    10,
      90,    91,    19,    23,    24,   104,    65,   104,    96,    70,
     104,    18,     9,    91,   104,     7,    24,    19,    70,   104,
      54,    96,   104,    19,   104,    19,   104,   104
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 62 "diksam.y"
    {
            DKC_Compiler *compiler = dkc_get_current_compiler();

            compiler->statement_list
                = dkc_chain_statement_list(compiler->statement_list, (yyvsp[(1) - (1)].statement));
        }
    break;

  case 6:
#line 71 "diksam.y"
    {
            (yyval.basic_type_specifier) = DVM_BOOLEAN_TYPE;
        }
    break;

  case 7:
#line 75 "diksam.y"
    {
            (yyval.basic_type_specifier) = DVM_INT_TYPE;
        }
    break;

  case 8:
#line 79 "diksam.y"
    {
            (yyval.basic_type_specifier) = DVM_DOUBLE_TYPE;
        }
    break;

  case 9:
#line 83 "diksam.y"
    {
            (yyval.basic_type_specifier) = DVM_STRING_TYPE;
        }
    break;

  case 10:
#line 89 "diksam.y"
    {
            (yyval.type_specifier) = dkc_create_type_specifier((yyvsp[(1) - (1)].basic_type_specifier));
        }
    break;

  case 11:
#line 93 "diksam.y"
    {
            (yyval.type_specifier) = dkc_create_array_type_specifier((yyvsp[(1) - (3)].type_specifier));
        }
    break;

  case 12:
#line 99 "diksam.y"
    {
            dkc_function_define((yyvsp[(1) - (6)].type_specifier), (yyvsp[(2) - (6)].identifier), (yyvsp[(4) - (6)].parameter_list), (yyvsp[(6) - (6)].block));
        }
    break;

  case 13:
#line 103 "diksam.y"
    {
            dkc_function_define((yyvsp[(1) - (5)].type_specifier), (yyvsp[(2) - (5)].identifier), NULL, (yyvsp[(5) - (5)].block));
        }
    break;

  case 14:
#line 107 "diksam.y"
    {
            dkc_function_define((yyvsp[(1) - (6)].type_specifier), (yyvsp[(2) - (6)].identifier), (yyvsp[(4) - (6)].parameter_list), NULL);
        }
    break;

  case 15:
#line 111 "diksam.y"
    {
            dkc_function_define((yyvsp[(1) - (5)].type_specifier), (yyvsp[(2) - (5)].identifier), NULL, NULL);
        }
    break;

  case 16:
#line 117 "diksam.y"
    {
            (yyval.parameter_list) = dkc_create_parameter((yyvsp[(1) - (2)].type_specifier), (yyvsp[(2) - (2)].identifier));
        }
    break;

  case 17:
#line 121 "diksam.y"
    {
            (yyval.parameter_list) = dkc_chain_parameter((yyvsp[(1) - (4)].parameter_list), (yyvsp[(3) - (4)].type_specifier), (yyvsp[(4) - (4)].identifier));
        }
    break;

  case 18:
#line 127 "diksam.y"
    {
            (yyval.argument_list) = dkc_create_argument_list((yyvsp[(1) - (1)].expression));
        }
    break;

  case 19:
#line 131 "diksam.y"
    {
            (yyval.argument_list) = dkc_chain_argument_list((yyvsp[(1) - (3)].argument_list), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 20:
#line 137 "diksam.y"
    {
            (yyval.statement_list) = dkc_create_statement_list((yyvsp[(1) - (1)].statement));
        }
    break;

  case 21:
#line 141 "diksam.y"
    {
            (yyval.statement_list) = dkc_chain_statement_list((yyvsp[(1) - (2)].statement_list), (yyvsp[(2) - (2)].statement));
        }
    break;

  case 23:
#line 148 "diksam.y"
    {
            (yyval.expression) = dkc_create_comma_expression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 25:
#line 155 "diksam.y"
    {
            (yyval.expression) = dkc_create_assign_expression((yyvsp[(1) - (3)].expression), (yyvsp[(2) - (3)].assignment_operator), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 26:
#line 161 "diksam.y"
    {
            (yyval.assignment_operator) = NORMAL_ASSIGN;
        }
    break;

  case 27:
#line 165 "diksam.y"
    {
            (yyval.assignment_operator) = ADD_ASSIGN;
        }
    break;

  case 28:
#line 169 "diksam.y"
    {
            (yyval.assignment_operator) = SUB_ASSIGN;
        }
    break;

  case 29:
#line 173 "diksam.y"
    {
            (yyval.assignment_operator) = MUL_ASSIGN;
        }
    break;

  case 30:
#line 177 "diksam.y"
    {
            (yyval.assignment_operator) = DIV_ASSIGN;
        }
    break;

  case 31:
#line 181 "diksam.y"
    {
            (yyval.assignment_operator) = MOD_ASSIGN;
        }
    break;

  case 33:
#line 188 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(LOGICAL_OR_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 35:
#line 195 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(LOGICAL_AND_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 37:
#line 202 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(EQ_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 38:
#line 206 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(NE_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 40:
#line 213 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(GT_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 41:
#line 217 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(GE_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 42:
#line 221 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(LT_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 43:
#line 225 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(LE_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 45:
#line 232 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(ADD_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 46:
#line 236 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(SUB_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 48:
#line 243 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(MUL_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 49:
#line 247 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(DIV_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 50:
#line 251 "diksam.y"
    {
            (yyval.expression) = dkc_create_binary_expression(MOD_EXPRESSION, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 52:
#line 258 "diksam.y"
    {
            (yyval.expression) = dkc_create_minus_expression((yyvsp[(2) - (2)].expression));
        }
    break;

  case 53:
#line 262 "diksam.y"
    {
            (yyval.expression) = dkc_create_logical_not_expression((yyvsp[(2) - (2)].expression));
        }
    break;

  case 56:
#line 272 "diksam.y"
    {
            (yyval.expression) = dkc_create_index_expression((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression));
        }
    break;

  case 57:
#line 276 "diksam.y"
    {
            (yyval.expression) = dkc_create_member_expression((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].identifier));
        }
    break;

  case 58:
#line 280 "diksam.y"
    {
            (yyval.expression) = dkc_create_function_call_expression((yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].argument_list));
        }
    break;

  case 59:
#line 284 "diksam.y"
    {
            (yyval.expression) = dkc_create_function_call_expression((yyvsp[(1) - (3)].expression), NULL);
        }
    break;

  case 60:
#line 288 "diksam.y"
    {
            (yyval.expression) = dkc_create_incdec_expression((yyvsp[(1) - (2)].expression), INCREMENT_EXPRESSION);
        }
    break;

  case 61:
#line 292 "diksam.y"
    {
            (yyval.expression) = dkc_create_incdec_expression((yyvsp[(1) - (2)].expression), DECREMENT_EXPRESSION);
        }
    break;

  case 62:
#line 296 "diksam.y"
    {
            (yyval.expression) = (yyvsp[(2) - (3)].expression);
        }
    break;

  case 63:
#line 300 "diksam.y"
    {
            (yyval.expression) = dkc_create_identifier_expression((yyvsp[(1) - (1)].identifier));
        }
    break;

  case 68:
#line 308 "diksam.y"
    {
            (yyval.expression) = dkc_create_boolean_expression(DVM_TRUE);
        }
    break;

  case 69:
#line 312 "diksam.y"
    {
            (yyval.expression) = dkc_create_boolean_expression(DVM_FALSE);
        }
    break;

  case 70:
#line 316 "diksam.y"
    {
            (yyval.expression) = dkc_create_null_expression();
        }
    break;

  case 72:
#line 323 "diksam.y"
    {
            (yyval.expression) = dkc_create_array_literal_expression((yyvsp[(2) - (3)].expression_list));
        }
    break;

  case 73:
#line 327 "diksam.y"
    {
            (yyval.expression) = dkc_create_array_literal_expression((yyvsp[(2) - (4)].expression_list));
        }
    break;

  case 74:
#line 333 "diksam.y"
    {
            (yyval.expression) = dkc_create_array_creation((yyvsp[(2) - (3)].basic_type_specifier), (yyvsp[(3) - (3)].array_dimension), NULL);
        }
    break;

  case 75:
#line 337 "diksam.y"
    {
            (yyval.expression) = dkc_create_array_creation((yyvsp[(2) - (4)].basic_type_specifier), (yyvsp[(3) - (4)].array_dimension), (yyvsp[(4) - (4)].array_dimension));
        }
    break;

  case 77:
#line 344 "diksam.y"
    {
            (yyval.array_dimension) = dkc_chain_array_dimension((yyvsp[(1) - (2)].array_dimension), (yyvsp[(2) - (2)].array_dimension));
        }
    break;

  case 78:
#line 350 "diksam.y"
    {
            (yyval.array_dimension) = dkc_create_array_dimension((yyvsp[(2) - (3)].expression));
        }
    break;

  case 79:
#line 356 "diksam.y"
    {
            (yyval.array_dimension) = dkc_create_array_dimension(NULL);
        }
    break;

  case 80:
#line 360 "diksam.y"
    {
            (yyval.array_dimension) = dkc_chain_array_dimension((yyvsp[(1) - (3)].array_dimension),
                                           dkc_create_array_dimension(NULL));
        }
    break;

  case 81:
#line 367 "diksam.y"
    {
            (yyval.expression_list) = NULL;
        }
    break;

  case 82:
#line 371 "diksam.y"
    {
            (yyval.expression_list) = dkc_create_expression_list((yyvsp[(1) - (1)].expression));
        }
    break;

  case 83:
#line 375 "diksam.y"
    {
            (yyval.expression_list) = dkc_chain_expression_list((yyvsp[(1) - (3)].expression_list), (yyvsp[(3) - (3)].expression));
        }
    break;

  case 84:
#line 381 "diksam.y"
    {
          (yyval.statement) = dkc_create_expression_statement((yyvsp[(1) - (2)].expression));
        }
    break;

  case 95:
#line 397 "diksam.y"
    {
            (yyval.statement) = dkc_create_if_statement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].block), NULL, NULL);
        }
    break;

  case 96:
#line 401 "diksam.y"
    {
            (yyval.statement) = dkc_create_if_statement((yyvsp[(3) - (7)].expression), (yyvsp[(5) - (7)].block), NULL, (yyvsp[(7) - (7)].block));
        }
    break;

  case 97:
#line 405 "diksam.y"
    {
            (yyval.statement) = dkc_create_if_statement((yyvsp[(3) - (6)].expression), (yyvsp[(5) - (6)].block), (yyvsp[(6) - (6)].elsif), NULL);
        }
    break;

  case 98:
#line 409 "diksam.y"
    {
            (yyval.statement) = dkc_create_if_statement((yyvsp[(3) - (8)].expression), (yyvsp[(5) - (8)].block), (yyvsp[(6) - (8)].elsif), (yyvsp[(8) - (8)].block));
        }
    break;

  case 100:
#line 416 "diksam.y"
    {
            (yyval.elsif) = dkc_chain_elsif_list((yyvsp[(1) - (2)].elsif), (yyvsp[(2) - (2)].elsif));
        }
    break;

  case 101:
#line 422 "diksam.y"
    {
            (yyval.elsif) = dkc_create_elsif((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].block));
        }
    break;

  case 102:
#line 428 "diksam.y"
    {
            (yyval.identifier) = NULL;
        }
    break;

  case 103:
#line 432 "diksam.y"
    {
            (yyval.identifier) = (yyvsp[(1) - (2)].identifier);
        }
    break;

  case 104:
#line 438 "diksam.y"
    {
            (yyval.statement) = dkc_create_while_statement((yyvsp[(1) - (6)].identifier), (yyvsp[(4) - (6)].expression), (yyvsp[(6) - (6)].block));
        }
    break;

  case 105:
#line 445 "diksam.y"
    {
            (yyval.statement) = dkc_create_for_statement((yyvsp[(1) - (10)].identifier), (yyvsp[(4) - (10)].expression), (yyvsp[(6) - (10)].expression), (yyvsp[(8) - (10)].expression), (yyvsp[(10) - (10)].block));
        }
    break;

  case 106:
#line 451 "diksam.y"
    {
            (yyval.statement) = dkc_create_foreach_statement((yyvsp[(1) - (8)].identifier), (yyvsp[(4) - (8)].identifier), (yyvsp[(6) - (8)].expression), (yyvsp[(8) - (8)].block));
        }
    break;

  case 107:
#line 457 "diksam.y"
    {
            (yyval.expression) = NULL;
        }
    break;

  case 109:
#line 464 "diksam.y"
    {
            (yyval.statement) = dkc_create_return_statement((yyvsp[(2) - (3)].expression));
        }
    break;

  case 110:
#line 470 "diksam.y"
    {
            (yyval.identifier) = NULL;
        }
    break;

  case 112:
#line 477 "diksam.y"
    {
            (yyval.statement) = dkc_create_break_statement((yyvsp[(2) - (3)].identifier));
        }
    break;

  case 113:
#line 483 "diksam.y"
    {
            (yyval.statement) = dkc_create_continue_statement((yyvsp[(2) - (3)].identifier));
        }
    break;

  case 114:
#line 489 "diksam.y"
    {
            (yyval.statement) = dkc_create_try_statement((yyvsp[(2) - (9)].block), (yyvsp[(5) - (9)].identifier), (yyvsp[(7) - (9)].block), (yyvsp[(9) - (9)].block));
        }
    break;

  case 115:
#line 493 "diksam.y"
    {
            (yyval.statement) = dkc_create_try_statement((yyvsp[(2) - (4)].block), NULL, NULL, (yyvsp[(4) - (4)].block));
        }
    break;

  case 116:
#line 497 "diksam.y"
    {
            (yyval.statement) = dkc_create_try_statement((yyvsp[(2) - (7)].block), (yyvsp[(5) - (7)].identifier), (yyvsp[(7) - (7)].block), NULL);
        }
    break;

  case 117:
#line 502 "diksam.y"
    {
            (yyval.statement) = dkc_create_throw_statement((yyvsp[(2) - (3)].expression));
        }
    break;

  case 118:
#line 507 "diksam.y"
    {
            (yyval.statement) = dkc_create_declaration_statement((yyvsp[(1) - (3)].type_specifier), (yyvsp[(2) - (3)].identifier), NULL);
        }
    break;

  case 119:
#line 511 "diksam.y"
    {
            (yyval.statement) = dkc_create_declaration_statement((yyvsp[(1) - (5)].type_specifier), (yyvsp[(2) - (5)].identifier), (yyvsp[(4) - (5)].expression));
        }
    break;

  case 120:
#line 517 "diksam.y"
    {
            (yyval.block) = dkc_open_block();
        }
    break;

  case 121:
#line 521 "diksam.y"
    {
            (yyval.block) = dkc_close_block((yyvsp[(2) - (4)].block), (yyvsp[(3) - (4)].statement_list));
        }
    break;

  case 122:
#line 525 "diksam.y"
    {
            Block *empty_block = dkc_open_block();
            (yyval.block) = dkc_close_block(empty_block, NULL);
        }
    break;


/* Line 1267 of yacc.c.  */
#line 2324 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 530 "diksam.y"


