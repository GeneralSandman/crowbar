/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 185 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

