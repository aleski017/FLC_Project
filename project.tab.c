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
char* get_type(char *);
void insert_type(char *);
void display_symbol_table();
char * attribute_name;
extern char* yytext;

#line 106 "project.tab.c"

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
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_scope = 50,                     /* scope  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_line = 52,                      /* line  */
  YYSYMBOL_expr = 53,                      /* expr  */
  YYSYMBOL_create_stmt = 54,               /* create_stmt  */
  YYSYMBOL_55_2 = 55,                      /* $@2  */
  YYSYMBOL_56_3 = 56,                      /* $@3  */
  YYSYMBOL_table_def = 57,                 /* table_def  */
  YYSYMBOL_column_def = 58,                /* column_def  */
  YYSYMBOL_59_4 = 59,                      /* $@4  */
  YYSYMBOL_datatype = 60,                  /* datatype  */
  YYSYMBOL_61_5 = 61,                      /* $@5  */
  YYSYMBOL_62_6 = 62,                      /* $@6  */
  YYSYMBOL_63_7 = 63,                      /* $@7  */
  YYSYMBOL_column_costraint_def = 64,      /* column_costraint_def  */
  YYSYMBOL_column_costraint = 65,          /* column_costraint  */
  YYSYMBOL_66_8 = 66,                      /* $@8  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_68_10 = 68,                     /* $@10  */
  YYSYMBOL_table_constraint_def = 69,      /* table_constraint_def  */
  YYSYMBOL_table_constraint = 70,          /* table_constraint  */
  YYSYMBOL_71_11 = 71,                     /* $@11  */
  YYSYMBOL_72_12 = 72,                     /* $@12  */
  YYSYMBOL_73_13 = 73,                     /* $@13  */
  YYSYMBOL_74_14 = 74,                     /* $@14  */
  YYSYMBOL_75_15 = 75,                     /* $@15  */
  YYSYMBOL_76_16 = 76,                     /* $@16  */
  YYSYMBOL_77_17 = 77,                     /* $@17  */
  YYSYMBOL_parameters = 78,                /* parameters  */
  YYSYMBOL_select_stmt = 79,               /* select_stmt  */
  YYSYMBOL_80_18 = 80,                     /* $@18  */
  YYSYMBOL_81_19 = 81,                     /* $@19  */
  YYSYMBOL_select_all_or_list = 82,        /* select_all_or_list  */
  YYSYMBOL_select_list = 83,               /* select_list  */
  YYSYMBOL_where_clause = 84,              /* where_clause  */
  YYSYMBOL_85_20 = 85,                     /* $@20  */
  YYSYMBOL_condition = 86,                 /* condition  */
  YYSYMBOL_87_21 = 87,                     /* $@21  */
  YYSYMBOL_88_22 = 88,                     /* $@22  */
  YYSYMBOL_condition_step2 = 89,           /* condition_step2  */
  YYSYMBOL_values = 90,                    /* values  */
  YYSYMBOL_boolean_values = 91,            /* boolean_values  */
  YYSYMBOL_comparison_op = 92,             /* comparison_op  */
  YYSYMBOL_boolean_comparison_op = 93,     /* boolean_comparison_op  */
  YYSYMBOL_insert_stmt = 94,               /* insert_stmt  */
  YYSYMBOL_95_23 = 95,                     /* $@23  */
  YYSYMBOL_96_24 = 96,                     /* $@24  */
  YYSYMBOL_insertion = 97,                 /* insertion  */
  YYSYMBOL_column_list = 98,               /* column_list  */
  YYSYMBOL_99_25 = 99,                     /* $@25  */
  YYSYMBOL_value_list = 100,               /* value_list  */
  YYSYMBOL_insert_values = 101,            /* insert_values  */
  YYSYMBOL_alter_table_stmt = 102,         /* alter_table_stmt  */
  YYSYMBOL_103_26 = 103,                   /* $@26  */
  YYSYMBOL_alter_table_spec = 104,         /* alter_table_spec  */
  YYSYMBOL_105_27 = 105,                   /* $@27  */
  YYSYMBOL_106_28 = 106,                   /* $@28  */
  YYSYMBOL_107_29 = 107,                   /* $@29  */
  YYSYMBOL_108_30 = 108,                   /* $@30  */
  YYSYMBOL_109_31 = 109,                   /* $@31  */
  YYSYMBOL_110_32 = 110,                   /* $@32  */
  YYSYMBOL_111_33 = 111,                   /* $@33  */
  YYSYMBOL_drop_stmt = 112,                /* drop_stmt  */
  YYSYMBOL_113_34 = 113,                   /* $@34  */
  YYSYMBOL_114_35 = 114,                   /* $@35  */
  YYSYMBOL_delete_stmt = 115,              /* delete_stmt  */
  YYSYMBOL_116_36 = 116,                   /* $@36  */
  YYSYMBOL_117_37 = 117,                   /* $@37  */
  YYSYMBOL_update_stmt = 118,              /* update_stmt  */
  YYSYMBOL_119_38 = 119,                   /* $@38  */
  YYSYMBOL_120_39 = 120,                   /* $@39  */
  YYSYMBOL_121_40 = 121                    /* $@40  */
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
#define YYLAST   187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,    48,     2,    47,     2,     2,     2,     2,     2,
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
       0,    51,    51,    51,    53,    54,    58,    59,    60,    61,
      62,    63,    64,    67,    67,    67,    70,    71,    72,    75,
      75,    78,    79,    79,    80,    80,    81,    82,    82,    83,
      86,    87,    91,    92,    93,    94,    94,    94,    95,    95,
      98,    99,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   107,   107,   110,   111,   114,   114,   114,   118,
     119,   122,   123,   126,   126,   127,   130,   130,   131,   131,
     132,   135,   136,   137,   139,   140,   141,   144,   145,   148,
     149,   150,   151,   154,   155,   158,   158,   158,   160,   161,
     164,   173,   173,   181,   184,   185,   188,   199,   209,   222,
     222,   224,   224,   224,   225,   225,   225,   225,   226,   226,
     226,   229,   229,   229,   232,   232,   232,   235,   235,   235,
     235
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
  "DELETE_FROM", "UPDATE", "SET", "CREATETABLE", "ID", "'('", "')'", "','",
  "'*'", "$accept", "scope", "$@1", "line", "expr", "create_stmt", "$@2",
  "$@3", "table_def", "column_def", "$@4", "datatype", "$@5", "$@6", "$@7",
  "column_costraint_def", "column_costraint", "$@8", "$@9", "$@10",
  "table_constraint_def", "table_constraint", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "parameters", "select_stmt", "$@18",
  "$@19", "select_all_or_list", "select_list", "where_clause", "$@20",
  "condition", "$@21", "$@22", "condition_step2", "values",
  "boolean_values", "comparison_op", "boolean_comparison_op",
  "insert_stmt", "$@23", "$@24", "insertion", "column_list", "$@25",
  "value_list", "insert_values", "alter_table_stmt", "$@26",
  "alter_table_spec", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32",
  "$@33", "drop_stmt", "$@34", "$@35", "delete_stmt", "$@36", "$@37",
  "update_stmt", "$@38", "$@39", "$@40", YY_NULLPTR
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

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -159,    10,    -1,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,    -1,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
     -35,   -26,   -19,   -12,    -6,     3,    11,  -159,   -15,  -159,
      37,  -159,    13,    -3,  -159,    55,    19,  -159,    22,  -159,
      23,  -159,  -159,  -159,  -159,    25,  -159,  -159,    31,  -159,
      26,    40,    42,    61,    62,    63,  -159,   -13,   -13,    48,
      88,    47,    74,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,    15,    73,    33,    91,  -159,    51,    52,  -159,
    -159,    23,  -159,    54,    56,    57,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,   -20,     5,   -20,  -159,    34,  -159,
      18,   -13,  -159,    58,    34,    82,  -159,   -13,   -13,  -159,
    -159,  -159,   -13,  -159,  -159,    59,  -159,  -159,    44,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,    60,  -159,     4,  -159,
    -159,  -159,  -159,  -159,  -159,    64,    65,    66,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,    68,    69,    70,    72,    75,
      38,  -159,  -159,  -159,    67,    71,    77,    76,    87,    90,
      78,    89,    92,   -13,    80,    80,    80,  -159,    83,     4,
    -159,    79,    81,    85,   -13,  -159,  -159,    86,    93,    95,
      96,    97,    58,  -159,  -159,  -159,  -159,    98,    94,    84,
    -159,    80,  -159,  -159,  -159,  -159,  -159,   100,   102,  -159,
     103,   104,   105,    99,  -159,  -159,   108,   109,   111,   107,
    -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    56,    85,    99,   111,   114,   117,
      13,     3,     4,     6,    12,     7,    10,     8,     9,    11,
       0,     0,     0,     0,     0,     0,     0,     5,    61,    59,
       0,    60,     0,     0,   112,     0,     0,    14,     0,    57,
       0,   108,   104,   101,   100,     0,   115,   118,     0,    62,
       0,    90,     0,     0,     0,     0,   113,     0,     0,     0,
      65,     0,     0,   109,   105,   102,    78,    77,    75,    74,
      76,   116,    70,     0,     0,     0,    19,     0,    16,    63,
      58,     0,    86,     0,     0,     0,    66,    68,    79,    80,
      81,    82,    83,    84,     0,     0,     0,   119,     0,    15,
       0,     0,    92,     0,     0,     0,   103,     0,     0,    71,
      72,    73,     0,    26,    27,    21,    24,    29,    31,    48,
      52,    42,    44,    46,    18,    17,    40,    64,    95,    87,
     110,   106,    67,    69,   120,     0,     0,     0,    38,    32,
      34,    33,    35,    20,    30,     0,     0,     0,     0,     0,
       0,    97,    96,    98,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    88,    95,
     107,     0,     0,     0,     0,    36,    49,     0,    54,     0,
       0,     0,     0,    94,    28,    23,    25,     0,     0,     0,
      53,     0,    43,    45,    47,    89,    39,     0,     0,    55,
       0,     0,     0,     0,    37,    50,     0,     0,     0,     0,
      51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,   121,  -159,  -159,  -159,     6,  -159,
    -159,    30,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
     -11,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -158,
    -159,  -159,  -159,  -159,   110,  -159,  -159,   -58,  -159,  -159,
    -159,   -79,   -94,  -159,   101,  -159,  -159,  -159,   -47,   106,
    -159,   -32,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    11,    12,    13,    26,    48,    77,    78,
      98,   118,   136,   137,   135,   143,   144,   161,   188,   160,
     125,   126,   147,   148,   149,   145,   189,   206,   146,   179,
      14,    20,    50,    30,    31,    80,   101,    71,   107,   108,
      72,    73,    74,    94,    95,    15,    21,   103,   129,    52,
      61,   154,   155,    16,    22,    44,    55,    85,    54,    84,
     156,    53,    83,    17,    23,    45,    18,    24,    57,    19,
      25,    58,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,   110,     4,    66,    68,    67,     5,   180,   181,    28,
       3,    68,    69,    29,    41,   109,    42,   111,    32,    69,
      66,    66,    67,    67,    70,    33,     6,    34,   151,    86,
      87,    70,    38,   199,   153,    43,   152,     7,    35,     8,
       9,    39,    10,   127,   119,    92,    93,    36,   120,   132,
     133,   121,   122,   123,   134,    37,   113,   114,    40,   115,
      46,    47,    76,   116,   119,   117,    28,    51,   120,    56,
      60,   121,   122,   123,   138,   153,    59,   139,   140,   141,
     142,    88,    89,    90,    91,    92,    93,   -91,    62,    63,
      64,    65,    76,    79,    81,    82,    97,    99,   104,   100,
     105,   106,   131,   128,   -22,   177,   124,   150,   171,   157,
     158,   159,   162,   168,   163,   164,   187,   165,   169,   172,
     166,   170,   173,   174,   178,   184,   175,   185,   176,   198,
     182,   186,   190,    27,   130,   195,   205,   183,   197,   167,
     191,   192,   193,   194,   196,   200,   201,   202,    49,     0,
     203,   204,   207,   210,   208,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102
};

