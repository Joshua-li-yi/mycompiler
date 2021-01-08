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
    #include "./tree.h"
    #include "./main.tab.h"
    TreeNode* root;

    extern int lineno;
    int yylex();
    int yyerror( char const * );
    

#line 78 "src/main.tab.cpp" /* yacc.c:339  */

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
    PLUS = 281,
    MINUS = 282,
    TIMES = 283,
    DIVIDE = 284,
    MOD = 285,
    PPLUS = 286,
    MMINUS = 287,
    AND = 288,
    OR = 289,
    NOT = 290,
    EQU = 291,
    GTR = 292,
    LSS = 293,
    GEQ = 294,
    LEQ = 295,
    NEQ = 296,
    LOGICAL_AND = 297,
    LOGICAL_OR = 298,
    LOGICAL_NOT = 299,
    UMINUS = 300,
    FOR = 301,
    INPUT = 302,
    OUTPUT = 303,
    DO = 304,
    MAIN = 305,
    IF = 306,
    ELSE = 307,
    WHILE = 308,
    RETURN = 309,
    SCANF = 310,
    PRINTF = 311,
    NEW = 312,
    EOL = 313,
    LOP_EQ = 314
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

#line 189 "src/main.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   980

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    46,    47,    48,    53,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      77,    78,    82,    83,    87,    97,   119,   128,   138,   147,
     156,   168,   180,   197,   201,   222,   225,   237,   240,   243,
     246,   249,   252,   258,   274,   287,   294,   298,   299,   303,
     311,   317,   318,   331,   332,   336,   337,   347,   355,   363,
     364,   367,   376,   386,   397,   411,   420,   421,   425,   432,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   470,   478,   479,   480,
     481,   482,   483,   489
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
  "PLUS", "MINUS", "TIMES", "DIVIDE", "MOD", "PPLUS", "MMINUS", "AND",
  "OR", "NOT", "EQU", "GTR", "LSS", "GEQ", "LEQ", "NEQ", "LOGICAL_AND",
  "LOGICAL_OR", "LOGICAL_NOT", "UMINUS", "FOR", "INPUT", "OUTPUT", "DO",
  "MAIN", "IF", "ELSE", "WHILE", "RETURN", "SCANF", "PRINTF", "NEW", "EOL",
  "LOP_EQ", "$accept", "program", "statements", "statement",
  "scanf_function", "printf_function", "assignment_stmt", "else_stmt",
  "if_stmt", "if_else_stmt", "for_stmt", "while_stmt", "declaration",
  "IDLIST", "function_declaration_id", "function_declaration_idlist",
  "function_return", "function_definition_id",
  "function_definition_idlist", "function_declaration",
  "function_definition", "function_call_id", "function_call_idlist",
  "function_call", "expr", "T", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -114

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-114)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,  -114,  -114,  -114,  -114,  -114,  -114,    14,   151,    -4,
       8,    13,   187,    31,    38,    59,  -114,    14,  -114,  -114,
    -114,     9,  -114,  -114,  -114,    48,  -114,  -114,  -114,  -114,
      -2,    54,   613,   628,   628,   628,   628,   628,   508,   214,
     628,   628,  -114,   628,  -114,  -114,  -114,  -114,   628,    70,
      71,   628,   628,    47,   526,   544,  -114,  -114,    14,  -114,
    -114,    15,  -114,  -114,    74,  -114,  -114,    90,   263,   283,
     303,   323,   343,   363,    96,    94,    95,   857,   229,   104,
     383,   647,   671,   695,   -27,  -114,  -114,   -27,   -27,  -114,
     628,   628,   628,   628,   628,  -114,  -114,   628,   628,   628,
     628,   628,   628,   628,   628,   628,   628,   102,    98,   107,
      99,  -114,   628,   106,     5,   105,   628,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,   628,   113,   562,   403,   628,   244,
      14,    14,  -114,   252,   252,   -27,   -27,   -27,   924,   908,
     940,   158,   158,   158,   158,   940,   892,   875,  -114,   114,
    -114,   116,   857,   117,  -114,    -9,   121,   124,   123,   125,
      21,    14,   423,  -114,  -114,    14,   719,   580,   443,   598,
     463,  -114,  -114,  -114,  -114,  -114,    14,   149,   131,   149,
     133,   138,  -114,  -114,  -114,    14,    14,   142,   743,   628,
      14,   767,   146,   150,  -114,    25,  -114,  -114,    93,    14,
     115,  -114,  -114,   628,    14,   483,  -114,    14,    14,  -114,
     159,   165,   160,   149,   857,   791,  -114,   154,  -114,  -114,
     115,   628,  -114,    -5,    14,   167,   857,   857,   628,  -114,
     628,   815,   839,  -114,    14,  -114
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,    97,    99,   100,   101,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,    15,    16,
      18,     8,     9,    10,     7,     0,    14,    11,    12,    13,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,    91,    92,    93,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     4,     0,    33,
      17,    48,   102,   103,     0,    45,     5,    91,     0,     0,
       0,     0,     0,     0,     0,    66,     0,    65,     0,    91,
       0,     0,     0,     0,    89,    96,    95,    79,    88,    56,
       0,     0,     0,     0,     0,    76,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,    24,    26,    27,
      28,    29,    30,    69,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    70,    71,    72,    73,    74,    77,    78,
      80,    81,    82,    83,    84,    85,    86,    87,    21,     0,
      23,     0,    44,    48,    47,     0,    53,     0,    59,     0,
      51,     0,     0,    67,    68,     0,     0,     0,     0,     0,
       0,    32,    43,    20,    22,    62,     0,     0,     0,     0,
       0,    50,     6,    25,    42,     0,     0,    91,     0,     0,
       0,     0,     0,     0,    54,    51,    61,    60,     0,     0,
       0,    39,    40,     0,     0,     0,    41,     0,     0,    64,
      50,    58,     0,     0,    49,     0,    35,     0,    37,    38,
       0,     0,    63,     0,     0,     0,    49,    57,     0,    36,
       0,     0,     0,    52,     0,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -114,  -114,    -7,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,    67,  -114,    17,  -114,  -114,     2,  -114,
    -114,  -114,   -52,  -114,     4,  -113
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    59,    21,    22,
      23,    24,    25,    65,   156,   157,    26,   158,   159,    27,
      28,    75,    76,    29,    77,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      31,   160,   108,   110,    95,    96,   175,   176,     1,     2,
      57,     3,     4,     5,   228,    39,    53,     1,     2,    61,
       3,     4,     5,    62,   112,   155,    62,    40,    63,     6,
       7,    63,    41,   113,   114,     8,    68,    69,    70,    71,
      72,    73,   181,    80,    81,    82,   210,    83,    64,    62,
      54,   111,    84,    62,    63,    87,    88,    55,    63,    56,
       9,    58,    89,    60,   195,    10,   198,    11,    12,    13,
      14,    66,   163,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   127,    99,   100,   101,   102,   103,   104,   105,
     106,    85,    86,   115,   133,   134,   135,   136,   137,   116,
     223,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   123,   124,   128,   211,   125,   152,   148,   149,   151,
     162,    62,   150,   171,   172,   161,    63,   153,   164,   173,
     166,   174,   168,   170,    43,   113,    44,    45,    46,   177,
      47,   179,    48,    49,   178,   180,   196,   200,    50,   199,
      51,   203,     1,     2,   182,     3,     4,     5,   184,    52,
      32,    33,    34,    35,    36,    37,   208,   209,   220,   193,
      38,   188,   213,   191,   221,   225,   230,   222,   201,   202,
     154,   197,     0,   206,    90,    91,    92,    93,    94,    95,
      96,     0,   212,   205,   194,     0,     0,   216,     0,     0,
     218,   219,    42,     0,   214,     0,    43,   215,    44,    45,
      46,     0,    47,     0,    48,    49,     0,   229,     0,     0,
      50,     0,    51,     0,   226,   227,     0,   235,     0,    78,
       0,    52,   231,    43,   232,    79,    45,    46,     0,    47,
       0,    48,    49,     0,   126,     0,     0,    50,    43,    51,
      44,    45,    46,     0,    47,     0,    48,    49,    52,   169,
       0,     0,    50,    43,    51,    44,    45,    46,     0,    47,
       0,    48,    49,    52,     0,     0,     0,    50,   117,    51,
      92,    93,    94,    95,    96,     0,     0,     0,    52,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   118,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   119,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   120,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   121,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   122,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   129,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   167,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   183,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   189,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   192,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   217,    99,
     100,   101,   102,   103,   104,   105,   106,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,    43,    74,    44,
      45,    46,     0,    47,     0,    48,    49,     0,     0,     0,
       0,    50,     0,    51,     0,    43,   107,    44,    45,    46,
       0,    47,    52,    48,    49,     0,     0,     0,     0,    50,
       0,    51,     0,    43,   109,    44,    45,    46,     0,    47,
      52,    48,    49,     0,     0,     0,     0,    50,     0,    51,
       0,    43,   165,    44,    45,    46,     0,    47,    52,    48,
      49,     0,     0,     0,     0,    50,     0,    51,     0,    43,
     186,   187,    45,    46,     0,    47,    52,    48,    49,     0,
       0,     0,     0,    50,     0,    51,     0,    43,   190,    44,
      45,    46,     0,    47,    52,    48,    49,     0,     0,     0,
       0,    50,    43,    51,    67,    45,    46,     0,    47,     0,
      48,    49,    52,     0,     0,     0,    50,    43,    51,    44,
      45,    46,     0,    47,     0,    48,    49,    52,     0,     0,
       0,    50,     0,    51,     0,     0,     0,   130,     0,     0,
       0,     0,    52,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   131,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,    99,   100,   101,
     102,   103,   104,   105,   106,   132,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   185,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,   204,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,    99,
     100,   101,   102,   103,   104,   105,   106,   207,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,   224,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,    99,   100,   101,
     102,   103,   104,   105,   106,   233,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   234,
       0,     0,     0,     0,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,    99,   100,   101,   102,   103,
     104,   105,   106,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,    99,   100,   101,   102,   103,   104,   105,
     106,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,   100,   101,   102,   103,   104,   105,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,    99,   100,
     101,   102,   103,   104,    90,    91,    92,    93,    94,    95,
      96,    97,     0,     0,    99,   100,   101,   102,   103,   104,
      90,    91,    92,    93,    94,    95,    96,     0,     0,     0,
      99,   100,   101,   102,   103,   104,    90,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,   100,   101,   102,
     103
};

