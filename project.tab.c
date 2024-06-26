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

//GLOBAL VARIABLES
int yylex();
//Keeps track of how many entries in symbol table
int count=0;
char type[10];
//Keeps track of the name of the columns one wants to insert in INSERT INTO statement
char* column_attributes[15] = {NULL};
//Keeps track of how many values one wants to insert in INSERT INTO statement
int countn=0;

//FUNCTIONS
void add(char, char*);
int search(char* token);
char* get_type(char *);
void insert_type(char *);
void display_symbol_table();
char * attribute_name;

#line 107 "project.tab.c"

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
  YYSYMBOL_STAR = 14,                      /* STAR  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_FALSE = 17,                     /* FALSE  */
  YYSYMBOL_ALTER = 18,                     /* ALTER  */
  YYSYMBOL_TRUE = 19,                      /* TRUE  */
  YYSYMBOL_RENAME = 20,                    /* RENAME  */
  YYSYMBOL_TO = 21,                        /* TO  */
  YYSYMBOL_VALUES = 22,                    /* VALUES  */
  YYSYMBOL_BOOLEAN = 23,                   /* BOOLEAN  */
  YYSYMBOL_VARCHAR = 24,                   /* VARCHAR  */
  YYSYMBOL_STRINGVALUE = 25,               /* STRINGVALUE  */
  YYSYMBOL_INTEGER = 26,                   /* INTEGER  */
  YYSYMBOL_CONSTRAINT = 27,                /* CONSTRAINT  */
  YYSYMBOL_ALTERTABLE = 28,                /* ALTERTABLE  */
  YYSYMBOL_COLUMN = 29,                    /* COLUMN  */
  YYSYMBOL_FLOAT = 30,                     /* FLOAT  */
  YYSYMBOL_CHECK = 31,                     /* CHECK  */
  YYSYMBOL_DATE = 32,                      /* DATE  */
  YYSYMBOL_NUM = 33,                       /* NUM  */
  YYSYMBOL_NOTNULL = 34,                   /* NOTNULL  */
  YYSYMBOL_UNIQUE = 35,                    /* UNIQUE  */
  YYSYMBOL_PRIMARYKEY = 36,                /* PRIMARYKEY  */
  YYSYMBOL_FOREIGNKEY = 37,                /* FOREIGNKEY  */
  YYSYMBOL_REFERENCES = 38,                /* REFERENCES  */
  YYSYMBOL_DROP = 39,                      /* DROP  */
  YYSYMBOL_DATABASE = 40,                  /* DATABASE  */
  YYSYMBOL_DELETE_FROM = 41,               /* DELETE_FROM  */
  YYSYMBOL_UPDATE = 42,                    /* UPDATE  */
  YYSYMBOL_SET = 43,                       /* SET  */
  YYSYMBOL_CREATETABLE = 44,               /* CREATETABLE  */
  YYSYMBOL_ID = 45,                        /* ID  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_scope = 50,                     /* scope  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_line = 52,                      /* line  */
  YYSYMBOL_pile_expr = 53,                 /* pile_expr  */
  YYSYMBOL_expr = 54,                      /* expr  */
  YYSYMBOL_create_stmt = 55,               /* create_stmt  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_57_3 = 57,                      /* $@3  */
  YYSYMBOL_table_def = 58,                 /* table_def  */
  YYSYMBOL_column_def = 59,                /* column_def  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_datatype = 61,                  /* datatype  */
  YYSYMBOL_62_5 = 62,                      /* $@5  */
  YYSYMBOL_63_6 = 63,                      /* $@6  */
  YYSYMBOL_64_7 = 64,                      /* $@7  */
  YYSYMBOL_column_costraint_def = 65,      /* column_costraint_def  */
  YYSYMBOL_column_costraint = 66,          /* column_costraint  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_table_constraint_def = 70,      /* table_constraint_def  */
  YYSYMBOL_table_constraint = 71,          /* table_constraint  */
  YYSYMBOL_72_11 = 72,                     /* $@11  */
  YYSYMBOL_73_12 = 73,                     /* $@12  */
  YYSYMBOL_74_13 = 74,                     /* $@13  */
  YYSYMBOL_75_14 = 75,                     /* $@14  */
  YYSYMBOL_76_15 = 76,                     /* $@15  */
  YYSYMBOL_77_16 = 77,                     /* $@16  */
  YYSYMBOL_78_17 = 78,                     /* $@17  */
  YYSYMBOL_parameters = 79,                /* parameters  */
  YYSYMBOL_select_stmt = 80,               /* select_stmt  */
  YYSYMBOL_81_18 = 81,                     /* $@18  */
  YYSYMBOL_82_19 = 82,                     /* $@19  */
  YYSYMBOL_select_all_or_list = 83,        /* select_all_or_list  */
  YYSYMBOL_select_list = 84,               /* select_list  */
  YYSYMBOL_where_clause = 85,              /* where_clause  */
  YYSYMBOL_86_20 = 86,                     /* $@20  */
  YYSYMBOL_values = 87,                    /* values  */
  YYSYMBOL_boolean_values = 88,            /* boolean_values  */
  YYSYMBOL_condition = 89,                 /* condition  */
  YYSYMBOL_90_21 = 90,                     /* $@21  */
  YYSYMBOL_91_22 = 91,                     /* $@22  */
  YYSYMBOL_condition_step2 = 92,           /* condition_step2  */
  YYSYMBOL_comparison_op = 93,             /* comparison_op  */
  YYSYMBOL_boolean_comparison_op = 94,     /* boolean_comparison_op  */
  YYSYMBOL_insert_stmt = 95,               /* insert_stmt  */
  YYSYMBOL_96_23 = 96,                     /* $@23  */
  YYSYMBOL_97_24 = 97,                     /* $@24  */
  YYSYMBOL_98_25 = 98,                     /* $@25  */
  YYSYMBOL_insertion = 99,                 /* insertion  */
  YYSYMBOL_column_list = 100,              /* column_list  */
  YYSYMBOL_101_26 = 101,                   /* $@26  */
  YYSYMBOL_value_list = 102,               /* value_list  */
  YYSYMBOL_insert_values = 103,            /* insert_values  */
  YYSYMBOL_alter_table_stmt = 104,         /* alter_table_stmt  */
  YYSYMBOL_105_27 = 105,                   /* $@27  */
  YYSYMBOL_alter_table_spec = 106,         /* alter_table_spec  */
  YYSYMBOL_107_28 = 107,                   /* $@28  */
  YYSYMBOL_108_29 = 108,                   /* $@29  */
  YYSYMBOL_109_30 = 109,                   /* $@30  */
  YYSYMBOL_110_31 = 110,                   /* $@31  */
  YYSYMBOL_111_32 = 111,                   /* $@32  */
  YYSYMBOL_112_33 = 112,                   /* $@33  */
  YYSYMBOL_113_34 = 113,                   /* $@34  */
  YYSYMBOL_drop_stmt = 114,                /* drop_stmt  */
  YYSYMBOL_115_35 = 115,                   /* $@35  */
  YYSYMBOL_116_36 = 116,                   /* $@36  */
  YYSYMBOL_delete_stmt = 117,              /* delete_stmt  */
  YYSYMBOL_118_37 = 118,                   /* $@37  */
  YYSYMBOL_119_38 = 119,                   /* $@38  */
  YYSYMBOL_update_stmt = 120,              /* update_stmt  */
  YYSYMBOL_121_39 = 121,                   /* $@39  */
  YYSYMBOL_122_40 = 122,                   /* $@40  */
  YYSYMBOL_123_41 = 123                    /* $@41  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    48,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    51,    54,    56,    57,    61,    62,    63,
      64,    65,    66,    67,    70,    70,    70,    73,    74,    75,
      78,    78,    82,    83,    83,    84,    84,    85,    86,    86,
      87,    90,    91,    95,    96,    97,    98,    98,    98,    99,
      99,   102,   103,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   113,   114,   118,   118,   118,
     121,   122,   125,   126,   129,   129,   130,   134,   135,   136,
     139,   140,   144,   144,   145,   145,   146,   149,   150,   151,
     152,   154,   155,   156,   157,   160,   161,   165,   165,   168,
     165,   170,   171,   174,   178,   178,   186,   189,   190,   194,
     206,   216,   228,   228,   230,   230,   230,   231,   231,   231,
     231,   232,   232,   232,   236,   236,   236,   239,   239,   239,
     242,   242,   242,   242
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
  "WHERE", "GROUPBY", "INSERT", "LS", "GR", "GE", "LE", "EQ", "NE", "STAR",
  "AND", "OR", "FALSE", "ALTER", "TRUE", "RENAME", "TO", "VALUES",
  "BOOLEAN", "VARCHAR", "STRINGVALUE", "INTEGER", "CONSTRAINT",
  "ALTERTABLE", "COLUMN", "FLOAT", "CHECK", "DATE", "NUM", "NOTNULL",
  "UNIQUE", "PRIMARYKEY", "FOREIGNKEY", "REFERENCES", "DROP", "DATABASE",
  "DELETE_FROM", "UPDATE", "SET", "CREATETABLE", "ID", "'('", "')'", "','",
  "$accept", "scope", "$@1", "line", "pile_expr", "expr", "create_stmt",
  "$@2", "$@3", "table_def", "column_def", "$@4", "datatype", "$@5", "$@6",
  "$@7", "column_costraint_def", "column_costraint", "$@8", "$@9", "$@10",
  "table_constraint_def", "table_constraint", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "parameters", "select_stmt", "$@18",
  "$@19", "select_all_or_list", "select_list", "where_clause", "$@20",
  "values", "boolean_values", "condition", "$@21", "$@22",
  "condition_step2", "comparison_op", "boolean_comparison_op",
  "insert_stmt", "$@23", "$@24", "$@25", "insertion", "column_list",
  "$@26", "value_list", "insert_values", "alter_table_stmt", "$@27",
  "alter_table_spec", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "$@34", "drop_stmt", "$@35", "$@36", "delete_stmt", "$@37", "$@38",
  "update_stmt", "$@39", "$@40", "$@41", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-159)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -159,     4,     0,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,     0,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,   -12,   -33,   -27,   -20,   -19,   -15,   -14,  -159,  -159,
     -23,    33,  -159,  -159,    -7,  -159,    35,    -5,  -159,     3,
    -159,     5,  -159,  -159,  -159,  -159,    14,  -159,  -159,    16,
    -159,    23,    24,    45,    57,    58,  -159,    -9,    -9,    43,
      84,    46,    44,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,    72,    10,  -159,    -1,    85,  -159,    48,    49,  -159,
    -159,    50,    71,    51,    54,    55,  -159,  -159,  -159,  -159,
    -159,  -159,   -16,    -9,   -16,  -159,  -159,  -159,    26,  -159,
      30,    -9,    24,  -159,    26,    80,  -159,  -159,  -159,  -159,
    -159,    -9,    -9,    -9,  -159,  -159,    56,  -159,  -159,    42,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,    59,  -159,  -159,
      60,  -159,  -159,  -159,  -159,  -159,    62,    63,    64,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,    66,    67,    68,    69,
      70,    36,     2,  -159,    73,    79,    86,    87,    75,    88,
      90,    -9,    77,    77,    77,  -159,  -159,  -159,  -159,    76,
      81,  -159,    78,    83,    89,    -9,  -159,  -159,    91,    92,
      94,    95,    96,    97,     2,  -159,  -159,  -159,    99,   102,
      82,  -159,    77,  -159,  -159,  -159,    60,  -159,  -159,    93,
     103,  -159,  -159,   104,   105,   106,   112,  -159,  -159,   109,
      98,   110,   111,  -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    57,    87,   102,   114,   117,   120,
      14,     3,     4,     5,     7,    13,     8,    11,     9,    10,
      12,     0,     0,     0,     0,     0,     0,     0,     6,    60,
      62,     0,    61,    88,     0,   115,     0,     0,    15,     0,
      58,     0,   111,   107,   104,   103,     0,   118,   121,     0,
      63,     0,     0,     0,     0,     0,   116,     0,     0,     0,
      66,    93,     0,   112,   108,   105,    71,    70,    68,    67,
      69,     0,     0,   119,    76,     0,    20,     0,    17,    64,
      59,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,     0,     0,     0,    72,    74,   122,     0,    16,
       0,     0,     0,    89,     0,     0,   106,    77,    78,    79,
      80,     0,     0,     0,    27,    28,    22,    25,    30,    32,
      49,    53,    43,    45,    47,    19,    18,    41,    65,    95,
       0,   113,   109,    73,    75,   123,     0,     0,     0,    39,
      33,    35,    34,    36,    21,    31,     0,     0,     0,     0,
       0,     0,    98,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,   100,    99,   101,     0,
      96,   110,     0,     0,     0,     0,    37,    50,     0,    55,
       0,     0,     0,    91,    98,    29,    24,    26,     0,     0,
       0,    54,     0,    44,    46,    48,     0,    97,    40,     0,
       0,    56,    92,     0,     0,     0,     0,    38,    51,     0,
       0,     0,     0,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,   118,  -159,  -159,  -159,  -159,    32,
    -159,  -159,     1,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,   -18,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -158,  -159,  -159,  -159,  -159,    65,  -159,  -159,   -47,   -92,
     -58,  -159,  -159,  -159,  -159,    52,  -159,  -159,  -159,  -159,
     -62,    61,  -159,   -49,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,    13,    14,    27,    49,    77,
      78,    98,   119,   137,   138,   136,   144,   145,   159,   189,
     158,   126,   127,   148,   149,   150,   146,   190,   209,   147,
     180,    15,    21,    51,    31,    32,    80,   101,    71,    72,
      73,   111,   112,    74,    92,    93,    16,    22,    41,   130,
     153,    62,    81,   169,   170,    17,    23,    45,    55,    85,
      54,    84,   154,    53,    83,    18,    24,    46,    19,    25,
      57,    20,    26,    58,   113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,   109,    29,     4,     3,   181,   182,     5,    66,    68,
      67,    42,    33,    43,    95,    96,    68,    69,    34,    66,
      35,    67,    90,    91,    69,    39,    36,   166,     6,    70,
      37,    38,    44,    30,   201,   167,    70,    40,    48,     7,
      47,     8,     9,   128,    10,   107,   108,   110,    30,   114,
     115,    52,   116,   133,   134,   135,   117,   120,   118,    56,
     168,   121,    59,   120,   122,   123,   124,   121,    60,    61,
     122,   123,   124,   139,    63,    76,   140,   141,   142,   143,
      86,    87,    88,    89,    90,    91,    64,    65,    76,    79,
      97,    82,   168,   103,   -94,    99,   104,   100,   102,   105,
     106,   132,   -23,   178,    50,   131,   152,   151,   155,   156,
     157,   160,   172,   161,   162,   163,   164,   188,   171,   173,
     174,   175,   179,   183,    94,   185,   176,   177,   200,   184,
     186,    28,   125,   165,   202,   197,   187,     0,   191,   203,
     192,   193,   194,   195,   211,   196,   198,   199,   204,   205,
     208,     0,   206,   207,   210,   212,     0,     0,   213,     0,
       0,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
      58,    93,    14,     3,     0,   163,   164,     7,    17,    25,
      19,    18,    45,    20,    15,    16,    25,    33,    45,    17,
      40,    19,    12,    13,    33,    48,    45,    25,    28,    45,
      45,    45,    39,    45,   192,    33,    45,     4,    43,    39,
       5,    41,    42,   101,    44,    92,    93,    94,    45,    23,
      24,    46,    26,   111,   112,   113,    30,    27,    32,    45,
     152,    31,    46,    27,    34,    35,    36,    31,    45,    45,
      34,    35,    36,    31,    29,    45,    34,    35,    36,    37,
       8,     9,    10,    11,    12,    13,    29,    29,    45,     5,
       5,    47,   184,    22,    48,    47,    45,    48,    48,    45,
      45,    21,    46,   161,    39,   104,    46,    48,    46,    46,
      46,    45,    33,    46,    46,    46,    46,   175,    45,    33,
      33,    46,    45,    47,    72,    47,    38,    37,    46,    48,
      47,    13,   100,   151,   196,   184,    47,    -1,    47,    46,
      48,    47,    47,    47,    46,    48,    47,    45,    45,    45,
      38,    -1,    47,    47,    45,    45,    -1,    -1,    47,    -1,
      -1,    -1,    -1,   102
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     0,     3,     7,    28,    39,    41,    42,
      44,    52,    53,    54,    55,    80,    95,   104,   114,   117,
     120,    81,    96,   105,   115,   118,   121,    56,    53,    14,
      45,    83,    84,    45,    45,    40,    45,    45,    45,    48,
       4,    97,    18,    20,    39,   106,   116,     5,    43,    57,
      84,    82,    46,   112,   109,   107,    45,   119,   122,    46,
      45,    45,   100,    29,    29,    29,    17,    19,    25,    33,
      45,    87,    88,    89,    92,    89,    45,    58,    59,     5,
      85,   101,    47,   113,   110,   108,     8,     9,    10,    11,
      12,    13,    93,    94,    94,    15,    16,     5,    60,    47,
      48,    86,    48,    22,    45,    45,    45,    87,    87,    88,
      87,    90,    91,   123,    23,    24,    26,    30,    32,    61,
      27,    31,    34,    35,    36,    58,    70,    71,    89,   100,
      98,    61,    21,    89,    89,    89,    64,    62,    63,    31,
      34,    35,    36,    37,    65,    66,    75,    78,    72,    73,
      74,    48,    46,    99,   111,    46,    46,    46,    69,    67,
      45,    46,    46,    46,    46,    70,    25,    33,    88,   102,
     103,    45,    33,    33,    33,    46,    38,    37,    89,    45,
      79,    79,    79,    47,    48,    47,    47,    47,    89,    68,
      76,    47,    48,    47,    47,    47,    48,   102,    47,    45,
      46,    79,    99,    46,    45,    45,    47,    47,    38,    77,
      45,    46,    45,    47
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    51,    50,    52,    53,    53,    54,    54,    54,
      54,    54,    54,    54,    56,    57,    55,    58,    58,    58,
      60,    59,    61,    62,    61,    63,    61,    61,    64,    61,
      61,    65,    65,    66,    66,    66,    67,    68,    66,    69,
      66,    70,    70,    72,    71,    73,    71,    74,    71,    75,
      76,    77,    71,    78,    71,    79,    79,    81,    82,    80,
      83,    83,    84,    84,    86,    85,    85,    87,    87,    87,
      88,    88,    90,    89,    91,    89,    89,    92,    92,    92,
      92,    93,    93,    93,    93,    94,    94,    96,    97,    98,
      95,    99,    99,   100,   101,   100,   102,   102,   102,   103,
     103,   103,   105,   104,   107,   108,   106,   109,   110,   111,
     106,   112,   113,   106,   115,   116,   114,   118,   119,   117,
     121,   122,   123,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     7,     1,     3,     3,
       0,     4,     1,     0,     5,     0,     5,     1,     0,     5,
       1,     1,     0,     1,     1,     1,     0,     0,     8,     0,
       5,     1,     3,     0,     5,     0,     5,     0,     5,     0,
       0,     0,    14,     0,     5,     1,     3,     0,     0,     7,
       1,     1,     1,     3,     0,     3,     0,     1,     1,     1,
       1,     1,     0,     4,     0,     4,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     0,     0,     0,
      10,     3,     5,     1,     0,     4,     1,     3,     0,     1,
       1,     1,     0,     4,     0,     0,     5,     0,     0,     0,
       8,     0,     0,     6,     0,     0,     5,     0,     0,     6,
       0,     0,     0,     9
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
  case 2: /* $@1: %empty  */
