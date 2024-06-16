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
    AND = 269,                     /* AND  */
    OR = 270,                      /* OR  */
    FALSE = 271,                   /* FALSE  */
    ALTER = 272,                   /* ALTER  */
    TRUE = 273,                    /* TRUE  */
    RENAME = 274,                  /* RENAME  */
    TO = 275,                      /* TO  */
    VALUES = 276,                  /* VALUES  */
    BOOLEAN = 277,                 /* BOOLEAN  */
    VARCHAR = 278,                 /* VARCHAR  */
    STRINGVALUE = 279,             /* STRINGVALUE  */
    INTEGER = 280,                 /* INTEGER  */
    CONSTRAINT = 281,              /* CONSTRAINT  */
    ALTERTABLE = 282,              /* ALTERTABLE  */
    COLUMN = 283,                  /* COLUMN  */
    FLOAT = 284,                   /* FLOAT  */
    CHECK = 285,                   /* CHECK  */
    DATE = 286,                    /* DATE  */
    NUM = 287,                     /* NUM  */
    NOTNULL = 288,                 /* NOTNULL  */
    UNIQUE = 289,                  /* UNIQUE  */
    PRIMARYKEY = 290,              /* PRIMARYKEY  */
    FOREIGNKEY = 291,              /* FOREIGNKEY  */
    REFERENCES = 292,              /* REFERENCES  */
    DROP = 293,                    /* DROP  */
    DATABASE = 294,                /* DATABASE  */
    DELETE_FROM = 295,             /* DELETE_FROM  */
    UPDATE = 296,                  /* UPDATE  */
    SET = 297,                     /* SET  */
    CREATETABLE = 298,             /* CREATETABLE  */
    ID = 299                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "project.y"

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
