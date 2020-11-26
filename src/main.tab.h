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
    SEMICOLON = 265,
    LB = 266,
    RB = 267,
    COMMA = 268,
    LP = 269,
    RP = 270,
    IDENTIFIER = 271,
    INTEGER = 272,
    CHAR = 273,
    BOOL = 274,
    STRING = 275,
    NUMBER = 276,
    PLUS = 277,
    MINUS = 278,
    TIMES = 279,
    DIVIDE = 280,
    MOD = 281,
    PPLUS = 282,
    MMINUS = 283,
    AND = 284,
    OR = 285,
    NOT = 286,
    EQU = 287,
    GTR = 288,
    LSS = 289,
    GEQ = 290,
    LEQ = 291,
    NEQ = 292,
    LOGICAL_AND = 293,
    LOGICAL_OR = 294,
    LOGICAL_NOT = 295,
    UMINUS = 296,
    FOR = 297,
    INPUT = 298,
    OUTPUT = 299,
    DO = 300,
    MAIN = 301,
    IF = 302,
    ELSE = 303,
    WHILE = 304,
    EOL = 305,
    LOP_EQ = 306,
    XOR = 307,
    SHIFT_LEFT = 308,
    SHIFT_RIGHT = 309
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
