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
    LRB = 286,
    RRB = 287,
    LSB = 288,
    RSB = 289,
    LCB = 290,
    RCB = 291,
    EQ = 292,
    ASSIGN = 293,
    PLUS = 294,
    MINUS = 295,
    STAR = 296,
    SLASH = 297,
    INC = 298,
    DEC = 299,
    LOG_AND = 300,
    LOG_OR = 301,
    REL_OP = 302,
    ADD_OP = 303,
    MUL_OP = 304,
    UNARY_OP = 305,
    E = 306,
    IOTA = 307,
    LETTER = 308,
    DECIMAL_DIGIT = 309
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
