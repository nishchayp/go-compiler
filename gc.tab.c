/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "gc.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern FILE *yyin;

#line 74 "gc.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "gc.tab.h".  */
#ifndef YY_YY_GC_TAB_H_INCLUDED
# define YY_YY_GC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    DEFAULT = 259,
    FUNC = 260,
    INTERFACE = 261,
    SELECT = 262,
    CASE = 263,
    DEFER = 264,
    GO = 265,
    MAP = 266,
    STRUCT = 267,
    CHAN = 268,
    ELSE = 269,
    GOTO = 270,
    PACKAGE = 271,
    SWITCH = 272,
    CONST = 273,
    FALLTHROUGH = 274,
    IF = 275,
    RANGE = 276,
    TYPE = 277,
    CONTINUE = 278,
    FOR = 279,
    IMPORT = 280,
    RETURN = 281,
    VAR = 282,
    SC = 283,
    COL = 284,
    COM = 285,
    DOTS = 286,
    DOT = 287,
    LRB = 288,
    RRB = 289,
    LSB = 290,
    RSB = 291,
    LCB = 292,
    RCB = 293,
    EQ = 294,
    ASSIGN = 295,
    STAR = 296,
    PIPE = 297,
    AND = 298,
    INC = 299,
    DEC = 300,
    LOG_AND = 301,
    LOG_OR = 302,
    REL_OP = 303,
    PAR_ADD_OP = 304,
    PAR_MUL_OP = 305,
    PAR_UNARY_OP = 306,
    INT_LIT = 307,
    IDENTIFIER = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 179 "gc.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    34,    36,    38,    39,    46,    48,    49,
      56,    57,    58,    60,    62,    63,    64,    66,    68,    70,
      72,    74,    76,    78,    79,    81,    82,    84,    85,    87,
      88,    90,    91,    92,    93,   100,   101,   103,   104,   106,
     107,   108,   116,   117,   119,   120,   123,   124,   125,   127,
     128,   130,   131,   138,   139,   141,   142,   143,   150,   157,
     159,   161,   162,   169,   170,   172,   173,   175,   176,   177,
     178,   179,   181,   182,   184,   185,   186,   188,   189,   190,
     191,   194,   195,   196,   197,   198,   200,   202,   204,   210,
     211,   212,   214,   222,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   250,   251,
     252,   253,   254,   257,   260,   263,   266,   267,   270,   271,
     274,   275,   278,   280,   283,   284,   285,   286,   287,   288,
     291,   292,   295,   296,   297,   298,   301,   302,   305,   306,
     309,   310,   313,   314,   317,   318,   321,   322,   324,   325,
     328,   329,   330,   331,   334,   335,   338,   340,   341,   344,
     345,   348,   349,   350,   353,   356,   359,   362,   363,   366,
     369,   370,   371,   393
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "DEFAULT", "FUNC", "INTERFACE",
  "SELECT", "CASE", "DEFER", "GO", "MAP", "STRUCT", "CHAN", "ELSE", "GOTO",
  "PACKAGE", "SWITCH", "CONST", "FALLTHROUGH", "IF", "RANGE", "TYPE",
  "CONTINUE", "FOR", "IMPORT", "RETURN", "VAR", "SC", "COL", "COM", "DOTS",
  "DOT", "LRB", "RRB", "LSB", "RSB", "LCB", "RCB", "EQ", "ASSIGN", "STAR",
  "PIPE", "AND", "INC", "DEC", "LOG_AND", "LOG_OR", "REL_OP", "PAR_ADD_OP",
  "PAR_MUL_OP", "PAR_UNARY_OP", "INT_LIT", "IDENTIFIER", "$accept",
  "SourceFile", "PackageClause", "PackageName", "ImportDecl", "Block",
  "StatementList", "Type", "TypeName", "TypeLit", "ArrayType",
  "ArrayLength", "ElementType", "PointerType", "BaseType", "FunctionType",
  "Signature", "Result", "Parameters", "ParameterList", "ParameterDecl",
  "VarDecl", "RepeatVarSpec", "VarSpec", "ConstDecl", "RepeatConstSpec",
  "ConstSpec", "IdentifierList", "ExpressionList", "Declaration",
  "TopLevelDecl", "ShortVarDecl", "FuncDecl", "FunctionName",
  "FunctionBody", "Expression", "UnaryExpr", "binary_op", "add_op",
  "mul_op", "unary_op", "PrimaryExpr", "Selector", "Index", "TypeAsertion",
  "Operand", "Literal", "OperandName", "Statement", "SimpleStmt",
  "LabeledStmt", "Label", "GoStmt", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "FallthroughStmt", "IfStmt", "SwitchStmt",
  "ExprSwitchStmt", "ExprCaseClause", "ExprSwitchCase", "TypeSwitchStmt",
  "TypeSwitchGuard", "TypeCaseClause", "TypeSwitchCase", "TypeList",
  "ForStmt", "Condition", "ForClause", "InitStmt", "PostStmt",
  "RangeClause", "DeferStmt", "EmptyStmt", "ExpressionStmt", "IncDecStmt",
  "Assignment", "assign_op", "BasicLit", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF -244

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-244)))

