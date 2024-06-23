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
    SELECT = 258,                  /* SELECT  */
    FROM = 259,                    /* FROM  */
    WHERE = 260,                   /* WHERE  */
    GROUPBY = 261,                 /* GROUPBY  */
    INSERT = 262,                  /* INSERT  */
    LS = 263,                      /* LS  */
    GR = 264,                      /* GR  */
    GE = 265,                      /* GE  */
    LE = 266,                      /* LE  */
    EQ = 267,                      /* EQ  */
    NE = 268,                      /* NE  */
    STAR = 269,                    /* STAR  */
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
    NOTNULL = 289,                 /* NOTNULL  */
    UNIQUE = 290,                  /* UNIQUE  */
    PRIMARYKEY = 291,              /* PRIMARYKEY  */
    FOREIGNKEY = 292,              /* FOREIGNKEY  */
    REFERENCES = 293,              /* REFERENCES  */
    DROP = 294,                    /* DROP  */
    DATABASE = 295,                /* DATABASE  */
    DELETE_FROM = 296,             /* DELETE_FROM  */
    UPDATE = 297,                  /* UPDATE  */
    SET = 298,                     /* SET  */
    CREATETABLE = 299,             /* CREATETABLE  */
    ID = 300                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "project.y"

       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       

#line 115 "project.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PROJECT_TAB_H_INCLUDED  */