static const yytype_int16 yycheck[] =
{
       7,   114,    54,    55,    31,    32,    15,    16,     3,     4,
      17,     6,     7,     8,    19,    19,    12,     3,     4,    21,
       6,     7,     8,    28,     9,    20,    28,    19,    33,    15,
      16,    33,    19,    18,    19,    21,    32,    33,    34,    35,
      36,    37,    21,    39,    40,    41,    21,    43,    50,    28,
      19,    58,    48,    28,    33,    51,    52,    19,    33,     0,
      46,    52,    15,    15,   177,    51,   179,    53,    54,    55,
      56,    17,   124,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    78,    36,    37,    38,    39,    40,    41,    42,
      43,    21,    21,    19,    90,    91,    92,    93,    94,     9,
     213,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    15,    18,     9,    21,    20,   112,    15,    20,    20,
     116,    28,    15,   130,   131,    20,    33,    21,    15,    15,
     126,    15,   128,   129,    19,    18,    21,    22,    23,    18,
      25,    18,    27,    28,    20,    20,    15,     9,    33,    16,
      35,     9,     3,     4,   161,     6,     7,     8,   165,    44,
       9,    10,    11,    12,    13,    14,    20,    17,     9,   176,
      19,   167,    57,   169,     9,    21,     9,    17,   185,   186,
     113,   179,    -1,   190,    26,    27,    28,    29,    30,    31,
      32,    -1,   199,   189,   177,    -1,    -1,   204,    -1,    -1,
     207,   208,    15,    -1,   200,    -1,    19,   203,    21,    22,
      23,    -1,    25,    -1,    27,    28,    -1,   224,    -1,    -1,
      33,    -1,    35,    -1,   220,   221,    -1,   234,    -1,    15,
      -1,    44,   228,    19,   230,    21,    22,    23,    -1,    25,
      -1,    27,    28,    -1,    15,    -1,    -1,    33,    19,    35,
      21,    22,    23,    -1,    25,    -1,    27,    28,    44,    15,
      -1,    -1,    33,    19,    35,    21,    22,    23,    -1,    25,
      -1,    27,    28,    44,    -1,    -1,    -1,    33,    15,    35,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    44,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    15,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    19,    20,    21,
      22,    23,    -1,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    19,    20,    21,    22,    23,
      -1,    25,    44,    27,    28,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    19,    20,    21,    22,    23,    -1,    25,
      44,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    19,    20,    21,    22,    23,    -1,    25,    44,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    19,
      20,    21,    22,    23,    -1,    25,    44,    27,    28,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    19,    20,    21,
      22,    23,    -1,    25,    44,    27,    28,    -1,    -1,    -1,
      -1,    33,    19,    35,    21,    22,    23,    -1,    25,    -1,
      27,    28,    44,    -1,    -1,    -1,    33,    19,    35,    21,
      22,    23,    -1,    25,    -1,    27,    28,    44,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    44,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    37,    38,    39,    40,    41,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    38,    39,
      40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,    15,    16,    21,    46,
      51,    53,    54,    55,    56,    61,    62,    63,    64,    65,
      66,    68,    69,    70,    71,    72,    76,    79,    80,    83,
      85,    62,     9,    10,    11,    12,    13,    14,    19,    19,
      19,    19,    15,    19,    21,    22,    23,    25,    27,    28,
      33,    35,    44,    84,    19,    19,     0,    62,    52,    67,
      15,    21,    28,    33,    50,    73,    17,    21,    84,    84,
      84,    84,    84,    84,    20,    81,    82,    84,    15,    21,
      84,    84,    84,    84,    84,    21,    21,    84,    84,    15,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    82,    20,
      82,    62,     9,    18,    19,    19,     9,    15,    15,    15,
      15,    15,    15,    15,    18,    20,    15,    84,     9,    15,
      20,    20,    20,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    15,    20,
      15,    20,    84,    21,    73,    20,    74,    75,    77,    78,
      85,    20,    84,    82,    15,    20,    84,    15,    84,    15,
      84,    62,    62,    15,    15,    15,    16,    18,    20,    18,
      20,    21,    62,    15,    62,    20,    20,    21,    84,    15,
      20,    84,    15,    62,    75,    85,    15,    78,    85,    16,
       9,    62,    62,     9,    20,    84,    62,    20,    20,    17,
      21,    21,    62,    57,    84,    84,    62,    15,    62,    62,
       9,     9,    17,    85,    20,    21,    84,    84,    19,    62,
       9,    84,    84,    20,    20,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    67,    68,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    72,    72,    72,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       5,     4,     5,     4,     4,     6,     4,     4,     4,     4,
       4,     2,     5,     2,    13,     8,    10,     8,     8,     7,
       7,     7,     6,     5,     4,     2,     1,     3,     1,     4,
       2,     1,     8,     1,     3,     2,     3,     4,     2,     1,
       3,     6,     5,     8,     7,     1,     1,     3,     5,     4,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     2,     2
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
#line 43 "src/main.y" /* yacc.c:1646  */
    {root = new TreeNode(0, NODE_PROG); root->addChild((yyvsp[0]));}
#line 1578 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 46 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1584 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]); (yyvsp[-1])->addSibling((yyvsp[0]));}
#line 1590 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);}
#line 1597 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_DOMAIN;
    node->addChild((yyvsp[0]));
    (yyvsp[-3])->addChild((yyvsp[-4]));
    (yyvsp[-3])->addChild(node);
    (yyval) = (yyvsp[-3]);
    }
