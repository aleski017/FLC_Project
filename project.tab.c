/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "project.y"

#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void yyerror(const char *s)
{
    fprintf(stderr, "%s\n", s);
    exit(1);
}
struct dataType {
        char * id_name;
        char * data_type;
		char * type;
} symbol_table[40];
//int yywrap();
int yylex();
int count=0;
int q;
char type[10];
int countn=1;
void add(char, char*);
void insert_type();
int search(char *);
void insert_type(char *);
void display_symbol_table();
char * attribute_name;
extern char* yytext;

#line 102 "project.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "project.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SELECT = 3,                     /* SELECT  */
  YYSYMBOL_FROM = 4,                       /* FROM  */
  YYSYMBOL_WHERE = 5,                      /* WHERE  */
  YYSYMBOL_GROUPBY = 6,                    /* GROUPBY  */
  YYSYMBOL_INSERT = 7,                     /* INSERT  */
  YYSYMBOL_LS = 8,                         /* LS  */
  YYSYMBOL_GR = 9,                         /* GR  */
  YYSYMBOL_GE = 10,                        /* GE  */
  YYSYMBOL_LE = 11,                        /* LE  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_NE = 13,                        /* NE  */
  YYSYMBOL_AND = 14,                       /* AND  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_FALSE = 16,                     /* FALSE  */
  YYSYMBOL_ALTER = 17,                     /* ALTER  */
  YYSYMBOL_TRUE = 18,                      /* TRUE  */
  YYSYMBOL_RENAME = 19,                    /* RENAME  */
  YYSYMBOL_TO = 20,                        /* TO  */
  YYSYMBOL_VALUES = 21,                    /* VALUES  */
  YYSYMBOL_BOOLEAN = 22,                   /* BOOLEAN  */
  YYSYMBOL_VARCHAR = 23,                   /* VARCHAR  */
  YYSYMBOL_STRINGVALUE = 24,               /* STRINGVALUE  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_CONSTRAINT = 26,                /* CONSTRAINT  */
  YYSYMBOL_ALTERTABLE = 27,                /* ALTERTABLE  */
  YYSYMBOL_COLUMN = 28,                    /* COLUMN  */
  YYSYMBOL_FLOAT = 29,                     /* FLOAT  */
  YYSYMBOL_CHECK = 30,                     /* CHECK  */
  YYSYMBOL_DATE = 31,                      /* DATE  */
  YYSYMBOL_NUM = 32,                       /* NUM  */
  YYSYMBOL_NOTNULL = 33,                   /* NOTNULL  */
  YYSYMBOL_UNIQUE = 34,                    /* UNIQUE  */
  YYSYMBOL_PRIMARYKEY = 35,                /* PRIMARYKEY  */
  YYSYMBOL_FOREIGNKEY = 36,                /* FOREIGNKEY  */
  YYSYMBOL_REFERENCES = 37,                /* REFERENCES  */
  YYSYMBOL_DROP = 38,                      /* DROP  */
  YYSYMBOL_DATABASE = 39,                  /* DATABASE  */
  YYSYMBOL_DELETE_FROM = 40,               /* DELETE_FROM  */
  YYSYMBOL_UPDATE = 41,                    /* UPDATE  */
  YYSYMBOL_SET = 42,                       /* SET  */
  YYSYMBOL_CREATETABLE = 43,               /* CREATETABLE  */
  YYSYMBOL_ID = 44,                        /* ID  */
  YYSYMBOL_45_n_ = 45,                     /* '\n'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_line = 51,                      /* line  */
  YYSYMBOL_expr = 52,                      /* expr  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_54_2 = 54,                      /* $@2  */
  YYSYMBOL_table_def = 55,                 /* table_def  */
  YYSYMBOL_column_def = 56,                /* column_def  */
  YYSYMBOL_57_3 = 57,                      /* $@3  */
  YYSYMBOL_datatype = 58,                  /* datatype  */
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_60_5 = 60,                      /* $@5  */
  YYSYMBOL_61_6 = 61,                      /* $@6  */
  YYSYMBOL_column_costraint_def = 62,      /* column_costraint_def  */
  YYSYMBOL_column_costraint = 63,          /* column_costraint  */
  YYSYMBOL_64_7 = 64,                      /* $@7  */
  YYSYMBOL_65_8 = 65,                      /* $@8  */
  YYSYMBOL_table_constraint_def = 66,      /* table_constraint_def  */
  YYSYMBOL_table_constraint = 67,          /* table_constraint  */
  YYSYMBOL_parameters = 68,                /* parameters  */
  YYSYMBOL_select_stmt = 69,               /* select_stmt  */
  YYSYMBOL_select_all_or_list = 70,        /* select_all_or_list  */
  YYSYMBOL_select_list = 71,               /* select_list  */
  YYSYMBOL_where_clause = 72,              /* where_clause  */
  YYSYMBOL_condition = 73,                 /* condition  */
  YYSYMBOL_values = 74,                    /* values  */
  YYSYMBOL_boolean_values = 75,            /* boolean_values  */
  YYSYMBOL_comparison_op = 76,             /* comparison_op  */
  YYSYMBOL_boolean_comparison_op = 77,     /* boolean_comparison_op  */
  YYSYMBOL_insert_stmt = 78,               /* insert_stmt  */
  YYSYMBOL_insertion = 79,                 /* insertion  */
  YYSYMBOL_column_list = 80,               /* column_list  */
  YYSYMBOL_value_list = 81,                /* value_list  */
  YYSYMBOL_alter_table_stmt = 82,          /* alter_table_stmt  */
  YYSYMBOL_drop_stmt = 83,                 /* drop_stmt  */
  YYSYMBOL_delete_stmt = 84,               /* delete_stmt  */
  YYSYMBOL_update_stmt = 85                /* update_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  177

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,    49,     2,    48,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    51,    52,    53,    54,    55,    56,
      60,    60,    60,    63,    64,    65,    68,    68,    71,    72,
      72,    73,    73,    74,    75,    75,    76,    79,    80,    84,
      85,    86,    87,    87,    88,    88,    91,    92,    96,    97,
      98,    99,   100,   103,   104,   107,   111,   112,   115,   116,
     119,   120,   123,   124,   125,   126,   127,   130,   131,   132,
     134,   135,   138,   139,   140,   141,   142,   143,   146,   147,
     150,   151,   153,   154,   157,   158,   161,   162,   165,   166,
     167,   170,   173,   176
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SELECT", "FROM",
  "WHERE", "GROUPBY", "INSERT", "LS", "GR", "GE", "LE", "EQ", "NE", "AND",
  "OR", "FALSE", "ALTER", "TRUE", "RENAME", "TO", "VALUES", "BOOLEAN",
  "VARCHAR", "STRINGVALUE", "INTEGER", "CONSTRAINT", "ALTERTABLE",
  "COLUMN", "FLOAT", "CHECK", "DATE", "NUM", "NOTNULL", "UNIQUE",
  "PRIMARYKEY", "FOREIGNKEY", "REFERENCES", "DROP", "DATABASE",
  "DELETE_FROM", "UPDATE", "SET", "CREATETABLE", "ID", "'\\n'", "'('",
  "')'", "','", "'*'", "$accept", "line", "expr", "$@1", "$@2",
  "table_def", "column_def", "$@3", "datatype", "$@4", "$@5", "$@6",
  "column_costraint_def", "column_costraint", "$@7", "$@8",
  "table_constraint_def", "table_constraint", "parameters", "select_stmt",
  "select_all_or_list", "select_list", "where_clause", "condition",
  "values", "boolean_values", "comparison_op", "boolean_comparison_op",
  "insert_stmt", "insertion", "column_list", "value_list",
  "alter_table_stmt", "drop_stmt", "delete_stmt", "update_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-128)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -21,   -28,   -20,    -5,    -2,    12,  -128,    65,     0,
    -128,  -128,  -128,  -128,  -128,  -128,    -1,  -128,    56,  -128,
     -13,     3,    23,    66,    51,    52,  -128,  -128,  -128,    53,
      54,    55,    58,    67,    71,    75,  -128,    -6,    -6,  -128,
    -128,    99,   -15,  -128,    57,    59,    63,    64,    69,  -128,
    -128,  -128,  -128,  -128,    60,    78,    68,    47,    70,    -6,
    -128,    61,    72,    58,    89,    41,    91,  -128,    -6,    -6,
    -128,  -128,  -128,  -128,     9,    37,   -15,    76,  -128,  -128,
     -15,    -6,    74,    60,   -15,    73,  -128,    55,  -128,  -128,
      77,  -128,  -128,  -128,    80,  -128,    98,  -128,  -128,  -128,
      60,  -128,    79,    81,  -128,    55,  -128,    82,    84,    85,
    -128,    41,  -128,    24,  -128,    83,    88,    90,    49,    92,
      86,    87,    93,    94,  -128,  -128,    95,    97,   100,   101,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,   102,    -6,   105,
     105,   105,    43,  -128,  -128,  -128,    96,   104,   106,   -10,
     103,   107,   108,   109,  -128,    -6,   113,   114,  -128,   105,
    -128,  -128,  -128,    -8,   115,   112,  -128,  -128,   116,   125,
     117,   119,  -128,   120,   121,   122,  -128
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       4,     5,     8,     6,     7,     9,    48,    46,     0,    47,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     0,
       0,     0,     0,     0,     0,     0,    81,     0,     0,    11,
      49,    51,     0,    70,    74,     0,     0,     0,     0,    61,
      60,    57,    58,    59,    82,     0,     0,     0,     0,     0,
      45,    76,     0,     0,     0,     0,     0,    78,     0,     0,
      62,    63,    64,    65,    66,    67,     0,     0,    68,    69,
       0,     0,     0,    50,     0,    72,    75,     0,    23,    24,
      18,    21,    26,    80,     0,    55,    56,    52,    53,    54,
      83,    16,     0,    13,    77,     0,    71,     0,     0,     0,
      79,     0,    12,     0,    73,     0,     0,     0,    28,     0,
       0,     0,     0,     0,    15,    14,    36,     0,     0,     0,
      34,    29,    31,    30,    32,    17,    27,     0,     0,     0,
       0,     0,     0,    25,    20,    22,     0,     0,     0,     0,
      43,     0,     0,     0,    37,     0,     0,     0,    42,     0,
      38,    39,    40,     0,     0,     0,    44,    35,     0,     0,
       0,     0,    33,     0,     0,     0,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,  -128,  -128,     1,  -128,  -128,    14,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,    -7,  -128,  -127,   118,
    -128,   124,  -128,   -38,   -40,   110,  -128,   111,  -128,   -86,
     123,    50,  -128,  -128,  -128,  -128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    25,    58,   102,   103,   111,    93,   108,
     109,   107,   135,   136,   147,   146,   125,   126,   151,    10,
      18,    19,    60,    54,    55,    56,    76,    77,    11,    43,
      45,    62,    12,    13,    14,    15
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   106,    61,     1,    68,    69,    68,    69,    31,    51,
      49,     1,    50,   152,   153,     2,    20,    52,    51,   114,
      33,    83,    34,    16,    21,   -68,    52,   -68,    17,    53,
      95,    96,   166,    32,    22,     3,    97,   158,    53,   167,
      99,    35,    23,   100,    61,    27,     4,    29,     5,     6,
     119,     7,    81,   -69,   120,   -69,    24,   121,   122,   123,
      30,    68,    69,    88,    89,    26,    90,    36,   101,   119,
      91,    37,    92,   120,    68,    69,   121,   122,   123,   130,
      78,    79,   131,   132,   133,   134,    70,    71,    72,    73,
      74,    75,    49,    38,    50,    46,    39,    16,    41,    47,
     149,    42,    44,    48,    59,    63,    64,    65,    66,    84,
      87,    94,    68,    67,   124,   127,    82,   163,   101,    85,
     128,   105,   129,   -19,   110,   118,   112,    28,   115,   113,
     116,   117,   138,   139,   104,   154,   137,     0,   148,   140,
     141,   156,   155,   142,   143,     0,     0,   144,   145,   150,
       0,   159,   157,    40,   160,   161,   162,   164,   165,   169,
     170,   168,   171,   173,   172,   175,   174,    80,     0,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    98
};

static const yytype_int16 yycheck[] =
{
      38,    87,    42,     3,    14,    15,    14,    15,    21,    24,
      16,     3,    18,   140,   141,     7,    44,    32,    24,   105,
      17,    59,    19,    44,    44,    16,    32,    18,    49,    44,
      68,    69,   159,    46,    39,    27,    76,    47,    44,    47,
      80,    38,    44,    81,    84,    45,    38,    48,    40,    41,
      26,    43,     5,    16,    30,    18,    44,    33,    34,    35,
       4,    14,    15,    22,    23,     0,    25,    44,    44,    26,
      29,     5,    31,    30,    14,    15,    33,    34,    35,    30,
      12,    13,    33,    34,    35,    36,     8,     9,    10,    11,
      12,    13,    16,    42,    18,    28,    44,    44,    44,    28,
     138,    46,    44,    28,     5,    48,    47,    44,    44,    48,
      21,    20,    14,    44,   113,    32,    46,   155,    44,    47,
      32,    48,    32,    46,    44,   111,    47,     9,    46,    48,
      46,    46,    46,    46,    84,   142,    44,    -1,    36,    46,
      46,    37,    46,    48,    47,    -1,    -1,    47,    47,    44,
      -1,    48,    46,    29,    47,    47,    47,    44,    44,    47,
      44,    46,    37,    44,    47,    44,    46,    56,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,    27,    38,    40,    41,    43,    51,    52,
      69,    78,    82,    83,    84,    85,    44,    49,    70,    71,
      44,    44,    39,    44,    44,    53,     0,    45,    69,    48,
       4,    21,    46,    17,    19,    38,    44,     5,    42,    44,
      71,    44,    46,    79,    44,    80,    28,    28,    28,    16,
      18,    24,    32,    44,    73,    74,    75,    73,    54,     5,
      72,    74,    81,    48,    47,    44,    44,    44,    14,    15,
       8,     9,    10,    11,    12,    13,    76,    77,    12,    13,
      77,     5,    46,    73,    48,    47,    80,    21,    22,    23,
      25,    29,    31,    58,    20,    73,    73,    74,    75,    74,
      73,    44,    55,    56,    81,    48,    79,    61,    59,    60,
      44,    57,    47,    48,    79,    46,    46,    46,    58,    26,
      30,    33,    34,    35,    55,    66,    67,    32,    32,    32,
      30,    33,    34,    35,    36,    62,    63,    44,    46,    46,
      46,    46,    48,    47,    47,    47,    65,    64,    36,    73,
      44,    68,    68,    68,    66,    46,    37,    46,    47,    48,
      47,    47,    47,    73,    44,    44,    68,    47,    46,    47,
      44,    37,    47,    44,    46,    44,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    51,    51,    51,    51,    51,    51,
      53,    54,    52,    55,    55,    55,    57,    56,    58,    59,
      58,    60,    58,    58,    61,    58,    58,    62,    62,    63,
      63,    63,    64,    63,    65,    63,    66,    66,    67,    67,
      67,    67,    67,    68,    68,    69,    70,    70,    71,    71,
      72,    72,    73,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    76,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    82,
      82,    83,    84,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     0,     7,     1,     3,     3,     0,     4,     1,     0,
       5,     0,     5,     1,     0,     5,     1,     1,     0,     1,
       1,     1,     0,     7,     0,     5,     1,     3,     4,     4,
       4,    11,     4,     1,     3,     5,     1,     1,     1,     3,
       2,     0,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     3,     5,     1,     3,     1,     3,     5,     7,
       6,     3,     4,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 10: /* $@1: %empty  */
