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
char* column_attributes[15];
int countn=0;
void add(char, char*);

char* get_type(char *);
void insert_type(char *);

void display_symbol_table();
char * attribute_name;
extern char* yytext;

#line 104 "project.tab.c"

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
  YYSYMBOL_66_9 = 66,                      /* $@9  */
  YYSYMBOL_table_constraint_def = 67,      /* table_constraint_def  */
  YYSYMBOL_table_constraint = 68,          /* table_constraint  */
  YYSYMBOL_69_10 = 69,                     /* $@10  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_72_13 = 72,                     /* $@13  */
  YYSYMBOL_73_14 = 73,                     /* $@14  */
  YYSYMBOL_74_15 = 74,                     /* $@15  */
  YYSYMBOL_75_16 = 75,                     /* $@16  */
  YYSYMBOL_parameters = 76,                /* parameters  */
  YYSYMBOL_select_stmt = 77,               /* select_stmt  */
  YYSYMBOL_78_17 = 78,                     /* $@17  */
  YYSYMBOL_79_18 = 79,                     /* $@18  */
  YYSYMBOL_select_all_or_list = 80,        /* select_all_or_list  */
  YYSYMBOL_select_list = 81,               /* select_list  */
  YYSYMBOL_where_clause = 82,              /* where_clause  */
  YYSYMBOL_83_19 = 83,                     /* $@19  */
  YYSYMBOL_condition = 84,                 /* condition  */
  YYSYMBOL_85_20 = 85,                     /* $@20  */
  YYSYMBOL_86_21 = 86,                     /* $@21  */
  YYSYMBOL_condition_step2 = 87,           /* condition_step2  */
  YYSYMBOL_boolean_values = 88,            /* boolean_values  */
  YYSYMBOL_comparison_op = 89,             /* comparison_op  */
  YYSYMBOL_boolean_comparison_op = 90,     /* boolean_comparison_op  */
  YYSYMBOL_insert_stmt = 91,               /* insert_stmt  */
  YYSYMBOL_92_22 = 92,                     /* $@22  */
  YYSYMBOL_93_23 = 93,                     /* $@23  */
  YYSYMBOL_insertion = 94,                 /* insertion  */
  YYSYMBOL_column_list = 95,               /* column_list  */
  YYSYMBOL_96_24 = 96,                     /* $@24  */
  YYSYMBOL_value_list = 97,                /* value_list  */
  YYSYMBOL_values = 98,                    /* values  */
  YYSYMBOL_alter_table_stmt = 99,          /* alter_table_stmt  */
  YYSYMBOL_100_25 = 100,                   /* $@25  */
  YYSYMBOL_alter_table_spec = 101,         /* alter_table_spec  */
  YYSYMBOL_102_26 = 102,                   /* $@26  */
  YYSYMBOL_103_27 = 103,                   /* $@27  */
  YYSYMBOL_104_28 = 104,                   /* $@28  */
  YYSYMBOL_105_29 = 105,                   /* $@29  */
  YYSYMBOL_106_30 = 106,                   /* $@30  */
  YYSYMBOL_107_31 = 107,                   /* $@31  */
  YYSYMBOL_108_32 = 108,                   /* $@32  */
  YYSYMBOL_drop_stmt = 109,                /* drop_stmt  */
  YYSYMBOL_110_33 = 110,                   /* $@33  */
  YYSYMBOL_111_34 = 111,                   /* $@34  */
  YYSYMBOL_delete_stmt = 112,              /* delete_stmt  */
  YYSYMBOL_113_35 = 113,                   /* $@35  */
  YYSYMBOL_114_36 = 114,                   /* $@36  */
  YYSYMBOL_update_stmt = 115,              /* update_stmt  */
  YYSYMBOL_116_37 = 116,                   /* $@37  */
  YYSYMBOL_117_38 = 117,                   /* $@38  */
  YYSYMBOL_118_39 = 118                    /* $@39  */
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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

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
       0,    51,    51,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    65,    65,    65,    68,    69,    70,    73,    73,
      76,    77,    77,    78,    78,    79,    80,    80,    81,    84,
      85,    89,    90,    91,    92,    92,    92,    93,    93,    96,
      97,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   108,   109,   112,   112,   112,   116,   117,
     120,   121,   124,   124,   125,   128,   128,   129,   129,   130,
     133,   134,   135,   137,   138,   141,   142,   143,   144,   145,
     146,   149,   150,   153,   153,   153,   155,   156,   159,   168,
     168,   175,   181,   182,   190,   200,   209,   221,   221,   223,
     223,   223,   224,   224,   224,   224,   225,   225,   225,   228,
     228,   228,   231,   231,   231,   234,   234,   234,   234
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
  "'*'", "$accept", "scope", "line", "expr", "$@1", "$@2", "table_def",
  "column_def", "$@3", "datatype", "$@4", "$@5", "$@6",
  "column_costraint_def", "column_costraint", "$@7", "$@8", "$@9",
  "table_constraint_def", "table_constraint", "$@10", "$@11", "$@12",
  "$@13", "$@14", "$@15", "$@16", "parameters", "select_stmt", "$@17",
  "$@18", "select_all_or_list", "select_list", "where_clause", "$@19",
  "condition", "$@20", "$@21", "condition_step2", "boolean_values",
  "comparison_op", "boolean_comparison_op", "insert_stmt", "$@22", "$@23",
  "insertion", "column_list", "$@24", "value_list", "values",
  "alter_table_stmt", "$@25", "alter_table_spec", "$@26", "$@27", "$@28",
  "$@29", "$@30", "$@31", "$@32", "drop_stmt", "$@33", "$@34",
  "delete_stmt", "$@35", "$@36", "update_stmt", "$@37", "$@38", "$@39", YY_NULLPTR
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

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,  -159,  -159,  -159,  -159,  -159,  -159,  -159,    10,  -159,
      15,  -159,  -159,  -159,  -159,  -159,  -159,   -18,   -42,     4,
      13,    28,    29,    30,  -159,  -159,  -159,    -8,  -159,    50,
    -159,    31,    -5,  -159,    70,    35,  -159,    34,  -159,    37,
    -159,  -159,  -159,  -159,    38,  -159,  -159,    39,  -159,    41,
      32,    40,    59,    60,    61,  -159,    -3,    -3,    46,    86,
      45,    72,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
      44,    58,    56,    89,  -159,    49,    51,  -159,  -159,    37,
    -159,    52,    53,    55,  -159,  -159,  -159,  -159,    -3,  -159,
    -159,  -159,  -159,  -159,  -159,    -3,     1,  -159,    24,  -159,
     -10,    -3,  -159,    57,    24,    80,  -159,    -3,    -3,  -159,
    -159,  -159,  -159,    -3,  -159,  -159,    62,  -159,  -159,    27,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,    54,  -159,    -3,
    -159,  -159,  -159,  -159,  -159,  -159,    63,    64,    65,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,    67,    68,    69,    71,
      73,     2,    66,    74,    75,    85,    88,    90,    78,    87,
      91,    -3,    81,    81,    81,  -159,    79,    -3,  -159,    82,
      83,    84,    -3,  -159,  -159,    92,    93,    95,    96,    97,
      57,  -159,  -159,  -159,  -159,    98,   101,    94,  -159,    81,
    -159,  -159,  -159,  -159,  -159,   102,   104,  -159,   105,   100,
     106,    99,  -159,  -159,   107,   108,   110,   109,  -159
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    55,    83,    97,   109,   112,   115,    12,     0,     2,
       3,     6,     7,    10,     8,     9,    11,     0,     0,     0,
       0,     0,     0,     0,     1,     4,     5,    60,    58,     0,
      59,     0,     0,   110,     0,     0,    13,     0,    56,     0,
     106,   102,    99,    98,     0,   113,   116,     0,    61,     0,
      88,     0,     0,     0,     0,   111,     0,     0,     0,    64,
       0,     0,   107,   103,   100,    74,    73,    95,    94,   114,
      69,    96,     0,     0,    18,     0,    15,    62,    57,     0,
      84,     0,     0,     0,    65,    67,    81,    82,     0,    75,
      76,    77,    78,    79,    80,     0,     0,   117,     0,    14,
       0,     0,    90,     0,     0,     0,   101,     0,     0,    96,
      72,    70,    71,     0,    25,    26,    20,    23,    28,    30,
      47,    51,    41,    43,    45,    17,    16,    39,    63,    93,
      85,   108,   104,    66,    68,   118,     0,     0,     0,    37,
      31,    33,    32,    34,    19,    29,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    86,    93,   105,     0,
       0,     0,     0,    35,    48,     0,    53,     0,     0,     0,
       0,    92,    27,    22,    24,     0,     0,     0,    52,     0,
      42,    44,    46,    87,    38,     0,     0,    54,     0,     0,
       0,     0,    36,    49,     0,     0,     0,     0,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,  -159,  -159,     3,  -159,  -159,    33,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,   -46,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -158,   121,  -159,
    -159,  -159,   113,  -159,  -159,   -57,  -159,  -159,  -159,   -87,
    -159,   103,   122,  -159,  -159,   -74,    77,  -159,   -34,   -84,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,    10,    23,    47,    75,    76,    98,   119,
     137,   138,   136,   144,   145,   159,   186,   158,   126,   127,
     148,   149,   150,   146,   187,   204,   147,   177,    11,    17,
      49,    29,    30,    78,   101,    69,   107,   108,    70,    71,
      95,    88,    12,    18,   103,   130,    51,    60,   152,    72,
      13,    19,    43,    54,    83,    53,    82,   154,    52,    81,
      14,    20,    44,    15,    21,    56,    16,    22,    57,   113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   109,    31,     1,   110,   178,   179,     2,   109,   112,
      24,   111,    40,    65,    41,    66,   120,    65,     1,    66,
     121,    67,     2,   122,   123,   124,    27,     3,   120,    68,
      28,   197,   121,    42,    74,   122,   123,   124,     4,    37,
       5,     6,   109,     7,   128,   153,   114,   115,    32,   116,
     133,   134,    33,   117,    38,   118,   135,   139,    84,    85,
     140,   141,   142,   143,    89,    90,    91,    92,    93,    94,
      86,    87,    34,    35,    36,    45,    39,    46,    27,   -89,
     109,    50,    55,   153,    58,    59,    61,    62,    63,    64,
      74,    77,    79,    80,    97,    99,   104,   105,   100,   106,
     132,   151,   129,   125,   175,   165,   193,   -21,   155,   156,
     157,   160,   166,   161,   162,   185,   163,   169,   164,   168,
     170,   167,   171,   172,   173,   176,   180,   174,   182,   183,
     184,    25,    26,   181,     0,     0,   203,   131,   188,   196,
     189,   190,   191,   192,   194,   195,   201,   198,   199,   200,
      48,   205,   202,   206,   207,   208,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      57,    88,    44,     3,    88,   163,   164,     7,    95,    96,
       0,    95,    17,    16,    19,    18,    26,    16,     3,    18,
      30,    24,     7,    33,    34,    35,    44,    27,    26,    32,
      48,   189,    30,    38,    44,    33,    34,    35,    38,    47,
      40,    41,   129,    43,   101,   129,    22,    23,    44,    25,
     107,   108,    39,    29,     4,    31,   113,    30,    14,    15,
      33,    34,    35,    36,     8,     9,    10,    11,    12,    13,
      12,    13,    44,    44,    44,     5,    45,    42,    44,    47,
     167,    44,    44,   167,    45,    44,    46,    28,    28,    28,
      44,     5,    47,    21,     5,    46,    44,    44,    47,    44,
      20,    47,    45,   100,   161,   151,   180,    45,    45,    45,
      45,    44,    46,    45,    45,   172,    45,    32,    45,    44,
      32,    47,    32,    45,    37,    44,    47,    36,    46,    46,
      46,    10,    10,   167,    -1,    -1,    37,   104,    46,    45,
      47,    46,    46,    46,    46,    44,    46,    45,    44,    44,
      37,    44,    46,    45,    44,    46,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,    27,    38,    40,    41,    43,    50,    51,
      52,    77,    91,    99,   109,   112,   115,    78,    92,   100,
     110,   113,   116,    53,     0,    77,    91,    44,    48,    80,
      81,    44,    44,    39,    44,    44,    44,    47,     4,    45,
      17,    19,    38,   101,   111,     5,    42,    54,    81,    79,
      44,    95,   107,   104,   102,    44,   114,   117,    45,    44,
      96,    46,    28,    28,    28,    16,    18,    24,    32,    84,
      87,    88,    98,    84,    44,    55,    56,     5,    82,    47,
      21,   108,   105,   103,    14,    15,    12,    13,    90,     8,
       9,    10,    11,    12,    13,    89,    90,     5,    57,    46,
      47,    83,    95,    93,    44,    44,    44,    85,    86,    88,
      98,    98,    88,   118,    22,    23,    25,    29,    31,    58,
      26,    30,    33,    34,    35,    55,    67,    68,    84,    45,
      94,    58,    20,    84,    84,    84,    61,    59,    60,    30,
      33,    34,    35,    36,    62,    63,    72,    75,    69,    70,
      71,    47,    97,    98,   106,    45,    45,    45,    66,    64,
      44,    45,    45,    45,    45,    67,    46,    47,    44,    32,
      32,    32,    45,    37,    36,    84,    44,    76,    76,    76,
      47,    97,    46,    46,    46,    84,    65,    73,    46,    47,
      46,    46,    46,    94,    46,    44,    45,    76,    45,    44,
      44,    46,    46,    37,    74,    44,    45,    44,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    53,    54,    52,    55,    55,    55,    57,    56,
      58,    59,    58,    60,    58,    58,    61,    58,    58,    62,
      62,    63,    63,    63,    64,    65,    63,    66,    63,    67,
      67,    69,    68,    70,    68,    71,    68,    72,    73,    74,
      68,    75,    68,    76,    76,    78,    79,    77,    80,    80,
      81,    81,    83,    82,    82,    85,    84,    86,    84,    84,
      87,    87,    87,    88,    88,    89,    89,    89,    89,    89,
      89,    90,    90,    92,    93,    91,    94,    94,    95,    96,
      95,    97,    97,    97,    98,    98,    98,   100,    99,   102,
     103,   101,   104,   105,   106,   101,   107,   108,   101,   110,
     111,   109,   113,   114,   112,   116,   117,   118,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     0,     0,     7,     1,     3,     3,     0,     4,
       1,     0,     5,     0,     5,     1,     0,     5,     1,     1,
       0,     1,     1,     1,     0,     0,     8,     0,     5,     1,
       3,     0,     5,     0,     5,     0,     5,     0,     0,     0,
      14,     0,     5,     1,     3,     0,     0,     7,     1,     1,
       1,     3,     0,     3,     0,     0,     4,     0,     4,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     9,     3,     5,     1,     0,
       4,     1,     3,     0,     1,     1,     1,     0,     4,     0,
       0,     5,     0,     0,     0,     8,     0,     0,     6,     0,
       0,     5,     0,     0,     6,     0,     0,     0,     9
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
  case 2: /* scope: line  */
