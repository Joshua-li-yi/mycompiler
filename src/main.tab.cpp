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
    

#line 76 "src/main.tab.cpp" /* yacc.c:339  */

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
    SCANF = 311,
    PRINTF = 312,
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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   927

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

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
       0,    41,    41,    44,    45,    46,    51,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      75,    76,    80,    81,    85,    91,    97,   103,   109,   115,
     124,   136,   148,   152,   155,   158,   161,   164,   167,   170,
     173,   176,   182,   194,   202,   212,   213,   217,   225,   231,
     235,   236,   240,   241,   245,   253,   261,   262,   265,   274,
     284,   295,   309,   310,   315,   323,   324,   328,   335,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384
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
  "OUTPUT", "DO", "MAIN", "IF", "ELSE", "WHILE", "RETURN", "SCANF",
  "PRINTF", "EOL", "LOP_EQ", "$accept", "program", "statements",
  "statement", "scanf_function", "printf_function", "assignment_stmt",
  "else_stmt", "if_stmt", "if_else_stmt", "for_stmt", "while_stmt",
  "declaration", "IDLIST", "function_declaration_id",
  "function_declaration_idlist", "function_return",
  "function_definition_id", "function_definition_idlist",
  "function_declaration", "function_definition", "function_call_id",
  "function_call_idlist", "function_call", "expr", "T", YY_NULLPTR
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