#line 1610 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 61 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1616 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 62 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1622 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 63 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1628 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1634 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 65 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1640 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 66 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1646 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1652 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1658 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1664 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1670 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1676 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1682 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_STMT); (yyval)->stype = STMT_SKIP;}
#line 1688 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-4])->addChild((yyvsp[-2])); (yyval)=(yyvsp[-4]);}
#line 1694 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3]);}
#line 1700 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-4])->addChild((yyvsp[-2])); (yyval)=(yyvsp[-4]);}
#line 1706 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3]);}
#line 1712 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;

    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));
    node->addChild((yyvsp[-3]));
    node->addChild(node2);
    (yyval) = node;}
#line 1727 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 97 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-5])->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;

    TreeNode* node2 = new TreeNode((yyvsp[-5])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));
    node->addChild((yyvsp[-5]));
    node->addChild(node2);

    TreeNode* node3 = new TreeNode((yyvsp[-5])->lineno, NODE_STMT);
    node3->stype = STMT_ASSIGN;

    TreeNode* node4 = new TreeNode((yyvsp[-5])->lineno, NODE_EXPR);
    node4->optype = EXPR_COMBINE;
    node4->addChild((yyvsp[-1]));
    node3->addChild((yyvsp[-3]));
    node3->addChild(node4);

    node->addChild(node3);
    (yyval) = node;
}
#line 1754 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_PLUS_ASSIGN;
    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));
    node->addChild((yyvsp[-3]));
    node->addChild(node2);
    (yyval) = node;}
