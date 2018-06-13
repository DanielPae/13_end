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
    STRING = 272,
    SET = 273,
    MOVE = 274,
    SCALE = 275,
    ROTATE = 276,
    BASENAME = 277,
    SAVE_KNOBS = 278,
    TWEEN = 279,
    FRAMES = 280,
    VARY = 281,
    PUSH = 282,
    POP = 283,
    SAVE = 284,
    GENERATE_RAYFILES = 285,
    SHADING = 286,
    SHADING_TYPE = 287,
    SETKNOBS = 288,
    FOCAL = 289,
    DISPLAY = 290,
    WEB = 291,
    CO = 292
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
#define STRING 272
#define SET 273
#define MOVE 274
#define SCALE 275
#define ROTATE 276
#define BASENAME 277
#define SAVE_KNOBS 278
#define TWEEN 279
#define FRAMES 280
#define VARY 281
#define PUSH 282
#define POP 283
#define SAVE 284
#define GENERATE_RAYFILES 285
#define SHADING 286
#define SHADING_TYPE 287
#define SETKNOBS 288
#define FOCAL 289
#define DISPLAY 290
#define WEB 291
#define CO 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "mdl.y" /* yacc.c:1910  */

  double val;
  char string[255];

#line 133 "y.tab.h" /* yacc.c:1910  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