#define YYPACT_NINF -61

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,     2,     3,    26,    38,   -61,   -61,    19,   114,   -11,
       1,    25,   123,    32,    40,    21,   -61,    19,   -61,   -61,
     -61,   -29,   -61,   -61,   -61,    42,   -61,   -61,   -61,   -61,
     -18,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,    44,
     591,   591,   591,   591,   591,   591,   477,   215,   591,   591,
     -61,   591,   -61,   -61,   -61,   -61,   -61,   591,   591,   591,
      53,   495,   513,   -61,   -61,    19,   -61,   -61,     0,    46,
     -61,   -61,   262,   283,   304,   325,   346,   367,    54,    57,
      58,    80,    79,   803,   227,    90,   388,    85,   610,   635,
     660,   -26,   -26,   -26,   -61,   591,   591,   591,   591,   591,
     -61,   -61,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   117,   109,   119,   115,   -61,   591,   126,     8,
     116,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     531,   135,   169,   409,   591,   243,    -5,    19,    19,   -61,
      88,    88,   -26,   -26,   -26,   870,   854,   886,   125,   125,
     125,   125,   886,   838,   821,   -61,   145,   -61,   147,   803,
     148,   -61,    14,   149,   143,   151,   150,   144,    19,   -61,
     -61,    19,   685,   549,   430,   561,   451,   -61,   -61,   -61,
     -61,   -61,    19,    35,   156,    35,   157,   163,   -61,   -61,
      19,    19,   710,   591,    19,   735,   579,   159,   -61,   153,
     -61,   -61,   158,    19,   591,   -61,   -61,    19,   760,   -61,
      19,    19,   785,   -61,   168,   172,   165,   803,   -61,    19,
     -61,   -61,    19,   591,   591,   -61,   -61,   -61,   803,   803
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,    95,    97,    98,    99,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,    15,    16,
      18,     8,     9,    10,     7,     0,    14,    11,    12,    13,
       0,   102,   103,   100,   101,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,    90,    91,    93,    94,    92,     0,     0,     0,
       0,     0,     0,     1,     4,     0,    32,    17,    46,     0,
      44,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    62,     0,     0,     0,     0,     0,     0,
       0,    88,    78,    87,    53,     0,     0,     0,     0,     0,
      75,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    68,    64,    63,
       0,     0,     0,     0,     0,     0,    46,     0,     0,    89,
      69,    70,    71,    72,    73,    76,    77,    79,    80,    81,
      82,    83,    84,    85,    86,    21,     0,    23,     0,    43,
      46,    45,     0,    50,     0,    56,     0,    49,     0,    66,
      67,     0,     0,     0,     0,     0,     0,    31,    42,    20,
      22,    59,     0,     0,     0,     0,     0,    48,     6,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    49,
      58,    57,     0,     0,     0,    38,    39,     0,     0,    40,
       0,     0,     0,    61,    48,    55,     0,    47,    35,     0,
      36,    37,     0,     0,     0,    60,    34,    33,    47,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -61,    -7,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   138,    68,   -61,    10,   -61,   -61,    17,   -61,
     -61,   -61,   -60,   -61,     5,   -42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    66,    21,    22,
      23,    24,    25,    70,   163,   164,    26,   165,   166,    27,
      28,    81,    82,    29,    83,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,   113,   115,    68,   117,    87,   100,   101,    47,   117,
      64,     1,     2,   118,     3,     4,     5,    60,   118,   119,
      48,    63,     1,     2,    65,     3,     4,     5,   162,   181,
     182,    31,    33,    69,     6,     7,    32,    34,     1,     2,
       8,     3,     4,     5,    49,    72,    73,    74,    75,    76,
      77,    61,    86,    88,    89,    35,    90,    67,   116,    62,
      36,    71,    91,    92,    93,   120,     9,    37,    94,   127,
     169,    10,    38,    11,    12,    13,    14,   167,   128,   129,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   133,
     104,   105,   106,   107,   108,   109,   110,   111,   130,   131,
     140,   141,   142,   143,   144,   134,   136,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,    97,    98,    99,
     100,   101,   159,    40,    41,    42,    43,    44,    45,   156,
     177,   178,   155,    46,   157,   158,   168,   172,    50,   174,
     176,   199,    51,   202,    52,    53,    54,   160,    55,    56,
     170,    57,    95,    96,    97,    98,    99,   100,   101,    58,
     179,   188,   180,   184,   189,   187,   118,   183,    59,   185,
     186,   200,   204,   203,   214,   197,   213,   223,   192,   215,
     195,   224,   225,   205,   206,    85,   161,   209,    51,   171,
      52,    53,    54,   198,    55,    56,   216,    57,   208,     0,
     218,   212,   201,   220,   221,    58,     0,     0,     0,   217,
       0,     0,   226,     0,    59,   227,     0,     0,     1,     2,
       0,     3,     4,     5,     0,     0,     0,     0,   228,   229,
      84,     0,     0,     0,    51,     0,    52,    53,    54,     0,
      55,    56,   132,    57,     0,     0,    51,     0,    52,    53,
      54,    58,    55,    56,     0,    57,     0,     0,   175,     0,
      59,     0,    51,    58,    52,    53,    54,     0,    55,    56,
       0,    57,    59,     0,     0,     0,     0,   121,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   122,   104,
     105,   106,   107,   108,   109,   110,   111,     0,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   123,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     124,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   125,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   126,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   135,   104,   105,   106,   107,   108,   109,
     110,   111,     0,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   173,   104,   105,   106,   107,   108,
     109,   110,   111,     0,     0,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   193,   104,   105,   106,   107,
     108,   109,   110,   111,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   196,   104,   105,   106,
     107,   108,   109,   110,   111,     0,     0,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,    51,    78,    52,    53,
      54,     0,    55,    56,     0,    57,    79,     0,     0,     0,
       0,    80,     0,    58,    51,   112,    52,    53,    54,     0,
      55,    56,    59,    57,    79,     0,     0,     0,     0,    80,
       0,    58,    51,   114,    52,    53,    54,     0,    55,    56,
      59,    57,    79,     0,     0,     0,     0,    80,     0,    58,
      51,     0,    52,    53,    54,     0,    55,    56,    59,    57,
      79,     0,     0,     0,     0,    80,     0,    58,    51,   191,
      52,    53,    54,     0,    55,    56,    59,    57,     0,     0,
      51,   194,    52,    53,    54,    58,    55,    56,     0,    57,
       0,     0,     0,     0,    59,     0,     0,    58,    51,   211,
      52,    53,    54,     0,    55,    56,    59,    57,     0,     0,
      51,     0,    52,    53,    54,    58,    55,    56,     0,    57,
       0,     0,     0,     0,    59,     0,     0,    58,     0,     0,
     137,     0,     0,     0,     0,     0,    59,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   138,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     139,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   190,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     207,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   210,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     219,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   222,     0,     0,     0,     0,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   105,   106,   107,   108,
     109,    95,    96,    97,    98,    99,   100,   101,   102,     0,
       0,   104,   105,   106,   107,   108,   109,    95,    96,    97,
      98,    99,   100,   101,     0,     0,     0,   104,   105,   106,
     107,   108,   109,    95,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,   105,   106,   107,   108
};