#line 1768 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 128 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_MIN_ASSIGN;
    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));

    node->addChild((yyvsp[-3]));
    node->addChild(node2);
    (yyval) = node;}
#line 1783 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 138 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_TIM_ASSIGN;
    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));
    node->addChild((yyvsp[-3]));
    node->addChild(node2);
    (yyval) = node;}
#line 1797 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 147 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DIV_ASSIGN;
    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));
    node->addChild((yyvsp[-3]));
    node->addChild(node2);
    (yyval) = node;}
#line 1811 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 156 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_MOD_ASSIGN;
    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[-1]));
    node->addChild((yyvsp[-3]));
    node->addChild(node2);
    (yyval) = node;}
#line 1825 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_ELSE;
    TreeNode* node2 = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node2->addChild((yyvsp[0]));
    node->addChild(node2);
    (yyval) = node;
 }
#line 1839 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 180 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_IF;
    TreeNode* node2 = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;

    TreeNode* node3 = new TreeNode((yyvsp[-4])->lineno, NODE_EXPR);
    node3->optype = EXPR_COMBINE;

    node3->addChild((yyvsp[-2]));
    node2->addChild((yyvsp[0]));
    node->addChild(node3);
    node->addChild(node2);
    (yyval) = node;}
#line 1858 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 197 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-1])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-1]);}
#line 1864 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 201 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-12])->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    TreeNode* node2 = new TreeNode((yyvsp[-12])->lineno, NODE_STMT);
    node2->stype = STMT_ASSIGN;

    TreeNode* node3 = new TreeNode((yyvsp[-12])->lineno, NODE_EXPR);
    node3->optype = EXPR_COMBINE;
    TreeNode* node4 = new TreeNode((yyvsp[-12])->lineno, NODE_EXPR);
    node4->optype = EXPR_COMBINE;

    node->addChild((yyvsp[-10]));
    node3->addChild((yyvsp[-8]));
    node->addChild(node3);

    node2->addChild((yyvsp[-4]));
    node4->addChild((yyvsp[-2]));
    node2->addChild(node4);

    TreeNode* node5 = forNode((yyvsp[-12])->lineno, node, (yyvsp[-6]), node2, (yyvsp[0]));
    (yyval) = node5;}