#line 51 "project.y"
            {display_symbol_table(); exit(1);}
#line 1355 "project.tab.c"
    break;

  case 12: /* $@1: %empty  */
#line 65 "project.y"
                  {add('K', (yyvsp[0].lexeme));}
#line 1361 "project.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 65 "project.y"
                                     {add('R', (yyvsp[0].lexeme));}
#line 1367 "project.tab.c"
    break;

  case 14: /* expr: CREATETABLE $@1 ID $@2 '(' table_def ')'  */
#line 65 "project.y"
                                                                        {printf("correct");}
#line 1373 "project.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 73 "project.y"
                {attribute_name = (yyvsp[0].lexeme);}
#line 1379 "project.tab.c"
    break;

  case 20: /* datatype: INTEGER  */
#line 76 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1385 "project.tab.c"
    break;

  case 21: /* $@4: %empty  */
#line 77 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1391 "project.tab.c"
    break;

  case 23: /* $@5: %empty  */
#line 78 "project.y"
                 {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1397 "project.tab.c"
    break;

  case 25: /* datatype: BOOLEAN  */
#line 79 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1403 "project.tab.c"
    break;

  case 26: /* $@6: %empty  */
#line 80 "project.y"
                   {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1409 "project.tab.c"
    break;

  case 28: /* datatype: DATE  */
#line 81 "project.y"
                       {insert_type((yyvsp[0].lexeme)); add('A', attribute_name);}
#line 1415 "project.tab.c"
    break;

  case 31: /* column_costraint: NOTNULL  */
#line 89 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1421 "project.tab.c"
    break;

  case 32: /* column_costraint: PRIMARYKEY  */
#line 90 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1427 "project.tab.c"
    break;

  case 33: /* column_costraint: UNIQUE  */
#line 91 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1433 "project.tab.c"
    break;

  case 34: /* $@7: %empty  */
#line 92 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1439 "project.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 92 "project.y"
                                                                        {add('K', (yyvsp[0].lexeme));}
#line 1445 "project.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 93 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1451 "project.tab.c"
    break;

  case 41: /* $@10: %empty  */
#line 101 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1457 "project.tab.c"
    break;

  case 43: /* $@11: %empty  */
#line 102 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1463 "project.tab.c"
    break;

  case 45: /* $@12: %empty  */
#line 103 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1469 "project.tab.c"
    break;

  case 47: /* $@13: %empty  */
#line 104 "project.y"
                                             {add('K', (yyvsp[0].lexeme));}
#line 1475 "project.tab.c"
    break;

  case 48: /* $@14: %empty  */
#line 104 "project.y"
                                                                           {add('K', (yyvsp[0].lexeme));}
#line 1481 "project.tab.c"
    break;

  case 49: /* $@15: %empty  */
#line 104 "project.y"
                                                                                                                {add('K', (yyvsp[0].lexeme));}
#line 1487 "project.tab.c"
    break;

  case 51: /* $@16: %empty  */
#line 105 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1493 "project.tab.c"
    break;

  case 55: /* $@17: %empty  */
#line 112 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1499 "project.tab.c"
    break;

  case 56: /* $@18: %empty  */
#line 112 "project.y"
                                                             {add('K', (yyvsp[0].lexeme));}
#line 1505 "project.tab.c"
    break;

  case 62: /* $@19: %empty  */
#line 124 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1511 "project.tab.c"
    break;

  case 65: /* $@20: %empty  */
#line 128 "project.y"
                               {add('K', (yyvsp[0].lexeme));}
#line 1517 "project.tab.c"
    break;

  case 67: /* $@21: %empty  */
#line 129 "project.y"
                                       {add('K', (yyvsp[0].lexeme));}
#line 1523 "project.tab.c"
    break;

  case 73: /* boolean_values: TRUE  */
#line 137 "project.y"
                     {add('C', (yyvsp[0].lexeme));}
#line 1529 "project.tab.c"
    break;

  case 74: /* boolean_values: FALSE  */
#line 138 "project.y"
                                  {add('C', (yyvsp[0].lexeme));}
#line 1535 "project.tab.c"
    break;

  case 75: /* comparison_op: LS  */
#line 141 "project.y"
                   {add('K', (yyvsp[0].lexeme));}
#line 1541 "project.tab.c"
    break;

  case 76: /* comparison_op: GR  */
#line 142 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1547 "project.tab.c"
    break;

  case 77: /* comparison_op: GE  */
#line 143 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1553 "project.tab.c"
    break;

  case 78: /* comparison_op: LE  */
#line 144 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1559 "project.tab.c"
    break;

  case 79: /* comparison_op: EQ  */
#line 145 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1565 "project.tab.c"
    break;

  case 80: /* comparison_op: NE  */
#line 146 "project.y"
                              {add('K', (yyvsp[0].lexeme));}
#line 1571 "project.tab.c"
    break;

  case 83: /* $@22: %empty  */
#line 153 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1577 "project.tab.c"
    break;

  case 84: /* $@23: %empty  */
#line 153 "project.y"
                                                                   {add('K', (yyvsp[0].lexeme));}
#line 1583 "project.tab.c"
    break;

  case 88: /* column_list: ID  */
#line 159 "project.y"
                 {
				
				column_attributes[countn] = (yyvsp[0].lexeme);
				/*for(int i =0; i<=15; i++){
					if(column_attributes[i] == 0)
						column_attributes[i] = $1;
						break;
				}*/
			}
#line 1597 "project.tab.c"
    break;

  case 89: /* $@24: %empty  */
#line 168 "project.y"
                             {
				printf("COUNTN -----> %d<------", countn);
				countn++;
				column_attributes[countn] = (yyvsp[0].lexeme);
			}
#line 1607 "project.tab.c"
    break;

  case 91: /* value_list: values  */
#line 175 "project.y"
                    {
			   countn=0;
			   for(int i =0; i<=15; i++){
						column_attributes[i] = 0;
				}
		   }
#line 1618 "project.tab.c"
    break;

  case 93: /* value_list: %empty  */
#line 182 "project.y"
                                      {
			   countn=0;
			   for(int i =0; i<=15; i++){
						column_attributes[i] = 0;
				}
		   }
#line 1629 "project.tab.c"
    break;

  case 94: /* values: NUM  */
#line 190 "project.y"
             {
				char* type_id = get_type(column_attributes[countn]);
			    if((strcmp(type_id, "INT") != 0) && (strcmp(type_id, "FLOAT") != 0)
					&& (strcmp(type_id, "int") != 0) && (strcmp(type_id, "float") != 0)){
					printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR");
				}
				else{
					printf("CORREEEEEEECT");
				}
		   }
#line 1644 "project.tab.c"
    break;

  case 95: /* values: STRINGVALUE  */
#line 200 "project.y"
                                 {
				char* type_id = get_type(column_attributes[countn]);
				printf("TYPE_ID %s, $1 %s", type_id, "VARCHAR");
			    if((strcmp(type_id, "VARCHAR") != 0)  && (strcmp(type_id, "varchar") != 0))
					printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR");
				else{
					printf("CORREEEEEEECT");
				}
		   }
#line 1658 "project.tab.c"
    break;

  case 96: /* values: boolean_values  */
#line 209 "project.y"
                                    {
				char* type_id = get_type(column_attributes[countn]);
				printf("TYPE_ID %s, $1 %s", type_id, "BOOLEAN");
			    if((strcmp(type_id, "BOOLEAN") != 0)  && (strcmp(type_id, "boolean") != 0))
					printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR");
				else{
					printf("CORREEEEEEECT");
				} 
		   }
#line 1672 "project.tab.c"
    break;

  case 97: /* $@25: %empty  */
#line 221 "project.y"
                             {add('K', (yyvsp[0].lexeme));}
#line 1678 "project.tab.c"
    break;

  case 99: /* $@26: %empty  */
#line 223 "project.y"
                       {add('K', (yyvsp[0].lexeme));}
#line 1684 "project.tab.c"
    break;

  case 100: /* $@27: %empty  */
#line 223 "project.y"
                                              {add('K', (yyvsp[0].lexeme));}
#line 1690 "project.tab.c"
    break;

  case 101: /* alter_table_spec: DROP $@26 COLUMN $@27 ID  */
#line 223 "project.y"
                                                                 {printf("correct"); exit(0);}
#line 1696 "project.tab.c"
    break;

  case 102: /* $@28: %empty  */
#line 224 "project.y"
                                         {add('K', (yyvsp[0].lexeme));}
#line 1702 "project.tab.c"
    break;

  case 103: /* $@29: %empty  */
#line 224 "project.y"
                                                                {add('K', (yyvsp[0].lexeme));}
#line 1708 "project.tab.c"
    break;

  case 104: /* $@30: %empty  */
#line 224 "project.y"
                                                                                      {add('K', (yyvsp[0].lexeme));}
#line 1714 "project.tab.c"
    break;

  case 105: /* alter_table_spec: RENAME $@28 COLUMN $@29 ID TO $@30 ID  */
#line 224 "project.y"
                                                                                                        {printf("correct"); exit(0);}
#line 1720 "project.tab.c"
    break;

  case 106: /* $@31: %empty  */
#line 225 "project.y"
                                        {add('K', (yyvsp[0].lexeme));}
#line 1726 "project.tab.c"
    break;

  case 107: /* $@32: %empty  */
#line 225 "project.y"
                                                               {add('K', (yyvsp[0].lexeme));}
#line 1732 "project.tab.c"
    break;

  case 108: /* alter_table_spec: ALTER $@31 COLUMN $@32 ID datatype  */
#line 225 "project.y"
                                                                                           {printf("correct"); exit(0);}
#line 1738 "project.tab.c"
    break;

  case 109: /* $@33: %empty  */
#line 228 "project.y"
                 {add('K', (yyvsp[0].lexeme));}
#line 1744 "project.tab.c"
    break;

  case 110: /* $@34: %empty  */
#line 228 "project.y"
                                          {add('K', (yyvsp[0].lexeme));}
#line 1750 "project.tab.c"
    break;

  case 111: /* drop_stmt: DROP $@33 DATABASE $@34 ID  */
#line 228 "project.y"
                                                            {printf("correct"); exit(0);}
#line 1756 "project.tab.c"
    break;

  case 112: /* $@35: %empty  */
#line 231 "project.y"
                          {add('K', (yyvsp[0].lexeme));}
#line 1762 "project.tab.c"
    break;

  case 113: /* $@36: %empty  */
#line 231 "project.y"
                                                   {add('K', (yyvsp[0].lexeme));}
#line 1768 "project.tab.c"
    break;

  case 114: /* delete_stmt: DELETE_FROM $@35 ID WHERE $@36 condition  */
#line 231 "project.y"
                                                                             {printf("correct"); exit(0);}
#line 1774 "project.tab.c"
    break;

  case 115: /* $@37: %empty  */
#line 234 "project.y"
                     {add('K', (yyvsp[0].lexeme));}
#line 1780 "project.tab.c"
    break;

  case 116: /* $@38: %empty  */
#line 234 "project.y"
                                            {add('K', (yyvsp[0].lexeme));}
#line 1786 "project.tab.c"
    break;

  case 117: /* $@39: %empty  */
#line 234 "project.y"
                                                                            {add('K', (yyvsp[0].lexeme));}
#line 1792 "project.tab.c"
    break;

  case 118: /* update_stmt: UPDATE $@37 ID SET $@38 condition WHERE $@39 condition  */
#line 234 "project.y"
                                                                                                     {printf("correct"); exit(0);}
#line 1798 "project.tab.c"
    break;


#line 1802 "project.tab.c"

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

#line 237 "project.y"


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

	printf("\n\n");
}
void add(char c, char * token) {
  //q=search(token);
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