static const yytype_int16 yycheck[] =
{
       7,    61,    62,    21,     9,    47,    32,    33,    19,     9,
      17,     3,     4,    18,     6,     7,     8,    12,    18,    19,
      19,     0,     3,     4,    53,     6,     7,     8,    20,    15,
      16,    29,    29,    51,    15,    16,    34,    34,     3,     4,
      21,     6,     7,     8,    19,    40,    41,    42,    43,    44,
      45,    19,    47,    48,    49,    29,    51,    15,    65,    19,
      34,    17,    57,    58,    59,    19,    47,    29,    15,    15,
     130,    52,    34,    54,    55,    56,    57,   119,    21,    21,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    84,
      37,    38,    39,    40,    41,    42,    43,    44,    18,    20,
      95,    96,    97,    98,    99,    15,    21,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    29,    30,    31,
      32,    33,   117,     9,    10,    11,    12,    13,    14,    20,
     137,   138,    15,    19,    15,    20,    20,   132,    15,   134,
     135,   183,    19,   185,    21,    22,    23,    21,    25,    26,
      15,    28,    27,    28,    29,    30,    31,    32,    33,    36,
      15,   168,    15,    20,   171,    21,    18,    18,    45,    18,
      20,    15,     9,    16,    21,   182,    17,     9,   173,    21,
     175,     9,    17,   190,   191,    47,   118,   194,    19,    20,
      21,    22,    23,   183,    25,    26,   203,    28,   193,    -1,
     207,   196,   185,   210,   211,    36,    -1,    -1,    -1,   204,
      -1,    -1,   219,    -1,    45,   222,    -1,    -1,     3,     4,
      -1,     6,     7,     8,    -1,    -1,    -1,    -1,   223,   224,
      15,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    -1,
      25,    26,    15,    28,    -1,    -1,    19,    -1,    21,    22,
      23,    36,    25,    26,    -1,    28,    -1,    -1,    15,    -1,
      45,    -1,    19,    36,    21,    22,    23,    -1,    25,    26,
      -1,    28,    45,    -1,    -1,    -1,    -1,    15,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    15,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    15,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      15,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    15,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    15,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    15,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    15,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    15,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    15,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    36,    19,    20,    21,    22,    23,    -1,
      25,    26,    45,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    36,    19,    20,    21,    22,    23,    -1,    25,    26,
      45,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    36,
      19,    -1,    21,    22,    23,    -1,    25,    26,    45,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    36,    19,    20,
      21,    22,    23,    -1,    25,    26,    45,    28,    -1,    -1,
      19,    20,    21,    22,    23,    36,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    36,    19,    20,
      21,    22,    23,    -1,    25,    26,    45,    28,    -1,    -1,
      19,    -1,    21,    22,    23,    36,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    36,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    45,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,    15,    16,    21,    47,
      52,    54,    55,    56,    57,    61,    62,    63,    64,    65,
      66,    68,    69,    70,    71,    72,    76,    79,    80,    83,
      85,    29,    34,    29,    34,    29,    34,    29,    34,    62,
       9,    10,    11,    12,    13,    14,    19,    19,    19,    19,
      15,    19,    21,    22,    23,    25,    26,    28,    36,    45,
      84,    19,    19,     0,    62,    53,    67,    15,    21,    51,
      73,    17,    84,    84,    84,    84,    84,    84,    20,    29,
      34,    81,    82,    84,    15,    72,    84,    85,    84,    84,
      84,    84,    84,    84,    15,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    37,    38,    39,    40,    41,    42,
      43,    44,    20,    82,    20,    82,    62,     9,    18,    19,
      19,    15,    15,    15,    15,    15,    15,    15,    21,    21,
      18,    20,    15,    84,    15,    15,    21,    20,    20,    20,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    15,    20,    15,    20,    84,
      21,    73,    20,    74,    75,    77,    78,    85,    20,    82,
      15,    20,    84,    15,    84,    15,    84,    62,    62,    15,
      15,    15,    16,    18,    20,    18,    20,    21,    62,    62,
      20,    20,    84,    15,    20,    84,    15,    62,    75,    85,
      15,    78,    85,    16,     9,    62,    62,    20,    84,    62,
      20,    20,    84,    17,    21,    21,    62,    84,    62,    20,
      62,    62,    20,     9,     9,    17,    62,    62,    84,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    68,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    72,    73,    73,    74,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       5,     4,     5,     4,     4,     4,     4,     4,     4,     4,
       2,     5,     2,     9,     9,     8,     8,     8,     7,     7,
       7,     6,     5,     4,     2,     3,     1,     4,     2,     1,
       1,     3,     2,     3,     4,     2,     1,     3,     6,     5,
       8,     7,     1,     2,     2,     1,     3,     5,     4,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2
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
#line 1561 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1567 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]); (yyvsp[-1])->addSibling((yyvsp[0]));}
#line 1573 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 46 "src/main.y" /* yacc.c:1646  */
    {
    (yyval)=(yyvsp[-1]);}
#line 1580 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 51 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_DOMAIN;
    node->addChild((yyvsp[0]));
    (yyvsp[-3])->addChild((yyvsp[-4]));
    (yyvsp[-3])->addChild(node);
    (yyval) = (yyvsp[-3]);
    }