#define YYTABLE_NINF -167

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,   -15,    44,    40,  -244,  -244,  -244,  -244,   161,   -15,
    -244,  -244,    31,    72,    20,    49,  -244,  -244,  -244,  -244,
    -244,  -244,    93,    74,  -244,  -244,    13,    74,  -244,    81,
      57,    39,   112,   110,    93,    98,   126,   412,   412,   126,
    -244,   117,  -244,  -244,  -244,  -244,  -244,   144,   412,   121,
     126,  -244,    55,  -244,   214,  -244,   102,  -244,  -244,  -244,
      57,  -244,  -244,  -244,  -244,  -244,  -244,   139,   128,   412,
    -244,  -244,  -244,  -244,  -244,  -244,   138,   510,  -244,   412,
     239,  -244,  -244,  -244,  -244,  -244,   173,   510,  -244,  -244,
     412,  -244,   173,   412,  -244,   113,  -244,   126,  -244,   181,
     139,   -11,  -244,  -244,   457,   126,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,   412,  -244,  -244,  -244,    86,   412,
    -244,  -244,  -244,   412,   173,   116,   173,  -244,  -244,   156,
     412,   412,   156,   398,  -244,   427,   156,   284,   412,  -244,
      83,  -244,   157,   432,  -244,  -244,   310,   183,  -244,  -244,
     186,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   193,  -244,
    -244,  -244,   510,   126,   472,   510,  -244,   199,  -244,  -244,
     510,   510,  -244,  -244,   162,   333,   247,   217,   209,   180,
     356,   225,  -244,   412,  -244,   196,   447,   379,  -244,    39,
      39,   234,    39,   173,   412,  -244,   227,   228,   412,  -244,
    -244,  -244,   277,  -244,   238,  -244,  -244,    18,   130,  -244,
      88,   405,  -244,   263,   412,   510,   291,   257,  -244,  -244,
     412,  -244,   173,  -244,  -244,   173,  -244,  -244,  -244,   412,
    -244,   260,   258,    23,   190,  -244,   251,   486,   261,    37,
      30,   500,   412,   412,   510,   271,   173,  -244,    96,  -244,
     268,    43,  -244,  -244,  -244,   126,  -244,   278,  -244,  -244,
     292,   510,   510,   427,   232,   235,  -244,  -244,   120,   132,
    -244,   281,  -244,    30,  -244,  -244,   274,  -244,  -244,   126,
     232,  -244,  -244,  -244,  -244
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     3,     1,     6,     0,     0,
      57,     5,     0,     0,     0,     0,     2,    54,    53,    55,
      56,    60,     0,     0,    50,    42,    48,     0,    35,     0,
       0,    62,    24,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    10,    11,    14,    15,    16,     0,     0,    40,
       0,    28,    50,    34,     0,    30,     0,     9,    61,    59,
       0,    26,    23,    25,    45,    22,    49,     0,     0,     0,
      79,    80,    78,    77,   173,    93,     0,    18,    63,     0,
      65,    82,    81,    89,    90,    92,    47,    52,    21,    20,
       0,    38,    41,     0,    33,     0,    27,     0,    32,   165,
      34,     0,    12,    86,     0,     0,    75,    73,    76,    68,
      67,    69,    72,    74,     0,    70,    71,    66,     0,     0,
      83,    84,    85,     0,    46,     0,    39,    29,    31,   119,
       0,     0,     0,   165,   123,   165,   121,   158,   117,     7,
      93,   103,     0,     0,    94,   112,    52,     0,    96,    95,
       0,    97,    98,    99,   100,   101,   102,   104,   105,   130,
     131,   106,   107,   108,   109,   110,   111,    43,     0,    91,
      19,    17,    64,     0,     0,    51,    36,     0,   114,   118,
     164,   115,   122,   137,    93,    52,    65,     0,     0,    93,
      52,     0,   120,     0,   153,     0,     0,    52,   157,     0,
       0,     0,     0,   116,     0,   172,     0,     0,     0,   167,
     168,     8,   165,    44,     0,    87,    37,     0,     0,   137,
       0,     0,   145,   129,     0,   163,     0,   172,   150,   151,
     155,   152,    58,   170,   171,   169,   113,    88,   139,     0,
     135,     0,     0,     0,     0,   137,    93,     0,     0,     0,
       0,     0,     0,     0,   154,     0,   138,     9,     0,   134,
       0,     0,   137,   145,   147,     0,   141,     0,   128,   127,
     126,   162,   161,   160,   136,     0,   143,   133,     0,     0,
     149,   146,     9,     0,   159,   156,     0,   132,   140,     0,
     144,   125,   124,   142,   148
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,   304,  -244,   -22,  -218,   -26,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,   285,  -244,   283,  -244,
     236,  -244,  -244,   -16,  -244,  -244,     2,     5,   -33,   327,
    -244,  -244,  -244,  -244,  -244,   -36,   243,  -244,  -126,  -122,
    -244,  -125,   -78,  -244,  -244,  -244,  -244,  -244,   129,  -121,
    -244,   -52,  -244,  -244,  -244,  -244,  -244,  -244,  -243,  -244,
    -244,  -190,  -244,  -244,   124,    85,  -244,  -244,  -244,   119,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,   141,    99,   214,    42,    43,
      44,    76,   171,    45,    89,    46,    31,    62,    32,    54,
      55,    17,   125,    28,    18,   101,    25,   142,   143,   144,
      12,   145,    20,    22,    59,    87,    78,   114,   115,   116,
      79,    80,    81,   121,   122,    82,    83,    84,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   217,   241,   160,   188,   249,   267,   281,   161,   199,
     200,   201,   285,   202,   162,   163,   164,   165,   166,   208,
      85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    77,   120,    49,    53,    86,    61,   269,   186,    58,
      67,    47,   187,    88,   191,    92,   198,   206,    34,    26,
      29,   207,   238,   167,    94,    33,   239,   238,    26,   243,
      98,   239,    29,   104,   100,    56,    13,     1,     4,   274,
     292,   264,    24,    35,     6,   265,    36,   238,    37,    14,
     135,   239,    38,    23,    39,   261,   240,   124,    15,    16,
     126,   259,    34,   146,   290,    56,    40,    57,     7,    53,
     206,   128,   278,    24,   207,   266,    57,   179,   172,   170,
     182,   277,    27,   174,   192,   -13,    34,   175,    50,   -13,
      36,    51,    37,   242,   180,   181,   186,   185,    39,   190,
      56,   197,    24,   168,   196,   203,    26,    34,   120,   177,
      52,    35,  -114,   -50,    36,   194,    37,    34,    34,   173,
      48,   244,    39,   -50,   238,    21,    30,    24,   239,   275,
      29,    34,    35,    97,    40,    36,   264,    37,    64,   103,
     265,   103,   195,    39,    50,    60,    36,    37,    37,   103,
     176,    66,   284,    39,    39,    40,    90,   225,   287,    36,
      93,    37,    68,    69,   120,    40,    52,    39,   223,    24,
     288,   232,    91,   102,   105,   235,   146,   228,   229,    40,
     231,   103,    74,    75,   129,   247,     9,    35,   251,    10,
     130,   131,   -50,   232,   254,    34,   132,   204,   133,    14,
     134,   135,   218,   123,   136,   137,   256,   138,    15,   178,
     -50,   211,   260,    68,    69,   212,   271,   272,    57,   139,
     -50,   213,    70,    36,    71,    37,    35,   216,   268,   270,
      72,    39,    73,    74,   140,   129,   226,   146,   146,   280,
      34,   130,   131,    40,    95,   221,   222,   132,    96,   133,
      14,   134,   135,   224,   146,   136,   137,   286,   138,    15,
    -165,   291,   230,   294,    68,    69,   233,   234,    36,    57,
      37,   118,   237,    70,   119,    71,    39,   250,   253,   220,
     129,    72,   119,    73,    74,   140,   130,   131,    40,   257,
     258,   218,   132,   119,   133,    14,   134,   135,   263,   273,
     136,   137,   276,   138,    15,   193,   283,   282,   293,    68,
      69,   289,   252,    11,    57,    63,    68,    69,    70,    65,
      71,    57,   117,    68,    69,    70,    72,    71,    73,    74,
     140,   127,    70,    72,    71,    73,    74,   189,  -166,    19,
      72,   236,    73,    74,    75,   248,     0,  -166,   279,   255,
       0,   106,   107,   108,   209,   210,   109,   110,   111,   112,
     113,  -166,     0,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,   106,   107,   108,   209,   210,   109,
     110,   111,   112,   113,  -166,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,   106,   107,   108,
     209,   210,   109,   110,   111,   112,   113,  -166,     0,     0,
       0,     0,     0,     0,     0,     0,  -154,     0,     0,     0,
     106,   107,   108,   209,   210,   109,   110,   111,   112,   113,
      68,    69,     0,     0,     0,   183,     0,    68,    69,    70,
       0,    71,   245,     0,    68,    69,    70,    72,    71,    73,
      74,   184,     0,    70,    72,    71,    73,    74,   246,    68,
      69,    72,   123,    73,    74,    75,     0,     0,    70,     0,
      71,   205,     0,   106,   107,   108,    72,   123,    73,    74,
     189,   112,   113,     0,     0,     0,   227,     0,   106,   107,
     108,   169,     0,     0,     0,     0,   112,   113,   106,   107,
     108,     0,     0,   109,   110,   111,   112,   113,   215,     0,
       0,     0,     0,   106,   107,   108,     0,     0,   109,   110,
     111,   112,   113,   262,     0,     0,     0,   106,   107,   108,
       0,     0,   109,   110,   111,   112,   113,    57,     0,     0,
       0,   106,   107,   108,     0,     0,   109,   110,   111,   112,
     113,   106,   107,   108,     0,     0,   109,   110,   111,   112,
     113
};

