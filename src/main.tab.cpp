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
#line 1 "src/main.y" /* yacc.c:339  */

    #include "common.h"
    #define YYSTYPE TreeNode *  
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );

#line 75 "src/main.tab.cpp" /* yacc.c:339  */

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
   by #include "main.tab.h".  */
#ifndef YY_YY_SRC_MAIN_TAB_H_INCLUDED
# define YY_YY_SRC_MAIN_TAB_H_INCLUDED
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
    T_CHAR = 258,
    T_INT = 259,
    T_STRING = 260,
    T_BOOL = 261,
    T_DOUBLE = 262,
    T_VOID = 263,
    LOP_ASSIGN = 264,
    PLUS_ASSIGN = 265,
    MIN_ASSIGN = 266,
    TIM_ASSIGN = 267,
    DIV_ASSIGN = 268,
    MOD_ASSIGN = 269,
    SEMICOLON = 270,
    LB = 271,
    RB = 272,
    COMMA = 273,
    LP = 274,
    RP = 275,
    IDENTIFIER = 276,
    INTEGER = 277,
    CHAR = 278,
    BOOL = 279,
    STRING = 280,
    NUMBER = 281,
    PLUS = 282,
    MINUS = 283,
    TIMES = 284,
    DIVIDE = 285,
    MOD = 286,
    PPLUS = 287,
    MMINUS = 288,
    AND = 289,
    OR = 290,
    NOT = 291,
    EQU = 292,
    GTR = 293,
    LSS = 294,
    GEQ = 295,
    LEQ = 296,
    NEQ = 297,
    LOGICAL_AND = 298,
    LOGICAL_OR = 299,
    LOGICAL_NOT = 300,
    UMINUS = 301,
    FOR = 302,
    INPUT = 303,
    OUTPUT = 304,
    DO = 305,
    MAIN = 306,
    IF = 307,
    ELSE = 308,
    WHILE = 309,
    RETURN = 310,
    EOL = 311,
    LOP_EQ = 312,
    XOR = 313,
    SHIFT_LEFT = 314,
    SHIFT_RIGHT = 315
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

