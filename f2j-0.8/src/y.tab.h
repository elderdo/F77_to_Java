/* A Bison parser, made by GNU Bison 2.0.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     OP = 260,
     CP = 261,
     STAR = 262,
     POW = 263,
     DIV = 264,
     CAT = 265,
     CM = 266,
     EQ = 267,
     COLON = 268,
     NL = 269,
     NOT = 270,
     AND = 271,
     OR = 272,
     RELOP = 273,
     EQV = 274,
     NEQV = 275,
     NAME = 276,
     DOUBLE = 277,
     INTEGER = 278,
     E_EXPONENTIAL = 279,
     D_EXPONENTIAL = 280,
     CONST_EXP = 281,
     TrUE = 282,
     FaLSE = 283,
     ICON = 284,
     RCON = 285,
     LCON = 286,
     CCON = 287,
     FLOAT = 288,
     CHARACTER = 289,
     LOGICAL = 290,
     COMPLEX = 291,
     NONE = 292,
     IF = 293,
     THEN = 294,
     ELSE = 295,
     ELSEIF = 296,
     ENDIF = 297,
     DO = 298,
     GOTO = 299,
     ASSIGN = 300,
     TO = 301,
     CONTINUE = 302,
     STOP = 303,
     RDWR = 304,
     END = 305,
     ENDDO = 306,
     STRING = 307,
     CHAR = 308,
     PAUSE = 309,
     OPEN = 310,
     CLOSE = 311,
     BACKSPACE = 312,
     REWIND = 313,
     ENDFILE = 314,
     FORMAT = 315,
     PROGRAM = 316,
     FUNCTION = 317,
     SUBROUTINE = 318,
     ENTRY = 319,
     CALL = 320,
     RETURN = 321,
     ARITH_TYPE = 322,
     CHAR_TYPE = 323,
     DIMENSION = 324,
     INCLUDE = 325,
     COMMON = 326,
     EQUIVALENCE = 327,
     EXTERNAL = 328,
     PARAMETER = 329,
     INTRINSIC = 330,
     IMPLICIT = 331,
     SAVE = 332,
     DATA = 333,
     COMMENT = 334,
     READ = 335,
     WRITE = 336,
     PRINT = 337,
     FMT = 338,
     EDIT_DESC = 339,
     REPEAT = 340,
     OPEN_IOSTAT = 341,
     OPEN_ERR = 342,
     OPEN_FILE = 343,
     OPEN_STATUS = 344,
     OPEN_ACCESS = 345,
     OPEN_FORM = 346,
     OPEN_UNIT = 347,
     OPEN_RECL = 348,
     OPEN_BLANK = 349,
     LOWER_THAN_COMMENT = 350
   };
#endif
#define PLUS 258
#define MINUS 259
#define OP 260
#define CP 261
#define STAR 262
#define POW 263
#define DIV 264
#define CAT 265
#define CM 266
#define EQ 267
#define COLON 268
#define NL 269
#define NOT 270
#define AND 271
#define OR 272
#define RELOP 273
#define EQV 274
#define NEQV 275
#define NAME 276
#define DOUBLE 277
#define INTEGER 278
#define E_EXPONENTIAL 279
#define D_EXPONENTIAL 280
#define CONST_EXP 281
#define TrUE 282
#define FaLSE 283
#define ICON 284
#define RCON 285
#define LCON 286
#define CCON 287
#define FLOAT 288
#define CHARACTER 289
#define LOGICAL 290
#define COMPLEX 291
#define NONE 292
#define IF 293
#define THEN 294
#define ELSE 295
#define ELSEIF 296
#define ENDIF 297
#define DO 298
#define GOTO 299
#define ASSIGN 300
#define TO 301
#define CONTINUE 302
#define STOP 303
#define RDWR 304
#define END 305
#define ENDDO 306
#define STRING 307
#define CHAR 308
#define PAUSE 309
#define OPEN 310
#define CLOSE 311
#define BACKSPACE 312
#define REWIND 313
#define ENDFILE 314
#define FORMAT 315
#define PROGRAM 316
#define FUNCTION 317
#define SUBROUTINE 318
#define ENTRY 319
#define CALL 320
#define RETURN 321
#define ARITH_TYPE 322
#define CHAR_TYPE 323
#define DIMENSION 324
#define INCLUDE 325
#define COMMON 326
#define EQUIVALENCE 327
#define EXTERNAL 328
#define PARAMETER 329
#define INTRINSIC 330
#define IMPLICIT 331
#define SAVE 332
#define DATA 333
#define COMMENT 334
#define READ 335
#define WRITE 336
#define PRINT 337
#define FMT 338
#define EDIT_DESC 339
#define REPEAT 340
#define OPEN_IOSTAT 341
#define OPEN_ERR 342
#define OPEN_FILE 343
#define OPEN_STATUS 344
#define OPEN_ACCESS 345
#define OPEN_FORM 346
#define OPEN_UNIT 347
#define OPEN_RECL 348
#define OPEN_BLANK 349
#define LOWER_THAN_COMMENT 350




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 123 "f2jparse.y"
typedef union YYSTYPE {
   struct ast_node *ptnode;
   int tok;
   enum returntype type;
   char lexeme[80];
} YYSTYPE;
/* Line 1318 of yacc.c.  */
#line 234 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



