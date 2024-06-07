/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PROJECT_TAB_H_INCLUDED
# define YY_YY_PROJECT_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CREATETABLE = 258,             /* CREATETABLE  */
    SELECT = 259,                  /* SELECT  */
    FROM = 260,                    /* FROM  */
    WHERE = 261,                   /* WHERE  */
    GROUPBY = 262,                 /* GROUPBY  */
    INSERT = 263,                  /* INSERT  */
    LS = 264,                      /* LS  */
    GR = 265,                      /* GR  */
    GE = 266,                      /* GE  */
    LE = 267,                      /* LE  */
    EQ = 268,                      /* EQ  */
    NE = 269,                      /* NE  */
    AND = 270,                     /* AND  */
    OR = 271,                      /* OR  */
    FALSE = 272,                   /* FALSE  */
    ALTER = 273,                   /* ALTER  */
    TRUE = 274,                    /* TRUE  */
    RENAME = 275,                  /* RENAME  */
    TO = 276,                      /* TO  */
    VALUES = 277,                  /* VALUES  */
    BOOLEAN = 278,                 /* BOOLEAN  */
    VARCHAR = 279,                 /* VARCHAR  */
    STRINGVALUE = 280,             /* STRINGVALUE  */
    INTEGER = 281,                 /* INTEGER  */
    CONSTRAINT = 282,              /* CONSTRAINT  */
    ALTERTABLE = 283,              /* ALTERTABLE  */
    COLUMN = 284,                  /* COLUMN  */
    FLOAT = 285,                   /* FLOAT  */
    CHECK = 286,                   /* CHECK  */
    DATE = 287,                    /* DATE  */
    NUM = 288,                     /* NUM  */
    ID = 289,                      /* ID  */
    NOTNULL = 290,                 /* NOTNULL  */
    UNIQUE = 291,                  /* UNIQUE  */
    PRIMARYKEY = 292,              /* PRIMARYKEY  */
    FOREIGNKEY = 293,              /* FOREIGNKEY  */
    REFERENCES = 294,              /* REFERENCES  */
    DROP = 295,                    /* DROP  */
    DATABASE = 296,                /* DATABASE  */
    DELETE_FROM = 297,             /* DELETE_FROM  */
    UPDATE = 298,                  /* UPDATE  */
    SET = 299                      /* SET  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "project.y"

       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       

#line 114 "project.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PROJECT_TAB_H_INCLUDED  */
