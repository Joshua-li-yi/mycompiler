/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