static const yytype_int16 yycheck[] =
{
      58,    95,     3,    16,    24,    18,     7,   165,   166,    44,
       0,    24,    32,    48,    17,    94,    19,    96,    44,    32,
      16,    16,    18,    18,    44,    44,    27,    39,    24,    14,
      15,    44,    47,   191,   128,    38,    32,    38,    44,    40,
      41,     4,    43,   101,    26,    12,    13,    44,    30,   107,
     108,    33,    34,    35,   112,    44,    22,    23,    45,    25,
       5,    42,    44,    29,    26,    31,    44,    44,    30,    44,
      44,    33,    34,    35,    30,   169,    45,    33,    34,    35,
      36,     8,     9,    10,    11,    12,    13,    47,    46,    28,
      28,    28,    44,     5,    47,    21,     5,    46,    44,    47,
      44,    44,    20,    45,    45,   163,   100,    47,    32,    45,
      45,    45,    44,    46,    45,    45,   174,    45,    47,    32,
      45,    44,    32,    45,    44,    46,    37,    46,    36,    45,
      47,    46,    46,    12,   104,   182,    37,   169,    44,   150,
      47,    46,    46,    46,    46,    45,    44,    44,    38,    -1,
      46,    46,    44,    46,    45,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     0,     3,     7,    27,    38,    40,    41,
      43,    52,    53,    54,    79,    94,   102,   112,   115,   118,
      80,    95,   103,   113,   116,   119,    55,    53,    44,    48,
      82,    83,    44,    44,    39,    44,    44,    44,    47,     4,
      45,    17,    19,    38,   104,   114,     5,    42,    56,    83,
      81,    44,    98,   110,   107,   105,    44,   117,   120,    45,
      44,    99,    46,    28,    28,    28,    16,    18,    24,    32,
      44,    86,    89,    90,    91,    86,    44,    57,    58,     5,
      84,    47,    21,   111,   108,   106,    14,    15,     8,     9,
      10,    11,    12,    13,    92,    93,    93,     5,    59,    46,
      47,    85,    98,    96,    44,    44,    44,    87,    88,    90,
      91,    90,   121,    22,    23,    25,    29,    31,    60,    26,
      30,    33,    34,    35,    57,    69,    70,    86,    45,    97,
      60,    20,    86,    86,    86,    63,    61,    62,    30,    33,
      34,    35,    36,    64,    65,    74,    77,    71,    72,    73,
      47,    24,    32,    91,   100,   101,   109,    45,    45,    45,
      68,    66,    44,    45,    45,    45,    45,    69,    46,    47,
      44,    32,    32,    32,    45,    37,    36,    86,    44,    78,
      78,    78,    47,   100,    46,    46,    46,    86,    67,    75,
      46,    47,    46,    46,    46,    97,    46,    44,    45,    78,
      45,    44,    44,    46,    46,    37,    76,    44,    45,    44,
      46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    51,    50,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    55,    56,    54,    57,    57,    57,    59,
      58,    60,    61,    60,    62,    60,    60,    63,    60,    60,
      64,    64,    65,    65,    65,    66,    67,    65,    68,    65,
      69,    69,    71,    70,    72,    70,    73,    70,    74,    75,
      76,    70,    77,    70,    78,    78,    80,    81,    79,    82,
      82,    83,    83,    85,    84,    84,    87,    86,    88,    86,
      86,    89,    89,    89,    90,    90,    90,    91,    91,    92,
      92,    92,    92,    93,    93,    95,    96,    94,    97,    97,
      98,    99,    98,   100,   100,   100,   101,   101,   101,   103,
     102,   105,   106,   104,   107,   108,   109,   104,   110,   111,
     104,   113,   114,   112,   116,   117,   115,   119,   120,   121,
     118
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     3,     3,     0,
       4,     1,     0,     5,     0,     5,     1,     0,     5,     1,
       1,     0,     1,     1,     1,     0,     0,     8,     0,     5,
       1,     3,     0,     5,     0,     5,     0,     5,     0,     0,
       0,    14,     0,     5,     1,     3,     0,     0,     7,     1,
       1,     1,     3,     0,     3,     0,     0,     4,     0,     4,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     9,     3,     5,
       1,     0,     4,     1,     3,     0,     1,     1,     1,     0,
       4,     0,     0,     5,     0,     0,     0,     8,     0,     0,
       6,     0,     0,     5,     0,     0,     6,     0,     0,     0,
       9
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
                                                             {printf("Correct Statement\n");display_symbol_table(); exit(0);}
#line 1377 "project.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 67 "project.y"
                         {add('K', (yyvsp[0].lexeme));}
#line 1383 "project.tab.c"
    break;

  case 14: /* $@3: %empty  */
#line 67 "project.y"
                                            {add('R', (yyvsp[0].lexeme));}
#line 1389 "project.tab.c"
    break;

  case 19: /* $@4: %empty  */
#line 75 "project.y"
                {attribute_name = (yyvsp[0].lexeme);}
#line 1395 "project.tab.c"
    break;

  case 21: /* datatype: INTEGER  */
#line 78 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1401 "project.tab.c"
    break;

  case 22: /* $@5: %empty  */
#line 79 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1407 "project.tab.c"
    break;

  case 24: /* $@6: %empty  */
#line 80 "project.y"
                 {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1413 "project.tab.c"
    break;

  case 26: /* datatype: BOOLEAN  */
#line 81 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1419 "project.tab.c"
    break;

  case 27: /* $@7: %empty  */
#line 82 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1425 "project.tab.c"
    break;

  case 29: /* datatype: DATE  */
#line 83 "project.y"
                       {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1431 "project.tab.c"
    break;

  case 32: /* column_costraint: NOTNULL  */
#line 91 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1437 "project.tab.c"
    break;

  case 33: /* column_costraint: PRIMARYKEY  */
#line 92 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1443 "project.tab.c"
    break;

  case 34: /* column_costraint: UNIQUE  */
#line 93 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1449 "project.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 94 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1455 "project.tab.c"
    break;

  case 36: /* $@9: %empty  */
#line 94 "project.y"
                                                                        {add('K', (yyvsp[0].lexeme));}
#line 1461 "project.tab.c"
    break;

  case 38: /* $@10: %empty  */
#line 95 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1467 "project.tab.c"
    break;

  case 42: /* $@11: %empty  */
#line 103 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1473 "project.tab.c"
    break;

  case 44: /* $@12: %empty  */
#line 104 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1479 "project.tab.c"
    break;

  case 46: /* $@13: %empty  */
#line 105 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1485 "project.tab.c"
    break;

  case 48: /* $@14: %empty  */
#line 106 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1491 "project.tab.c"
    break;

  case 49: /* $@15: %empty  */
#line 106 "project.y"
                                                                           {add('K', (yyvsp[0].lexeme));}
#line 1497 "project.tab.c"
    break;

  case 50: /* $@16: %empty  */
#line 106 "project.y"
                                                                                                                {add('K', (yyvsp[0].lexeme));}
#line 1503 "project.tab.c"
    break;

  case 52: /* $@17: %empty  */
#line 107 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1509 "project.tab.c"
    break;

  case 56: /* $@18: %empty  */
#line 114 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1515 "project.tab.c"
    break;

  case 57: /* $@19: %empty  */
#line 114 "project.y"
                                                             {add('K', (yyvsp[0].lexeme));}
#line 1521 "project.tab.c"
    break;

  case 63: /* $@20: %empty  */
#line 126 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1527 "project.tab.c"
    break;

  case 66: /* $@21: %empty  */
#line 130 "project.y"
                               {add('K', (yyvsp[0].lexeme));}
#line 1533 "project.tab.c"
    break;

  case 68: /* $@22: %empty  */
#line 131 "project.y"
                                       {add('K', (yyvsp[0].lexeme));}
#line 1539 "project.tab.c"
    break;

  case 74: /* values: NUM  */
#line 139 "project.y"
           {add('C', (yyvsp[0].lexeme));}
#line 1545 "project.tab.c"
    break;

  case 75: /* values: STRINGVALUE  */
#line 140 "project.y"
                            {add('C', (yyvsp[0].lexeme));}
#line 1551 "project.tab.c"
    break;

  case 77: /* boolean_values: TRUE  */
#line 144 "project.y"
                     {add('C', (yyvsp[0].lexeme));}
#line 1557 "project.tab.c"
    break;

  case 78: /* boolean_values: FALSE  */
#line 145 "project.y"
                                  {add('C', (yyvsp[0].lexeme));}
#line 1563 "project.tab.c"
    break;

  case 79: /* comparison_op: LS  */
#line 148 "project.y"
                   {add('K', (yyvsp[0].lexeme));}
#line 1569 "project.tab.c"
    break;

  case 80: /* comparison_op: GR  */
#line 149 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1575 "project.tab.c"
    break;

  case 81: /* comparison_op: GE  */
#line 150 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1581 "project.tab.c"
    break;

  case 82: /* comparison_op: LE  */
#line 151 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1587 "project.tab.c"
    break;

  case 85: /* $@23: %empty  */
#line 158 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1593 "project.tab.c"
    break;

  case 86: /* $@24: %empty  */
#line 158 "project.y"
                                                                   {add('K', (yyvsp[0].lexeme));}
#line 1599 "project.tab.c"
    break;

  case 90: /* column_list: ID  */
#line 164 "project.y"
                 {
				column_attributes[countn] = (yyvsp[0].lexeme);
				countn=0;
				/*for(int i =0; i<=15; i++){
					if(column_attributes[i] == 0)
						column_attributes[i] = $1;
						break;
				}*/
			}
#line 1613 "project.tab.c"
    break;

  case 91: /* $@25: %empty  */
#line 173 "project.y"
                             {

				
				column_attributes[countn] = (yyvsp[0].lexeme);
				countn++;
			}
#line 1624 "project.tab.c"
    break;

  case 93: /* value_list: insert_values  */
#line 181 "project.y"
                           {
			   countn=0;
		   }
#line 1632 "project.tab.c"
    break;

  case 96: /* insert_values: NUM  */
#line 188 "project.y"
                    {
				if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "INT") != 0) && (strcmp(type_id, "FLOAT") != 0)
						&& (strcmp(type_id, "int") != 0) && (strcmp(type_id, "float") != 0)){
						printf("Type Error. Trying to assign %s to Int\n", type_id);
					}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
		   }