#line 51 "project.y"
       {printf("TO END YOUR STATEMENT, WRITE 'end'\n");}
#line 1371 "project.tab.c"
    break;

  case 3: /* scope: $@1 line  */
#line 51 "project.y"
                                                             {printf("\nCorrect Statement\n");display_symbol_table(); exit(0);}
#line 1377 "project.tab.c"
    break;

  case 14: /* $@2: %empty  */
#line 70 "project.y"
                         {add('K', (yyvsp[0].lexeme));}
#line 1383 "project.tab.c"
    break;

  case 15: /* $@3: %empty  */
#line 70 "project.y"
                                            {add('R', (yyvsp[0].lexeme));}
#line 1389 "project.tab.c"
    break;

  case 20: /* $@4: %empty  */
#line 78 "project.y"
                {attribute_name = (yyvsp[0].lexeme);}
#line 1395 "project.tab.c"
    break;

  case 22: /* datatype: INTEGER  */
#line 82 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1401 "project.tab.c"
    break;

  case 23: /* $@5: %empty  */
#line 83 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1407 "project.tab.c"
    break;

  case 25: /* $@6: %empty  */
#line 84 "project.y"
                 {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1413 "project.tab.c"
    break;

  case 27: /* datatype: BOOLEAN  */
#line 85 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1419 "project.tab.c"
    break;

  case 28: /* $@7: %empty  */
#line 86 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1425 "project.tab.c"
    break;

  case 30: /* datatype: DATE  */
#line 87 "project.y"
                       {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1431 "project.tab.c"
    break;

  case 33: /* column_costraint: NOTNULL  */
#line 95 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1437 "project.tab.c"
    break;

  case 34: /* column_costraint: PRIMARYKEY  */
#line 96 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1443 "project.tab.c"
    break;

  case 35: /* column_costraint: UNIQUE  */
#line 97 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1449 "project.tab.c"
    break;

  case 36: /* $@8: %empty  */
#line 98 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1455 "project.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 98 "project.y"
                                                                        {add('K', (yyvsp[0].lexeme));}
#line 1461 "project.tab.c"
    break;

  case 39: /* $@10: %empty  */
#line 99 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1467 "project.tab.c"
    break;

  case 43: /* $@11: %empty  */
#line 106 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1473 "project.tab.c"
    break;

  case 45: /* $@12: %empty  */
#line 107 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1479 "project.tab.c"
    break;

  case 47: /* $@13: %empty  */
#line 108 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1485 "project.tab.c"
    break;

  case 49: /* $@14: %empty  */
#line 109 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1491 "project.tab.c"
    break;

  case 50: /* $@15: %empty  */
#line 109 "project.y"
                                                                           {add('K', (yyvsp[0].lexeme));}
#line 1497 "project.tab.c"
    break;

  case 51: /* $@16: %empty  */
#line 109 "project.y"
                                                                                                                {add('K', (yyvsp[0].lexeme));}
#line 1503 "project.tab.c"
    break;

  case 53: /* $@17: %empty  */
#line 110 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1509 "project.tab.c"
    break;

  case 57: /* $@18: %empty  */
#line 118 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1515 "project.tab.c"
    break;

  case 58: /* $@19: %empty  */
#line 118 "project.y"
                                                             {add('K', (yyvsp[0].lexeme));}
#line 1521 "project.tab.c"
    break;

  case 64: /* $@20: %empty  */
#line 129 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1527 "project.tab.c"
    break;

  case 67: /* values: NUM  */
#line 134 "project.y"
           {add('C', (yyvsp[0].lexeme));}
#line 1533 "project.tab.c"
    break;

  case 68: /* values: STRINGVALUE  */
#line 135 "project.y"
                            {add('C', (yyvsp[0].lexeme));}
#line 1539 "project.tab.c"
    break;

  case 70: /* boolean_values: TRUE  */
#line 139 "project.y"
                     {add('C', (yyvsp[0].lexeme));}
#line 1545 "project.tab.c"
    break;

  case 71: /* boolean_values: FALSE  */
#line 140 "project.y"
                                  {add('C', (yyvsp[0].lexeme));}
#line 1551 "project.tab.c"
    break;

  case 72: /* $@21: %empty  */
#line 144 "project.y"
                               {add('K', (yyvsp[0].lexeme));}
#line 1557 "project.tab.c"
    break;

  case 74: /* $@22: %empty  */
#line 145 "project.y"
                                       {add('K', (yyvsp[0].lexeme));}
#line 1563 "project.tab.c"
    break;

  case 81: /* comparison_op: LS  */
#line 154 "project.y"
                   {add('K', (yyvsp[0].lexeme));}
#line 1569 "project.tab.c"
    break;

  case 82: /* comparison_op: GR  */
#line 155 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1575 "project.tab.c"
    break;

  case 83: /* comparison_op: GE  */
#line 156 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1581 "project.tab.c"
    break;

  case 84: /* comparison_op: LE  */
#line 157 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1587 "project.tab.c"
    break;

  case 87: /* $@23: %empty  */
#line 165 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1593 "project.tab.c"
    break;

  case 88: /* $@24: %empty  */
#line 165 "project.y"
                                        {if(search((yyvsp[0].lexeme))!=-1){
											printf("This table does not exist");
											exit(0);}}
#line 1601 "project.tab.c"
    break;

  case 89: /* $@25: %empty  */
#line 168 "project.y"
                                                   {add('K', (yyvsp[0].lexeme));}
#line 1607 "project.tab.c"
    break;

  case 93: /* column_list: ID  */
#line 174 "project.y"
                 {
				column_attributes[countn] = (yyvsp[0].lexeme);
				countn=0;
			}
#line 1616 "project.tab.c"
    break;

  case 94: /* $@26: %empty  */
#line 178 "project.y"
                             {

				
				column_attributes[countn] = (yyvsp[0].lexeme);
				countn++;
			}
#line 1627 "project.tab.c"
    break;

  case 96: /* value_list: insert_values  */
#line 186 "project.y"
                           {
			   countn=0;
		   }
#line 1635 "project.tab.c"
    break;

  case 99: /* insert_values: NUM  */
#line 194 "project.y"
                    {
				if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "INT") != 0) && (strcmp(type_id, "FLOAT") != 0)
						&& (strcmp(type_id, "int") != 0) && (strcmp(type_id, "float") != 0))
						{
						printf("Type Error. Trying to assign %s to Int\n", type_id); exit(0);}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
				add('C', (yyvsp[0].lexeme));
		   }