#line 1593 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 59 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1599 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1605 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 61 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1611 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1617 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 63 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1623 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1629 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 65 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1635 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1641 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1647 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1653 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 69 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1659 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 70 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1665 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 71 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_STMT); (yyval)->stype = STMT_SKIP;}
#line 1671 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-4])->addChild((yyvsp[-2])); (yyval)=(yyvsp[-4]);}
#line 1677 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3]);}
#line 1683 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 80 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-4])->addChild((yyvsp[-2])); (yyval)=(yyvsp[-4]);}
#line 1689 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 81 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-3]);}
#line 1695 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 85 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1706 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_PLUS_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1717 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 97 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_MIN_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1728 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_TIM_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1739 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 109 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DIV_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1750 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 115 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_MOD_ASSIGN;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-1]));
    (yyval) = node;}
#line 1761 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_ELSE;
    TreeNode* node2 = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node2->addChild((yyvsp[0]));
    node->addChild(node2);
    (yyval) = node;
 }
#line 1775 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 136 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_IF;
    TreeNode* node2 = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node2->addChild((yyvsp[-2]));
    node2->addChild((yyvsp[0]));
    node->addChild(node2);
    (yyval) = node;}
#line 1789 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-1])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-1]);}
#line 1795 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 152 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-8])->lineno, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1803 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 155 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-8])->lineno, (yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1811 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 158 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, nullptr, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1819 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, (yyvsp[-5]), nullptr, (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1827 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 164 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-7])->lineno, (yyvsp[-5]), (yyvsp[-3]), nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1835 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 167 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, nullptr, nullptr, (yyvsp[-2]), (yyvsp[0]));
    (yyval) = node;}
#line 1843 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 170 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, nullptr, (yyvsp[-3]), nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1851 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 173 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-6])->lineno, (yyvsp[-4]), nullptr, nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1859 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 176 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = forNode((yyvsp[-5])->lineno, nullptr, nullptr, nullptr, (yyvsp[0]));
    (yyval) = node;}
#line 1867 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 182 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_WHILE;
    TreeNode* node2 = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node2->stype = STMT_DOMAIN;
    node2->addChild((yyvsp[-2]));
    node2->addChild((yyvsp[0]));
    node->addChild(node2);
    (yyval) = node;}