#line 1648 "project.tab.c"
    break;

  case 97: /* insert_values: STRINGVALUE  */
#line 199 "project.y"
                                 {
			    if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "VARCHAR") != 0)  && (strcmp(type_id, "varchar") != 0))
						printf("Type Error. Trying to assign %s to String", type_id);
					
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
		   }
#line 1663 "project.tab.c"
    break;

  case 98: /* insert_values: boolean_values  */
#line 209 "project.y"
                                    {
			    if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "BOOLEAN") != 0)  && (strcmp(type_id, "boolean") != 0))
						printf("Type Error. Trying to assign %s to Boolean\n", type_id);
					
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
		   }
#line 1678 "project.tab.c"
    break;

  case 99: /* $@26: %empty  */
#line 222 "project.y"
                             {add('K', (yyvsp[0].lexeme));}
#line 1684 "project.tab.c"
    break;

  case 101: /* $@27: %empty  */
#line 224 "project.y"
                       {add('K', (yyvsp[0].lexeme));}
#line 1690 "project.tab.c"
    break;

  case 102: /* $@28: %empty  */
#line 224 "project.y"
                                              {add('K', (yyvsp[0].lexeme));}
#line 1696 "project.tab.c"
    break;

  case 103: /* alter_table_spec: DROP $@27 COLUMN $@28 ID  */
