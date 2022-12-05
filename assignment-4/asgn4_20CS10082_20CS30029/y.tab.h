/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    SQUARE_BRACKET_OPEN = 295,
    SQUARE_BRACKET_CLOSE = 296,
    ROUND_BRACKET_OPEN = 297,
    ROUND_BRACKET_CLOSE = 298,
    CURLY_BRACKET_OPEN = 299,
    CURLY_BRACKET_CLOSE = 300,
    DOT = 301,
    ARROW = 302,
    INCREMENT = 303,
    DECREMENT = 304,
    BITWISE_AND = 305,
    MULTIPLY = 306,
    ADD = 307,
    SUBTRACT = 308,
    BITWISE_NOT = 309,
    LOGICAL_NOT = 310,
    DIVIDE = 311,
    MODULUS = 312,
    LEFT_SHIFT = 313,
    RIGHT_SHIFT = 314,
    LESS_THAN = 315,
    GREATER_THAN = 316,
    LESS_THAN_OR_EQUAL_TO = 317,
    GREATER_THAN_OR_EQUAL_TO = 318,
    EQUAL_TO = 319,
    NOT_EQUAL_TO = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    LOGICAL_AND = 323,
    LOGICAL_OR = 324,
    QUESTION_MARK = 325,
    COLON = 326,
    SEMICOLON = 327,
    ELLIPSIS = 328,
    ASSIGNMENT = 329,
    MULTIPLY_ASSIGNMENT = 330,
    DIVIDE_ASSIGNMENT = 331,
    MODULUS_ASSIGNMENT = 332,
    ADD_ASSIGNMENT = 333,
    SUBTRACT_ASSIGNMENT = 334,
    LEFT_SHIFT_ASSIGNMENT = 335,
    RIGHT_SHIFT_ASSIGNMENT = 336,
    BITWISE_AND_ASSIGNMENT = 337,
    BITWISE_XOR_ASSIGNMENT = 338,
    BITWISE_OR_ASSIGNMENT = 339,
    COMMA = 340,
    HASH = 341,
    CONSTANT = 342,
    IDENTIFIER = 343,
    STRING_LITERAL = 344,
    ENUMERATION_CONSTANT = 345
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define SQUARE_BRACKET_OPEN 295
#define SQUARE_BRACKET_CLOSE 296
#define ROUND_BRACKET_OPEN 297
#define ROUND_BRACKET_CLOSE 298
#define CURLY_BRACKET_OPEN 299
#define CURLY_BRACKET_CLOSE 300
#define DOT 301
#define ARROW 302
#define INCREMENT 303
#define DECREMENT 304
#define BITWISE_AND 305
#define MULTIPLY 306
#define ADD 307
#define SUBTRACT 308
#define BITWISE_NOT 309
#define LOGICAL_NOT 310
#define DIVIDE 311
#define MODULUS 312
#define LEFT_SHIFT 313
#define RIGHT_SHIFT 314
#define LESS_THAN 315
#define GREATER_THAN 316
#define LESS_THAN_OR_EQUAL_TO 317
#define GREATER_THAN_OR_EQUAL_TO 318
#define EQUAL_TO 319
#define NOT_EQUAL_TO 320
#define BITWISE_XOR 321
#define BITWISE_OR 322
#define LOGICAL_AND 323
#define LOGICAL_OR 324
#define QUESTION_MARK 325
#define COLON 326
#define SEMICOLON 327
#define ELLIPSIS 328
#define ASSIGNMENT 329
#define MULTIPLY_ASSIGNMENT 330
#define DIVIDE_ASSIGNMENT 331
#define MODULUS_ASSIGNMENT 332
#define ADD_ASSIGNMENT 333
#define SUBTRACT_ASSIGNMENT 334
#define LEFT_SHIFT_ASSIGNMENT 335
#define RIGHT_SHIFT_ASSIGNMENT 336
#define BITWISE_AND_ASSIGNMENT 337
#define BITWISE_XOR_ASSIGNMENT 338
#define BITWISE_OR_ASSIGNMENT 339
#define COMMA 340
#define HASH 341
#define CONSTANT 342
#define IDENTIFIER 343
#define STRING_LITERAL 344
#define ENUMERATION_CONSTANT 345

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "asgn4_20CS10082_20CS30029.y"
    /* Placeholder for values */
    int intval;
    float floatval;
    char charval;
    char *stringval;

#line 244 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