#endif /* !YY_YY_SRC_MAIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "src/main.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1045

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    44,    45,    46,    50,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    69,    75,
      81,    87,    93,    99,   108,   117,   126,   130,   133,   136,
     139,   142,   145,   148,   151,   154,   160,   169,   177,   187,
     188,   192,   193,   196,   197,   201,   210,   219,   227,   237,
     238,   243,   251,   252,   256,   263,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   301,   302,   303,   304,   305
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_CHAR", "T_INT", "T_STRING", "T_BOOL",
  "T_DOUBLE", "T_VOID", "LOP_ASSIGN", "PLUS_ASSIGN", "MIN_ASSIGN",
  "TIM_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "SEMICOLON", "LB", "RB",
  "COMMA", "LP", "RP", "IDENTIFIER", "INTEGER", "CHAR", "BOOL", "STRING",
  "NUMBER", "PLUS", "MINUS", "TIMES", "DIVIDE", "MOD", "PPLUS", "MMINUS",
  "AND", "OR", "NOT", "EQU", "GTR", "LSS", "GEQ", "LEQ", "NEQ",
  "LOGICAL_AND", "LOGICAL_OR", "LOGICAL_NOT", "UMINUS", "FOR", "INPUT",
  "OUTPUT", "DO", "MAIN", "IF", "ELSE", "WHILE", "RETURN", "EOL", "LOP_EQ",
  "XOR", "SHIFT_LEFT", "SHIFT_RIGHT", "$accept", "program", "statements",
  "statement", "assignment_stmt", "else_stmt", "if_stmt", "if_else_stmt",
  "for_stmt", "while_stmt", "declaration", "IDLIST", "IDLIST_DECL",
  "function_return", "function_declaration", "function_definition",
  "function_call_id", "function_call_idlist", "function_call", "expr", "T", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF -35

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-35)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      44,   -35,   -35,   -35,   -35,   -35,   -35,    44,    92,    -5,
      -2,    11,   -10,    34,   -35,    44,   -35,   -17,   -35,   -35,
     -35,    25,   -35,   -35,   -35,   -35,   -18,    26,   977,   977,
     977,   977,   977,   977,   883,   516,   977,   977,   -35,   977,
     -35,   -35,   -35,   -35,   -35,   977,   977,   977,   154,   -35,
     -35,    44,   -35,   -35,    23,    36,   -35,   -35,   186,   218,
     250,   282,   314,   346,    46,    28,    45,    49,    51,   781,
     853,    57,   378,    58,   535,   567,   599,   -26,   -26,   -26,
     -35,   977,   977,   977,   977,   977,   -35,   -35,   977,   977,
     977,   977,   977,   977,   977,   977,   977,   977,   977,   -35,
     977,    72,    50,    74,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   901,    63,   919,   410,   977,   865,     1,
      44,    44,   -35,   205,   205,   -26,   -26,   -26,  1003,    89,
     518,   175,   175,   175,   175,   518,   825,   803,   987,   781,
      77,   -35,    30,    79,    80,    44,   -35,   -35,    44,   631,
     931,   442,   949,   474,   -35,   -35,   -35,    44,   129,    48,
     -35,   -35,    44,    44,   663,   977,    44,   695,   961,    91,
     -35,   -35,    44,   -35,   -35,    44,   727,   -35,    44,    44,
     759,   -35,    95,   -35,    44,   -35,   -35,    44,   -35,   -35,
     -35
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    84,    83,    85,    86,    87,    17,     0,     0,     0,
       0,     0,     0,     0,     2,     3,    16,     8,     9,    10,
       7,     0,    14,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      78,    79,    81,    82,    80,     0,     0,     0,     0,     1,
       4,     0,    26,    15,    40,     0,    38,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    49,
       0,     0,     0,     0,     0,     0,     0,    76,    65,    75,
      44,     0,     0,     0,     0,     0,    62,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      55,    51,    50,     0,     0,     0,     0,     0,     0,    40,
       0,     0,    77,    56,    57,    58,    59,    60,    63,    64,
      67,    68,    69,    70,    71,    72,    73,    74,    66,    37,
      40,    39,     0,    41,     0,     0,    53,    54,     0,     0,
       0,     0,     0,     0,    25,    36,    46,     0,     0,     0,
       6,    35,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    45,     0,    32,    33,     0,     0,    34,     0,     0,
       0,    48,     0,    29,     0,    30,    31,     0,    47,    28,
      27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,    -7,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -34,    14,   -24,   -35,   -35,   -35,   -35,    27,   -35,    -8,
     -33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    52,    17,    18,    19,    20,
      21,    56,   144,    22,    23,    24,    67,    68,    25,    69,
      26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    71,    73,    54,    48,    38,    86,    87,    50,    39,
     100,    40,    41,    42,    35,    43,    44,    36,    45,   101,
      58,    59,    60,    61,    62,    63,    46,    72,    74,    75,
      37,    76,   100,    55,    49,    47,    51,    77,    78,    79,
      53,   101,   102,    57,    99,   156,   157,     1,     2,   111,
       3,     4,     5,     1,     2,   103,     3,     4,     5,     6,
       7,   110,   116,   171,   172,     8,   112,   113,   143,    73,
     142,   114,   117,   123,   124,   125,   126,   127,   147,   119,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     9,   139,   140,   145,   101,    10,   158,    11,    12,
     159,    28,    29,    30,    31,    32,    33,   149,   181,   151,
     153,    34,   188,   154,   155,   141,    81,    82,    83,    84,
      85,    86,    87,    88,   143,    73,    90,    91,    92,    93,
      94,    95,     1,     2,   170,     3,     4,     5,   160,     0,
     146,   161,   164,     0,   167,     0,     0,    98,     0,     0,
     169,     0,     0,     0,     0,   173,   174,   176,     0,   177,
     180,     0,     0,     0,     0,   182,     0,     0,   183,    80,
       0,   185,   186,     0,     0,     0,     0,   189,     0,     0,
     190,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,   104,    81,    82,    83,    84,    85,    86,    87,     0,
       0,     0,    98,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,   105,    83,    84,    85,    86,    87,     0,
       0,     0,     0,     0,    98,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,    90,    91,    92,    93,    94,    95,    96,
      97,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,    90,    91,    92,
      93,    94,    95,    96,    97,     0,     0,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,    90,
      91,    92,    93,    94,    95,    96,    97,     0,     0,   168,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,    90,    91,    92,    93,    94,    95,    96,    97,     1,
       2,     0,     3,     4,     5,     0,     0,     0,     0,     0,
       0,    70,    98,     0,     0,    39,     0,    40,    41,    42,
       0,    43,    44,     0,    45,    81,    82,    83,    84,    85,
      86,    87,    46,     0,     0,   120,    91,    92,    93,    94,
       0,    47,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     0,    90,    91,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,    98,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,    90,    91,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,     0,    98,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,    90,    91,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,     0,     0,
       0,   162,     0,     0,     0,     0,     0,    98,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,     0,     0,   175,     0,     0,     0,     0,     0,    98,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
      90,    91,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,     0,
       0,    98,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     0,    90,    91,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,     0,     0,   184,     0,     0,
       0,     0,     0,    98,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,    90,    91,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,     0,     0,     0,   187,
       0,     0,     0,     0,     0,    98,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,    90,    91,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    98,    90,    91,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    98,
      90,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    98,    90,    91,    92,    93,    94,    95,   115,     0,
       0,     0,    39,     0,    40,    41,    42,     0,    43,    44,
     152,    45,     0,    98,    39,     0,    40,    41,    42,    46,
      43,    44,     0,    45,     0,     0,     0,     0,    47,     0,
       0,    46,    39,    64,    40,    41,    42,     0,    43,    44,
      47,    45,    65,     0,     0,     0,     0,    66,     0,    46,
      39,     0,    40,    41,    42,     0,    43,    44,    47,    45,
      65,     0,     0,     0,     0,    66,     0,    46,    39,   148,
      40,    41,    42,     0,    43,    44,    47,    45,     0,     0,
      39,   163,    40,    41,    42,    46,    43,    44,     0,    45,
       0,     0,     0,     0,    47,     0,     0,    46,    39,   166,
      40,    41,    42,     0,    43,    44,    47,    45,     0,     0,
      39,   179,    40,    41,    42,    46,    43,    44,     0,    45,
       0,     0,     0,     0,    47,     0,    39,    46,    40,    41,
      42,     0,    43,    44,     0,    45,    47,     0,     0,     0,
       0,     0,     0,    46,    81,    82,    83,    84,    85,    86,
      87,    88,    47,     0,    90,    91,    92,    93,    94,    95,
      81,    82,    83,    84,    85,    86,    87,     0,     0,     0,
      90,    91,    92,    93,    94,    95
};