#line 1652 "project.tab.c"
    break;

  case 100: /* insert_values: STRINGVALUE  */
#line 206 "project.y"
                                 {
			    if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "VARCHAR") != 0)  && (strcmp(type_id, "varchar") != 0)){
					printf("Type Error. Trying to assign %s to String", type_id); exit(0);}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
				add('C', (yyvsp[0].lexeme));
		   }
#line 1667 "project.tab.c"
    break;

  case 101: /* insert_values: boolean_values  */
#line 216 "project.y"
                                    {
			    if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "BOOLEAN") != 0)  && (strcmp(type_id, "boolean") != 0)){
					printf("Type Error. Trying to assign %s to Boolean\n", type_id); exit(0);}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
		   }
#line 1681 "project.tab.c"
    break;

  case 102: /* $@27: %empty  */
#line 228 "project.y"
                             {add('K', (yyvsp[0].lexeme));}
#line 1687 "project.tab.c"
    break;

  case 104: /* $@28: %empty  */
#line 230 "project.y"
                       {add('K', (yyvsp[0].lexeme));}
#line 1693 "project.tab.c"
    break;

  case 105: /* $@29: %empty  */
#line 230 "project.y"
                                              {add('K', (yyvsp[0].lexeme));}
#line 1699 "project.tab.c"
    break;

  case 107: /* $@30: %empty  */
