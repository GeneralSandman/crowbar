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
     IDENTIFIER = 261,
     FUNCTION = 262,
     IF = 263,
     ELSE = 264,
     ELSIF = 265,
     WHILE = 266,
     FOR = 267,
     RETURN_T = 268,
     BREAK = 269,
     CONTINUE = 270,
     NULL_T = 271,
     LP = 272,
     RP = 273,
     LC = 274,
     RC = 275,
     LB = 276,
     RB = 277,
     SEMICOLON = 278,
     COMMA = 279,
     ASSIGN = 280,
     LOGICAL_AND = 281,
     LOGICAL_OR = 282,
     EQ = 283,
     NE = 284,
     GT = 285,
     GE = 286,
     LT = 287,
     LE = 288,
     ADD = 289,
     SUB = 290,
     MUL = 291,
     DIV = 292,
     MOD = 293,
     TRUE_T = 294,
     FALSE_T = 295,
     GLOBAL_T = 296,
     DOT = 297,
     INCREMENT = 298,
     DECREMENT = 299
   };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define IDENTIFIER 261
#define FUNCTION 262
#define IF 263
#define ELSE 264
#define ELSIF 265
#define WHILE 266
#define FOR 267
#define RETURN_T 268
#define BREAK 269
#define CONTINUE 270
#define NULL_T 271
#define LP 272
#define RP 273
#define LC 274
#define RC 275
#define LB 276
#define RB 277
#define SEMICOLON 278
#define COMMA 279
#define ASSIGN 280
#define LOGICAL_AND 281
#define LOGICAL_OR 282
#define EQ 283
#define NE 284
#define GT 285
#define GE 286
#define LT 287
#define LE 288
#define ADD 289
#define SUB 290
#define MUL 291
#define DIV 292
#define MOD 293
#define TRUE_T 294
#define FALSE_T 295
#define GLOBAL_T 296
#define DOT 297
#define INCREMENT 298
#define DECREMENT 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 6 "crowbar.y"
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
    IdentifierList      *identifier_list;
}
/* Line 1529 of yacc.c.  */
#line 150 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

