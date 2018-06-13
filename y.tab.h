/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    COMMENT = 258,
    DOUBLE = 259,
    LIGHT = 260,
    AMBIENT = 261,
    CONSTANTS = 262,
    SAVE_COORDS = 263,
    CAMERA = 264,
    SPHERE = 265,
    TORUS = 266,
    BOX = 267,
    LINE = 268,
    CS = 269,
    MESH = 270,
    TEXTURE = 271,
    PYRAMID = 272,
    STRING = 273,
    SET = 274,
    MOVE = 275,
    SCALE = 276,
    ROTATE = 277,
    BASENAME = 278,
    SAVE_KNOBS = 279,
    TWEEN = 280,
    FRAMES = 281,
    VARY = 282,
    PUSH = 283,
    POP = 284,
    SAVE = 285,
    GENERATE_RAYFILES = 286,
    SHADING = 287,
    SHADING_TYPE = 288,
    SETKNOBS = 289,
    FOCAL = 290,
    DISPLAY = 291,
    WEB = 292,
    CO = 293
  };
#endif
/* Tokens.  */
#define COMMENT 258
#define DOUBLE 259
#define LIGHT 260
#define AMBIENT 261
#define CONSTANTS 262
#define SAVE_COORDS 263
#define CAMERA 264
#define SPHERE 265
#define TORUS 266
#define BOX 267
#define LINE 268
#define CS 269
#define MESH 270
#define TEXTURE 271
#define PYRAMID 272
#define STRING 273
#define SET 274
#define MOVE 275
#define SCALE 276
#define ROTATE 277
#define BASENAME 278
#define SAVE_KNOBS 279
#define TWEEN 280
#define FRAMES 281
#define VARY 282
#define PUSH 283
#define POP 284
#define SAVE 285
#define GENERATE_RAYFILES 286
#define SHADING 287
#define SHADING_TYPE 288
#define SETKNOBS 289
#define FOCAL 290
#define DISPLAY 291
#define WEB 292
#define CO 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "mdl.y" /* yacc.c:1910  */

  double val;
  char string[255];

#line 135 "y.tab.h" /* yacc.c:1910  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