#line 231 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1705 "project.tab.c"
    break;

  case 108: /* $@31: %empty  */
#line 231 "project.y"
                                                                {add('K', (yyvsp[0].lexeme));}
#line 1711 "project.tab.c"
    break;

  case 109: /* $@32: %empty  */
#line 231 "project.y"
                                                                                      {add('K', (yyvsp[0].lexeme));}
#line 1717 "project.tab.c"
    break;

  case 110: /* alter_table_spec: RENAME $@30 COLUMN $@31 ID TO $@32 ID  */
#line 231 "project.y"
                                                                                                         {add('A', (yyvsp[0].lexeme));}
#line 1723 "project.tab.c"
    break;

  case 111: /* $@33: %empty  */
#line 232 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1729 "project.tab.c"
    break;

  case 112: /* $@34: %empty  */
#line 232 "project.y"
                                                               {add('K', (yyvsp[0].lexeme));}
#line 1735 "project.tab.c"
    break;

  case 114: /* $@35: %empty  */
#line 236 "project.y"
                 {add('K', (yyvsp[0].lexeme));}
#line 1741 "project.tab.c"
    break;

  case 115: /* $@36: %empty  */
#line 236 "project.y"
                                          {add('K', (yyvsp[0].lexeme));}
#line 1747 "project.tab.c"
    break;

  case 117: /* $@37: %empty  */