static const yytype_int16 yycheck[] =
{
      26,    37,    80,    29,    30,    38,    32,   250,   133,    31,
      36,    27,   133,    39,   135,    48,   137,   143,     5,    14,
      15,   143,     4,    34,    50,    23,     8,     4,    23,   219,
      56,     8,    27,    69,    60,    30,     5,    16,    53,   257,
     283,     4,    53,    30,     0,     8,    33,     4,    35,    18,
      20,     8,    39,    33,    41,   245,    38,    90,    27,    28,
      93,    38,     5,    99,   282,    60,    53,    37,    28,    95,
     196,    97,   262,    53,   196,    38,    37,   129,   114,   105,
     132,    38,    33,   119,   136,    30,     5,   123,    31,    34,
      33,    34,    35,   218,   130,   131,   221,   133,    41,   135,
      95,   137,    53,   101,   137,   138,   101,     5,   186,   125,
      53,    30,    29,    30,    33,   137,    35,     5,     5,    33,
      39,    33,    41,    40,     4,    53,    33,    53,     8,    33,
     125,     5,    30,    31,    53,    33,     4,    35,    28,    53,
       8,    53,   137,    41,    31,    33,    33,    35,    35,    53,
      34,    53,   273,    41,    41,    53,    39,   193,    38,    33,
      39,    35,    32,    33,   242,    53,    53,    41,   190,    53,
      38,   204,    28,    34,    36,   208,   212,   199,   200,    53,
     202,    53,    52,    53,     3,   221,    25,    30,   224,    28,
       9,    10,    30,   226,   230,     5,    15,    40,    17,    18,
      19,    20,    40,    30,    23,    24,   239,    26,    27,    53,
      30,    28,    22,    32,    33,    29,   252,   253,    37,    38,
      40,    28,    41,    33,    43,    35,    30,    28,   250,   251,
      49,    41,    51,    52,    53,     3,    40,   273,   274,   265,
       5,     9,    10,    53,    30,    28,    37,    15,    34,    17,
      18,    19,    20,    28,   290,    23,    24,    22,    26,    27,
      28,   283,    28,   289,    32,    33,    39,    39,    33,    37,
      35,    32,    34,    41,    35,    43,    41,    14,    21,    32,
       3,    49,    35,    51,    52,    53,     9,    10,    53,    29,
      32,    40,    15,    35,    17,    18,    19,    20,    37,    28,
      23,    24,    34,    26,    27,    21,    14,    29,    34,    32,
      33,    30,    21,     9,    37,    32,    32,    33,    41,    34,
      43,    37,    79,    32,    33,    41,    49,    43,    51,    52,
      53,    95,    41,    49,    43,    51,    52,    53,    28,    12,
      49,   212,    51,    52,    53,   221,    -1,    37,   263,   230,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      32,    33,    -1,    -1,    -1,    37,    -1,    32,    33,    41,
      -1,    43,    37,    -1,    32,    33,    41,    49,    43,    51,
      52,    53,    -1,    41,    49,    43,    51,    52,    53,    32,
      33,    49,    30,    51,    52,    53,    -1,    -1,    41,    -1,
      43,    39,    -1,    41,    42,    43,    49,    30,    51,    52,
      53,    49,    50,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    34,    -1,    -1,    -1,    -1,    49,    50,    41,    42,
      43,    -1,    -1,    46,    47,    48,    49,    50,    36,    -1,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,
      48,    49,    50,    37,    -1,    -1,    -1,    41,    42,    43,
      -1,    -1,    46,    47,    48,    49,    50,    37,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      50,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    55,    56,    53,    57,     0,    28,    58,    25,
      28,    57,    84,     5,    18,    27,    28,    75,    78,    83,
      86,    53,    87,    33,    53,    80,    81,    33,    77,    81,
      33,    70,    72,    80,     5,    30,    33,    35,    39,    41,
      53,    61,    62,    63,    64,    67,    69,    77,    39,    61,
      31,    34,    53,    61,    73,    74,    81,    37,    59,    88,
      33,    61,    71,    72,    28,    70,    53,    61,    32,    33,
      41,    43,    49,    51,    52,    53,    65,    89,    90,    94,
      95,    96,    99,   100,   101,   134,    82,    89,    61,    68,
      39,    28,    82,    39,    61,    30,    34,    31,    61,    60,
      61,    79,    34,    53,    89,    36,    41,    42,    43,    46,
      47,    48,    49,    50,    91,    92,    93,    90,    32,    35,
      96,    97,    98,    30,    82,    76,    82,    74,    61,     3,
       9,    10,    15,    17,    19,    20,    23,    24,    26,    38,
      53,    59,    81,    82,    83,    85,    89,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     117,   122,   128,   129,   130,   131,   132,    34,    80,    34,
      61,    66,    89,    33,    89,    89,    34,    77,    53,   105,
      89,    89,   105,    37,    53,    89,    95,   103,   118,    53,
      89,   103,   105,    21,    59,    81,    82,    89,   103,   123,
     124,   125,   127,    82,    40,    39,    92,    93,   133,    44,
      45,    28,    29,    28,    61,    36,    28,   115,    40,    37,
      32,    28,    37,    59,    28,    89,    40,    39,    59,    59,
      28,    59,    82,    39,    39,    82,   102,    34,     4,     8,
      38,   116,    95,   115,    33,    37,    53,    89,   118,   119,
      14,    89,    21,    21,    89,   123,    82,    29,    32,    38,
      22,   115,    37,    37,     4,     8,    38,   120,    59,   112,
      59,    89,    89,    28,    60,    33,    34,    38,   115,   119,
      61,   121,    29,    14,   103,   126,    22,    38,    38,    30,
      60,    59,   112,    34,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    57,    58,    58,    59,    60,    60,
      61,    61,    61,    62,    63,    63,    63,    64,    65,    66,
      67,    68,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    85,    86,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    96,    97,    98,    99,
      99,    99,   100,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   103,   103,   104,   105,   106,   107,   107,   108,   108,
     109,   109,   110,   111,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   123,   123,   124,   125,   125,   126,
     126,   127,   127,   127,   128,   129,   130,   131,   131,   132,
     133,   133,   133,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     1,     3,     0,     3,     3,     0,
       1,     1,     3,     1,     1,     1,     1,     4,     1,     1,
       2,     1,     2,     2,     1,     1,     1,     3,     2,     3,
       1,     3,     2,     2,     1,     2,     6,     3,     0,     4,
       2,     3,     2,     6,     3,     0,     4,     3,     1,     3,
       1,     3,     1,     1,     1,     2,     2,     0,     3,     4,
       1,     1,     0,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     4,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     7,     7,     5,     5,     5,     3,
       1,     1,     7,     6,     5,     4,     4,     0,     2,     1,
       7,     5,     7,     5,     4,     0,     2,     1,     3,     1,
       3,     3,     3,     2,     1,     0,     5,     1,     0,     1,
       0,     4,     4,     2,     2,     0,     1,     2,     2,     3,
       2,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
      
#line 1540 "gc.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 396 "gc.y" /* yacc.c:1906  */


int yyerror(char *msg) {
	printf("Invalid Expression\n");
	return 1;
}

void main (int argc, char const *argv[]) {
	yyin=fopen(argv[1], "r");

	do {
		if(yyparse()) {
			printf("failure");
			exit(0);
		}
	} while (!feof(yyin));
	printf("\nSuccess\n");
}