#line 224 "project.y"
                                                                  {exit(0);}
#line 1702 "project.tab.c"
    break;

  case 104: /* $@29: %empty  */
#line 225 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1708 "project.tab.c"
    break;

  case 105: /* $@30: %empty  */
#line 225 "project.y"
                                                                {add('K', (yyvsp[0].lexeme));}
#line 1714 "project.tab.c"
    break;

  case 106: /* $@31: %empty  */
#line 225 "project.y"
                                                                                      {add('K', (yyvsp[0].lexeme));}
#line 1720 "project.tab.c"
    break;

  case 107: /* alter_table_spec: RENAME $@29 COLUMN $@30 ID TO $@31 ID  */
#line 225 "project.y"
                                                                                                         {exit(0);}
#line 1726 "project.tab.c"
    break;

  case 108: /* $@32: %empty  */
#line 226 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1732 "project.tab.c"
    break;

  case 109: /* $@33: %empty  */
#line 226 "project.y"
                                                               {add('K', (yyvsp[0].lexeme));}
#line 1738 "project.tab.c"
    break;

  case 110: /* alter_table_spec: ALTER $@32 COLUMN $@33 ID datatype  */
#line 226 "project.y"
                                                                                           {exit(0);}
#line 1744 "project.tab.c"
    break;

  case 111: /* $@34: %empty  */