#line 239 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1753 "project.tab.c"
    break;

  case 118: /* $@38: %empty  */
#line 239 "project.y"
                                                   {add('K', (yyvsp[0].lexeme));}
#line 1759 "project.tab.c"
    break;

  case 120: /* $@39: %empty  */
#line 242 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1765 "project.tab.c"
    break;

  case 121: /* $@40: %empty  */
#line 242 "project.y"
                                            {add('K', (yyvsp[0].lexeme));}
#line 1771 "project.tab.c"
    break;

  case 122: /* $@41: %empty  */
#line 242 "project.y"
                                                                            {add('K', (yyvsp[0].lexeme));}
#line 1777 "project.tab.c"
    break;


#line 1781 "project.tab.c"

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

#line 245 "project.y"


int main(void){
	yyparse();
}

//THIS FUNCTION CHECKS WHETHER IF TOKEN IS ALREADY IN SYMBOL TABLE
int search(char *token) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, token)==0) {
			return -1;
			break;
		}
	}
	return 1;
}

//DISPLAYS IN OUTPUT THE SYMBOL TABLE AND CLEARS IT FOR FURTHER RUNS
void display_symbol_table(){
	printf("\n\n");
	printf("\nSYMBOL        DATATYPE          TYPE \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i = 0; i < count; i++) {
		printf("%-15s %-15s %-15s\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type);
	}
	for(i = 0; i < count; i++) {
		symbol_table[i].id_name= NULL; symbol_table[i].data_type=NULL ;symbol_table[i].type=NULL;
	}
	printf("\n\n");
}

//ADDS TOKEN INTO SYMBOL TABLE
void add(char c, char * token) {
  if((c == 'K' || c == 'C' )){
	  //IF STMT CHECK WHETHER IF TOKEN ALREADY EXISTS
	  if(search(token)!=-1){
			if(c == 'K') {
				symbol_table[count].id_name= strdup(token);
				symbol_table[count].data_type=strdup("N/A");
				symbol_table[count].type=("Keyword\t");
				count++;
			}
			else if(c == 'C') {
				symbol_table[count].id_name= strdup(token);
				symbol_table[count].data_type=strdup("CONST");
			
				symbol_table[count].type=strdup("Constant");
				count++;
			}
			return;
		}
  }
  else{
	//IF STMT CHECKS WHETHER IF TOKEN IS ALREADY IN SYMBOL TABLE AND GIVES AN ERROR MESSAGE IF IT DOES
	if(search(token)!=-1){
		if(c == 'R') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].type=strdup("Relation");
			count++;
		}
		else if(c == 'A') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup(type);
		
			symbol_table[count].type=strdup("Attribute");
			count++;
		}
    }else{printf("This token alread exists--------> %s", token);exit(0);}
  }
}

//INSERT TYPE INTO CURRENT INSTANCE IN SYMBOL TABLE
void insert_type(char * value_type) {
	strcpy(type, value_type);
}

//RETRIVES TYPE OF A GIVEN TOKEN
char* get_type(char *id) { 
    char* type_id = "none";
	int i; 
    for(i=0; i<=count-1; i++) {
        if(strcmp(symbol_table[i].id_name, id) == 0) { 

            type_id = symbol_table[i].data_type;
            break;  
        }
    } 
    return type_id;
}
