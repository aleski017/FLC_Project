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
     CREATETABLE = 258,
     SELECT = 259,
     FROM = 260,
     WHERE = 261,
     GROUPBY = 262,
     INSERT = 263,
     LS = 264,
     GR = 265,
     GE = 266,
     LE = 267,
     EQ = 268,
     NE = 269,
     AND = 270,
     OR = 271,
     FALSE = 272,
     TRUE = 273,
     VALUES = 274,
     BOOLEAN = 275,
     VARCHAR = 276,
     INTEGER = 277,
     CONSTRAINT = 278,
     FLOAT = 279,
     CHECK = 280,
     DATE = 281,
     NUM = 282,
     ID = 283,
     NOTNULL = 284,
     UNIQUE = 285,
     PRIMARYKEY = 286,
     FOREIGNKEY = 287,
     REFERENCES = 288,
     DROP_DATABASE = 289,
     DELETE_FROM = 290
   };
#endif
/* Tokens.  */
#define CREATETABLE 258
#define SELECT 259
#define FROM 260
#define WHERE 261
#define GROUPBY 262
#define INSERT 263
#define LS 264
#define GR 265
#define GE 266
#define LE 267
#define EQ 268
#define NE 269
#define AND 270
#define OR 271
#define FALSE 272
#define TRUE 273
#define VALUES 274
#define BOOLEAN 275
#define VARCHAR 276
#define INTEGER 277
#define CONSTRAINT 278
#define FLOAT 279
#define CHECK 280
#define DATE 281
#define NUM 282
#define ID 283
#define NOTNULL 284
#define UNIQUE 285
#define PRIMARYKEY 286
#define FOREIGNKEY 287
#define REFERENCES 288
#define DROP_DATABASE 289
#define DELETE_FROM 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "project.y"
{
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }
/* Line 1529 of yacc.c.  */
#line 124 "project.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