#line 229 "project.y"
                 {add('K', (yyvsp[0].lexeme));}
#line 1750 "project.tab.c"
    break;

  case 112: /* $@35: %empty  */
#line 229 "project.y"
                                          {add('K', (yyvsp[0].lexeme));}
#line 1756 "project.tab.c"
    break;

  case 113: /* drop_stmt: DROP $@34 DATABASE $@35 ID  */
#line 229 "project.y"
                                                            {exit(0);}
#line 1762 "project.tab.c"
    break;

  case 114: /* $@36: %empty  */
#line 232 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1768 "project.tab.c"
    break;

  case 115: /* $@37: %empty  */
#line 232 "project.y"
                                                   {add('K', (yyvsp[0].lexeme));}
#line 1774 "project.tab.c"
    break;

  case 116: /* delete_stmt: DELETE_FROM $@36 ID WHERE $@37 condition  */
#line 232 "project.y"
                                                                             {exit(0);}
#line 1780 "project.tab.c"
    break;

  case 117: /* $@38: %empty  */
#line 235 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1786 "project.tab.c"
    break;

  case 118: /* $@39: %empty  */
#line 235 "project.y"
                                            {add('K', (yyvsp[0].lexeme));}
#line 1792 "project.tab.c"
    break;

  case 119: /* $@40: %empty  */
#line 235 "project.y"
                                                                            {add('K', (yyvsp[0].lexeme));}
#line 1798 "project.tab.c"
    break;

  case 120: /* update_stmt: UPDATE $@38 ID SET $@39 condition WHERE $@40 condition  */
#line 235 "project.y"
                                                                                                     {exit(0);}
#line 1804 "project.tab.c"
    break;


#line 1808 "project.tab.c"

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

#line 238 "project.y"


int main(void){
	yyparse();
	
	
}

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

void add(char c, char * token) {
  if((c == 'K' || c == 'C' )){
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

void insert_type(char * value_type) {
	strcpy(type, value_type);
}

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