#line 60 "project.y"
                  {add('K', (yyvsp[0].lexeme));}
#line 1294 "project.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 60 "project.y"
                                     {add('R', (yyvsp[0].lexeme));}
#line 1300 "project.tab.c"
    break;

  case 12: /* expr: CREATETABLE $@1 ID $@2 '(' table_def ')'  */
#line 60 "project.y"
                                                                        {printf("correct");   display_symbol_table(); exit(0);}
#line 1306 "project.tab.c"
    break;

  case 16: /* $@3: %empty  */
#line 68 "project.y"
                {attribute_name = (yyvsp[0].lexeme);}
#line 1312 "project.tab.c"
    break;

  case 18: /* datatype: INTEGER  */
#line 71 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1318 "project.tab.c"
    break;

  case 19: /* $@4: %empty  */
#line 72 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1324 "project.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 73 "project.y"
                 {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1330 "project.tab.c"
    break;

  case 23: /* datatype: BOOLEAN  */
#line 74 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1336 "project.tab.c"
    break;

  case 24: /* $@6: %empty  */
#line 75 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1342 "project.tab.c"
    break;

  case 26: /* datatype: DATE  */
#line 76 "project.y"
                       {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1348 "project.tab.c"
    break;

  case 29: /* column_costraint: NOTNULL  */
#line 84 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1354 "project.tab.c"
    break;

  case 30: /* column_costraint: PRIMARYKEY  */
#line 85 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1360 "project.tab.c"
    break;

  case 31: /* column_costraint: UNIQUE  */
#line 86 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1366 "project.tab.c"
    break;

  case 32: /* $@7: %empty  */
#line 87 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1372 "project.tab.c"
    break;

  case 34: /* $@8: %empty  */
#line 88 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1378 "project.tab.c"
    break;

  case 45: /* select_stmt: SELECT select_all_or_list FROM ID where_clause  */
#line 107 "project.y"
                                                             {printf("correct"); display_symbol_table(); exit(0);}
#line 1384 "project.tab.c"
    break;

  case 70: /* insert_stmt: INSERT ID VALUES insertion  */
#line 150 "project.y"
                                         {printf("correct"); exit(0);}
#line 1390 "project.tab.c"
    break;

  case 71: /* insert_stmt: INSERT ID '(' column_list ')' VALUES insertion  */
#line 151 "project.y"
                                                                         {printf("correct"); exit(0);}
#line 1396 "project.tab.c"
    break;

  case 78: /* alter_table_stmt: ALTERTABLE ID DROP COLUMN ID  */
#line 165 "project.y"
                                               {printf("correct"); exit(0);}
#line 1402 "project.tab.c"
    break;

  case 79: /* alter_table_stmt: ALTERTABLE ID RENAME COLUMN ID TO ID  */
#line 166 "project.y"
                                                                       {printf("correct"); exit(0);}
#line 1408 "project.tab.c"
    break;

  case 80: /* alter_table_stmt: ALTERTABLE ID ALTER COLUMN ID datatype  */
#line 167 "project.y"
                                                                         {printf("correct"); exit(0);}
#line 1414 "project.tab.c"
    break;

  case 81: /* drop_stmt: DROP DATABASE ID  */
#line 170 "project.y"
                             {printf("correct"); exit(0);}
#line 1420 "project.tab.c"
    break;

  case 82: /* delete_stmt: DELETE_FROM ID WHERE condition  */
#line 173 "project.y"
                                             {printf("correct"); exit(0);}
#line 1426 "project.tab.c"
    break;

  case 83: /* update_stmt: UPDATE ID SET condition WHERE condition  */
#line 176 "project.y"
                                                      {printf("correct"); exit(0);}
#line 1432 "project.tab.c"
    break;


#line 1436 "project.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 179 "project.y"


int main(void){
	yyparse();
	
	
}

int search(char *token) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, token)) {
			return -1;
			break;
		}
	}
	return 1;
}
void display_symbol_table(){
	printf("\n\n");
	printf("\nSYMBOL        DATATYPE          TYPE \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i = 0; i < count; i++) {
		printf("%-15s %-15s %-15s\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type);
	}

	for(i=0;i<count;i++) {
		/*free(symbol_table[i].id_name);
		free(symbol_table[i].type);*/
	}
	printf("\n\n");
}
void add(char c, char * token) {
  q=search(token);
  if(search(token)){
    if(c == 'K') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].type=("Keyword\t");
			count++;
		}
		else if(c == 'R') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].type=strdup("Relation");
			count++;
		}
		else if(c == 'A') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].type=strdup("Attribute");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].type=strdup("Constant");
			count++;
		}
  }
  printf("%d", count);
}

void insert_type(char * value_type) {
	strcpy(type, value_type);
}