#line 1890 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 222 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, nullptr, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1898 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 225 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-9])->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;

    TreeNode* node2 = new TreeNode((yyvsp[-9])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node->addChild((yyvsp[-4]));
    node2->addChild((yyvsp[-2]));
    node->addChild(node2);

    TreeNode* node3 = forNode((yyvsp[-9])->lineno, nullptr, (yyvsp[-6]), node, (yyvsp[0]));
    (yyval) = node3;}
#line 1915 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 237 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, (yyvsp[-5]), nullptr, (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1923 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 240 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, (yyvsp[-5]), (yyvsp[-3]), nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1931 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 243 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, nullptr, nullptr, (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1939 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 246 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, nullptr, (yyvsp[-3]), nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1947 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 249 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, (yyvsp[-4]), nullptr, nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1955 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 252 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-5])->lineno, nullptr, nullptr, nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1963 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 258 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_WHILE;
    TreeNode* node2 = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;

    TreeNode* node3 = new TreeNode((yyvsp[-4])->lineno, NODE_EXPR);
    node3->optype = EXPR_COMBINE;
    node3->addChild((yyvsp[-2]));
    node2->addChild((yyvsp[0]));
    node->addChild(node3);
    node->addChild(node2);
    (yyval) = node;}
#line 1981 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 274 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_VAR_INIT;

    TreeNode* node2 = new TreeNode((yyvsp[-3])->lineno, NODE_EXPR);
    node2->optype = EXPR_COMBINE;
    node2->addChild((yyvsp[0]));

    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild(node2);
    (yyval) = node;
}
#line 1999 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 287 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 2011 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 298 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 2017 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 299 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2023 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 303 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 2036 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 311 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 2047 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 317 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2053 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 318 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-7])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-7]));
    node->addChild((yyvsp[-6]));
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;
}
#line 2068 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 331 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2074 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 332 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 2080 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 336 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2086 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 337 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-2])->lineno, NODE_EXPR);
    node->optype = EXPR_COMBINE;
    node->addChild((yyvsp[-1]));
    (yyvsp[-2])->addChild(node); 
    (yyval)=(yyvsp[-2]);
    }