#line 1881 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 194 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 1894 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 1906 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 212 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 1912 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 213 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1918 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 217 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 1931 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 225 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 1942 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 231 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1948 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 235 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1954 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 236 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 1960 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 240 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1966 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 241 "src/main.y" /* yacc.c:1646  */
    {(yyvsp[-2])->addSibling((yyvsp[-1])); (yyval)=(yyvsp[-2]);}
#line 1972 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 245 "src/main.y" /* yacc.c:1646  */
    {  // declare and init
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-3]));
    node->addChild((yyvsp[-2]));
    node->addChild((yyvsp[0]));
    (yyval) = node;
}
#line 1985 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 253 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-1])->lineno, NODE_STMT);
    node->stype = STMT_DECL;
    node->addChild((yyvsp[-1]));
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 1996 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 261 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2002 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 262 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-2]);}
#line 2008 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 265 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-4])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild((yyvsp[-5]));
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-2]));
    (yyval) = node;
}
#line 2021 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 274 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_FUN_DECL;
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-3]));
    (yyval) = node;
}
#line 2033 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 284 "src/main.y" /* yacc.c:1646  */
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
#line 2049 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 295 "src/main.y" /* yacc.c:1646  */
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
#line 2065 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 309 "src/main.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2071 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 310 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_CONST);
    node->type = TYPE_CITE;
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 2081 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 315 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[0])->lineno, NODE_CONST);
    node->type = TYPE_POINT;
    node->addChild((yyvsp[0]));
    (yyval) = node;}
#line 2091 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 323 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 2097 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 324 "src/main.y" /* yacc.c:1646  */
    { (yyvsp[-2])->addSibling((yyvsp[0])); (yyval)=(yyvsp[-2]);}
#line 2103 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 328 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-3])->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild((yyvsp[-4]));
    node->addChild((yyvsp[-2]));
    (yyval) = node;
}
#line 2115 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 335 "src/main.y" /* yacc.c:1646  */
    {
    TreeNode* node = new TreeNode((yyvsp[-2])->lineno, NODE_STMT);
    node->stype = STMT_FUN_CALL;
    node->addChild((yyvsp[-3]));
    (yyval) = node;
}
#line 2126 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 343 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2132 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 344 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2138 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 345 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2144 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 346 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2150 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 347 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2156 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 348 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[0]), (yyvsp[-1]), NULL); }
#line 2162 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 349 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[0]), (yyvsp[-1]), NULL); }
#line 2168 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 350 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2174 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 351 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2180 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 352 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2186 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 353 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2192 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 354 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2198 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 355 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2204 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 356 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2210 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 357 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2216 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 358 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2222 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 359 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2228 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 360 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 2234 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 361 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2240 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 362 "src/main.y" /* yacc.c:1646  */
    { (yyval) = expNode((yyvsp[-1]), (yyvsp[0]), NULL); }
#line 2246 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 363 "src/main.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 2252 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 364 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2258 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 365 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2264 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 366 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2270 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 367 "src/main.y" /* yacc.c:1646  */
    {  (yyval) = (yyvsp[0]);}
#line 2276 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 368 "src/main.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2282 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 372 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_INT;}
#line 2288 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 373 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CHAR;}
#line 2294 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 374 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_BOOL;}
#line 2300 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 375 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_DOUBLE;}
#line 2306 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 376 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_VOID;}
#line 2312 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 377 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_POINT;}
#line 2318 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 378 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CITE;}
#line 2324 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 379 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_POINT;}
#line 2330 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 380 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CITE;}
#line 2336 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 381 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_POINT;}
#line 2342 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 382 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CITE;}
#line 2348 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 383 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_POINT;}
#line 2354 "src/main.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 384 "src/main.y" /* yacc.c:1646  */
    {(yyval) = new TreeNode(lineno, NODE_TYPE); (yyval)->type = TYPE_CITE;}
#line 2360 "src/main.tab.cpp" /* yacc.c:1646  */
    break;


#line 2364 "src/main.tab.cpp" /* yacc.c:1646  */
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
#line 387 "src/main.y" /* yacc.c:1906  */


int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