static const yytype_int16 yycheck[] =
{
       7,    35,    35,    21,    12,    15,    32,    33,    15,    19,
       9,    21,    22,    23,    19,    25,    26,    19,    28,    18,
      28,    29,    30,    31,    32,    33,    36,    35,    36,    37,
      19,    39,     9,    51,     0,    45,    53,    45,    46,    47,
      15,    18,    19,    17,    51,    15,    16,     3,     4,    21,
       6,     7,     8,     3,     4,    19,     6,     7,     8,    15,
      16,    15,    70,    15,    16,    21,    21,    18,   102,   102,
      20,    20,    15,    81,    82,    83,    84,    85,    15,    21,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    47,   100,    21,    20,    18,    52,    18,    54,    55,
      20,     9,    10,    11,    12,    13,    14,   115,    17,   117,
     118,    19,    17,   120,   121,   101,    27,    28,    29,    30,
      31,    32,    33,    34,   158,   158,    37,    38,    39,    40,
      41,    42,     3,     4,   158,     6,     7,     8,   145,    -1,
     113,   148,   150,    -1,   152,    -1,    -1,    58,    -1,    -1,
     157,    -1,    -1,    -1,    -1,   162,   163,   165,    -1,   166,
     168,    -1,    -1,    -1,    -1,   172,    -1,    -1,   175,    15,
      -1,   178,   179,    -1,    -1,    -1,    -1,   184,    -1,    -1,
     187,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    15,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    58,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    15,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    58,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,     3,
       4,    -1,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    58,    -1,    -1,    19,    -1,    21,    22,    23,
      -1,    25,    26,    -1,    28,    27,    28,    29,    30,    31,
      32,    33,    36,    -1,    -1,    20,    38,    39,    40,    41,
      -1,    45,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    58,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    58,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    58,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    58,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    58,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    58,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    58,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    58,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    58,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    58,    37,    38,    39,    40,    41,    42,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    25,    26,
      15,    28,    -1,    58,    19,    -1,    21,    22,    23,    36,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    36,    19,    20,    21,    22,    23,    -1,    25,    26,
      45,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    36,
      19,    -1,    21,    22,    23,    -1,    25,    26,    45,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    36,    19,    20,
      21,    22,    23,    -1,    25,    26,    45,    28,    -1,    -1,
      19,    20,    21,    22,    23,    36,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    36,    19,    20,
      21,    22,    23,    -1,    25,    26,    45,    28,    -1,    -1,
      19,    20,    21,    22,    23,    36,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    45,    -1,    19,    36,    21,    22,
      23,    -1,    25,    26,    -1,    28,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    27,    28,    29,    30,    31,    32,
      33,    34,    45,    -1,    37,    38,    39,    40,    41,    42,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,    15,    16,    21,    47,
      52,    54,    55,    62,    63,    64,    65,    67,    68,    69,
      70,    71,    74,    75,    76,    79,    81,    63,     9,    10,
      11,    12,    13,    14,    19,    19,    19,    19,    15,    19,
      21,    22,    23,    25,    26,    28,    36,    45,    80,     0,
      63,    53,    66,    15,    21,    51,    72,    17,    80,    80,
      80,    80,    80,    80,    20,    29,    34,    77,    78,    80,
      15,    71,    80,    81,    80,    80,    80,    80,    80,    80,
      15,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    58,    63,
       9,    18,    19,    19,    15,    15,    15,    15,    15,    15,
      15,    21,    21,    18,    20,    15,    80,    15,    15,    21,
      20,    20,    20,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      21,    72,    20,    71,    73,    20,    78,    15,    20,    80,
      15,    80,    15,    80,    63,    63,    15,    16,    18,    20,
      63,    63,    20,    20,    80,    15,    20,    80,    15,    63,
      73,    15,    16,    63,    63,    20,    80,    63,    20,    20,
      80,    17,    63,    63,    20,    63,    63,    20,    17,    63,
      63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    65,    65,    65,    66,    67,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     4,     4,
       4,     4,     4,     4,     2,     5,     2,     9,     9,     8,
       8,     8,     7,     7,     7,     6,     5,     4,     2,     3,
       1,     1,     3,     2,     3,     6,     5,     8,     7,     1,
       2,     2,     1,     3,     5,     4,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
        case 2:
#line 41 "src/main.y" /* yacc.c:1646  */
    {root = new TreeNode(0, NODE_PROG); root->addChild((yyvsp[0]));}
#line 1568 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1574 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]); (yyvsp[-1])->addSibling((yyvsp[0]));}
#line 1580 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1586 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "src/main.y" /* yacc.c:1646  */
    { 
    (yyvsp[-3])->addChild((yyvsp[-4]));
    (yyvsp[-3])->addChild((yyvsp[0]));
    (yyval) = (yyvsp[-3]);
    }
#line 1596 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 55 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1602 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1608 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1614 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 58 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1620 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 59 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1626 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1632 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 61 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1638 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1644 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1650 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 64 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1656 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 65 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_STMT); (yyval)->stype = STMT_SKIP;}
#line 1662 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1673 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 75 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_PLUS_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1684 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 81 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_MIN_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1695 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 87 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_TIM_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1706 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 93 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DIV_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1717 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 99 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_MOD_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1728 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_ELSE;
    node->addChild((yyvsp[0]));
    (yyval) = node;
 }