#line 2098 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 347 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 2111 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 355 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 2122 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 363 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2128 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 364 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]);}
#line 2134 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 367 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild((yyvsp[-5]));
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-2]));
    (yyval) = node;
}
#line 2147 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 376 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-3]));
    (yyval) = node;
}
#line 2159 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 386 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-6])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DEF;
    TreeNode* node2 = new TreeNode((yyvsp[-7])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node->addChild((yyvsp[-7]));
    node->addChild((yyvsp[-6]));
    node2->addChild((yyvsp[-4]));
    node2->addChild((yyvsp[-1]));
    node->addChild(node2);
    (yyval) = node;}
#line 2175 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 397 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-5])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DEF;
    TreeNode* node2 = new TreeNode((yyvsp[-6])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node->addChild((yyvsp[-6]));
    node->addChild((yyvsp[-5]));
    node2->addChild((yyvsp[-1]));
    node->addChild(node2);
    (yyval) = node;
}
#line 2191 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 411 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_EXPR);
    node->optype = EXPR_COMBINE;
    node->addChild((yyvsp[0]));
    (yyval)=node;
    }
#line 2202 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 420 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 2208 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 421 "src/main.y" /* yacc.c:1646  */
    { (yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 2214 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 425 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-2]));
    (yyval) = node;
}
#line 2226 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 432 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-2])->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild((yyvsp[-3]));
    (yyval) = node;
}
#line 2237 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 440 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2243 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 441 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2249 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 442 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2255 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 443 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2261 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 444 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2267 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 445 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[0]), (yyvsp[-1]), NULL); }
#line 2273 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 446 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[0]), (yyvsp[-1]), NULL); }
#line 2279 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 447 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2285 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 448 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2291 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 449 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2297 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 450 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2303 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 451 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2309 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 452 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2315 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 453 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2321 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 454 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2327 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 455 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2333 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 456 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2339 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 457 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2345 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 458 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2351 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 459 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2357 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 460 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2363 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 461 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2369 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 462 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2375 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 463 "src/main.y" /* yacc.c:1646  */
    {  (yyval) = (yyvsp[0]);}
#line 2381 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 464 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2387 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 465 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_EXPR);
    node->optype = OP_CITE;
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 2397 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 470 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_EXPR);
    node->optype = OP_POINTER;
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 2407 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 478 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_INT;}
#line 2413 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 479 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CHAR;}
#line 2419 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 480 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_BOOL;}
#line 2425 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 481 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_DOUBLE;}
#line 2431 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 482 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_VOID;}
#line 2437 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 483 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode * node = new TreeNode(lineno, NODE_EXPR); 
    node->optype = OP_POINTER;
    (yyvsp[-1])->addChild(node);
    (yyval) = (yyvsp[-1]);
    }
#line 2448 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 489 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode * node = new TreeNode(lineno, NODE_EXPR); 
    node->optype = OP_CITE;
    (yyvsp[-1])->addChild(node);
    (yyval) = (yyvsp[-1]);
    }
#line 2459 "src/main.tab.cpp" /* yacc.c:1646  */
    break;


#line 2463 "src/main.tab.cpp" /* yacc.c:1646  */
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
#line 497 "src/main.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
