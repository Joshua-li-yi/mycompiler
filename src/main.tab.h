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
    LOP_ASSIGN = 262,
    SEMICOLON = 263,
    LB = 264,
    RB = 265,
    COMMA = 266,
    LP = 267,
    RP = 268,
    IDENTIFIER = 269,
    INTEGER = 270,
    CHAR = 271,
    BOOL = 272,
    STRING = 273,
    PLUS = 274,
    MINUS = 275,
    TIMES = 276,
    OVER = 277,
    MOD = 278,
    PPLUS = 279,
    MMINUS = 280,
    AND = 281,
    OR = 282,
    XOR = 283,
    NOT = 284,
    SHIFT_LEFT = 285,
    SHIFT_RIGHT = 286,
    ASSIGN = 287,
    EQU = 288,
    GTR = 289,
    LSS = 290,
    GEQ = 291,
    LEQ = 292,
    NEQ = 293,
    LOGICAL_AND = 294,
    LOGICAL_OR = 295,
    LOGICAL_NOT = 296,
    UMINUS = 297,
    FOR = 298,
    INPUT = 299,
    OUTPUT = 300,
    ELSE = 301,
    DO = 302,
    MAIN = 303,
    IF = 304,
    WHILE = 305,
    EOL = 306,
    LOP_EQ = 307
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