#line 1739 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 117 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_IF;
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 1750 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 126 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-1])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-1]);}
#line 1756 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 130 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-8])->lineno, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1764 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 133 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-8])->lineno, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1772 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 136 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, nullptr, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1780 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, (yyvsp[-5]), nullptr, (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1788 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 142 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, (yyvsp[-5]), (yyvsp[-3]), nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1796 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 145 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, nullptr, nullptr, (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1804 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 148 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, nullptr, (yyvsp[-3]), nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1812 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 151 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, (yyvsp[-4]), nullptr, nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1820 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 154 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-5])->lineno, nullptr, nullptr, nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1828 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 160 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_WHILE;
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 1839 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 169 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 1852 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 1864 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 187 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 1870 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 188 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1876 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 192 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1882 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 193 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 1888 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 196 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1894 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 197 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[-1])); (yyval)=(yyvsp[-2]);}
#line 1900 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 201 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild((yyvsp[-5]));
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-2]));
    (yyval) = node;
}
#line 1913 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 210 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-3]));
    (yyval) = node;
}
#line 1925 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 219 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-6])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DEF;
    node->addChild((yyvsp[-7]));
    node->addChild((yyvsp[-6]));
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1938 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 227 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-5])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DEF;
    node->addChild((yyvsp[-6]));
    node->addChild((yyvsp[-5]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;
}
#line 1951 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 237 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1957 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 238 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_CONST);
    node->type = TYPE_CITE;
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 1967 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 243 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_CONST);
    node->type = TYPE_POINT;
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 1977 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 251 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1983 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 252 "src/main.y" /* yacc.c:1646  */
    { (yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 1989 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 256 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-2]));
    (yyval) = node;
}
#line 2001 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 263 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-2])->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild((yyvsp[-3]));
    (yyval) = node;
}
#line 2012 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 271 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2018 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 272 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2024 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 273 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2030 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 274 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2036 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 275 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2042 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 276 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[0]), (yyvsp[-1]), NULL); }
#line 2048 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 277 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[0]), (yyvsp[-1]), NULL); }
#line 2054 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 278 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2060 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 279 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2066 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 280 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2072 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 281 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2078 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 282 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2084 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 283 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2090 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 284 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2096 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 285 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2102 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 286 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2108 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 287 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2114 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 288 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2120 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 289 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2126 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 290 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2132 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 291 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2138 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 292 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2144 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 293 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2150 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 294 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2156 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 295 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2162 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 296 "src/main.y" /* yacc.c:1646  */
    {  (yyval) = (yyvsp[0]);}
#line 2168 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 297 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2174 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 301 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_INT;}
#line 2180 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 302 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CHAR;}
#line 2186 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 303 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_BOOL;}
#line 2192 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 304 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_DOUBLE;}
#line 2198 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 305 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_VOID;}
#line 2204 "src/main.tab.cpp" /* yacc.c:1646  */
    break;


#line 2208 "src/main.tab.cpp" /* yacc.c:1646  */
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
#line 308 "src/main.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
