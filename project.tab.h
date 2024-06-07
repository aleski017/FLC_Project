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
     ALTER = 273,
     TRUE = 274,
     RENAME = 275,
     TO = 276,
     VALUES = 277,
     BOOLEAN = 278,
     VARCHAR = 279,
     STRINGVALUE = 280,
     INTEGER = 281,
     CONSTRAINT = 282,
     ALTERTABLE = 283,
     COLUMN = 284,
     FLOAT = 285,
     CHECK = 286,
     DATE = 287,
     NUM = 288,
     ID = 289,
     NOTNULL = 290,
     UNIQUE = 291,
     PRIMARYKEY = 292,
     FOREIGNKEY = 293,
     REFERENCES = 294,
     DROP = 295,
     DATABASE = 296,
     DELETE_FROM = 297,
     UPDATE = 298,
     SET = 299
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
#define ALTER 273
#define TRUE 274
#define RENAME 275
#define TO 276
#define VALUES 277
#define BOOLEAN 278
#define VARCHAR 279
#define STRINGVALUE 280
#define INTEGER 281
#define CONSTRAINT 282
#define ALTERTABLE 283
#define COLUMN 284
#define FLOAT 285
#define CHECK 286
#define DATE 287
#define NUM 288
#define ID 289
#define NOTNULL 290
#define UNIQUE 291
#define PRIMARYKEY 292
#define FOREIGNKEY 293
#define REFERENCES 294
#define DROP 295
#define DATABASE 296
#define DELETE_FROM 297
#define UPDATE 298
#define SET 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "project.y"
{
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }
/* Line 1529 of yacc.c.  */
#line 142 "project.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

