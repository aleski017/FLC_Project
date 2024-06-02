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
     NUM = 258,
     CREATETABLE = 259,
     SELECT = 260,
     FROM = 261,
     WHERE = 262,
     GROUPBY = 263,
     INSERT = 264,
     LS = 265,
     GR = 266,
     GE = 267,
     LE = 268,
     EQ = 269,
     NE = 270,
     AND = 271,
     OR = 272,
     FALSE = 273,
     TRUE = 274,
     ID = 275,
     BOOLEAN = 276,
     VARCHAR = 277,
     INTEGER = 278,
     FLOAT = 279
   };
#endif
/* Tokens.  */
#define NUM 258
#define CREATETABLE 259
#define SELECT 260
#define FROM 261
#define WHERE 262
#define GROUPBY 263
#define INSERT 264
#define LS 265
#define GR 266
#define GE 267
#define LE 268
#define EQ 269
#define NE 270
#define AND 271
#define OR 272
#define FALSE 273
#define TRUE 274
#define ID 275
#define BOOLEAN 276
#define VARCHAR 277
#define INTEGER 278
#define FLOAT 279




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "project.y"
{
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }
/* Line 1529 of yacc.c.  */
#line 102 "project.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

