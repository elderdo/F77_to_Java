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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 8 "f2jparse.y"


/*****************************************************************************
 * f2jparse                                                                  *
 *                                                                           *
 * This is a yacc parser for a subset of Fortran 77.  It builds an AST       *
 * which is used by codegen() to generate Java code.                         *
 *                                                                           *
 *****************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include"f2j.h"
#include"f2j_externs.h"
#include"f2jmem.h"

/*****************************************************************************
 * Define YYDEBUG as 1 to get debugging output from yacc.                    *
 *****************************************************************************/

#define YYDEBUG 0

/*****************************************************************************
 * Global variables.                                                         *
 *****************************************************************************/

int 
  debug = FALSE,                  /* set to TRUE for debugging output        */
  emittem = 1,                    /* set to 1 to emit Java, 0 to just parse  */
  len = 1,                        /* keeps track of the size of a data type  */
  temptok,                        /* temporary token for an inline expr      */
  save_all,                       /* is there a SAVE stmt without a var list */
  cur_do_label;                   /* current 'do..end do' loop label         */
  
char
  tempname[60];                   /* temporary string                        */

AST 
  * unit_args = NULL,             /* pointer to args for this program unit   */
  * equivList = NULL;             /* list to keep track of equivalences      */

Dlist 
  assign_labels,                  /* labels used in ASSIGN TO statements     */
  subroutine_names,               /* holds the names of subroutines          */
  do_labels;                      /* generated labels for 'do..end do' loops */

enum returntype
  typedec_context;                /* what kind of type dec we are parsing    */

/*****************************************************************************
 * Function prototypes:                                                      *
 *****************************************************************************/

METHODTAB
  * methodscan (METHODTAB *, char *);

int 
  yylex(void),
  intrinsic_or_implicit(char *),
  in_dlist_stmt_label(Dlist, AST *),
  in_dlist(Dlist, char *);

double
  eval_const_expr(AST *);

char 
  * lowercase(char * ),
  * first_char_is_minus(char *),
  * tok2str(int );

void
  yyerror(char *),
  start_vcg(AST *),
  emit(AST *),
  jas_emit(AST *),
  init_tables(void),
  addEquiv(AST *),
  assign(AST *),
  typecheck(AST *),
  optScalar(AST *),
  type_insert (SYMTABLE * , AST * , enum returntype , char *),
  type_hash(AST *),
  merge_common_blocks(AST *),
  arg_table_load(AST *),
  exp_to_double (char *, char *),
  prepend_minus(char *),
  assign_function_return_type(AST *, AST *),
  insert_name(SYMTABLE *, AST *, enum returntype),
  store_array_var(AST *),
  initialize_implicit_table(ITAB_ENTRY *),
  printbits(char *, void *, int),
  print_sym_table_names(SYMTABLE *);

AST 
  * dl_astnode_examine(Dlist l),
  * addnode(void),
  * switchem(AST *),
  * gen_incr_expr(AST *, AST *),
  * gen_iter_expr(AST *, AST *, AST *),
  * initialize_name(char *),
  * process_typestmt(enum returntype, AST *),
  * process_array_declaration(AST *, AST *),
  * process_subroutine_call(AST *, AST *);

SYMTABLE 
  * new_symtable (int );

extern METHODTAB intrinsic_toks[];

ITAB_ENTRY implicit_table[26];



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 123 "f2jparse.y"
typedef union YYSTYPE {
   struct ast_node *ptnode;
   int tok;
   enum returntype type;
   char lexeme[80];
} YYSTYPE;
/* Line 190 of yacc.c.  */
#line 388 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 213 of yacc.c.  */
#line 400 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1210

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  136
/* YYNRULES -- Number of rules. */
#define YYNRULES  304
/* YYNRULES -- Number of states. */
#define YYNSTATES  582

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    96,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      23,    28,    33,    37,    42,    46,    52,    57,    59,    61,
      64,    66,    68,    70,    72,    74,    76,    78,    80,    82,
      85,    87,    91,    95,    97,   101,   105,   111,   113,   117,
     121,   123,   126,   131,   134,   137,   143,   147,   151,   155,
     157,   161,   166,   168,   172,   174,   178,   181,   183,   187,
     192,   194,   198,   200,   204,   206,   208,   211,   213,   217,
     219,   227,   231,   237,   239,   242,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   290,   296,
     300,   302,   306,   308,   312,   316,   320,   324,   328,   332,
     336,   340,   342,   344,   346,   348,   350,   355,   361,   365,
     368,   372,   373,   378,   381,   383,   387,   391,   395,   397,
     401,   403,   405,   409,   415,   417,   419,   421,   423,   425,
     427,   431,   433,   437,   439,   441,   445,   447,   451,   457,
     459,   461,   463,   465,   469,   471,   473,   478,   480,   484,
     486,   488,   492,   494,   500,   504,   506,   511,   513,   515,
     519,   522,   525,   529,   531,   536,   543,   546,   550,   555,
     557,   560,   562,   564,   566,   568,   570,   574,   578,   580,
     582,   584,   586,   588,   590,   592,   595,   599,   602,   611,
     616,   621,   626,   629,   630,   632,   634,   638,   640,   644,
     646,   650,   654,   663,   674,   676,   680,   681,   683,   693,
     705,   709,   721,   722,   724,   725,   727,   730,   738,   739,
     743,   746,   748,   754,   765,   770,   777,   783,   789,   794,
     796,   800,   801,   805,   809,   811,   815,   819,   821,   825,
     827,   831,   833,   836,   838,   839,   844,   846,   849,   852,
     856,   860,   862,   866,   870,   872,   876,   878,   882,   884,
     886,   888,   890,   894,   896,   898,   900,   902,   904,   906,
     908,   910,   912,   914,   916,   918,   920,   923,   926,   930,
     933,   937,   941,   948,   956,   963,   971,   975,   977,   981,
     987,   989,   993,   995,   999
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      98,     0,    -1,    99,    -1,   100,    -1,    99,   100,    -1,
     101,    -1,   102,    -1,   103,    -1,   135,    -1,   104,   107,
     133,   144,    -1,   105,   107,   133,   144,    -1,   106,   107,
     133,   144,    -1,    61,   160,    14,    -1,    63,   160,   145,
      14,    -1,    63,   160,    14,    -1,   153,    62,   160,   145,
      14,    -1,    62,   160,   145,    14,    -1,   108,    -1,   109,
      -1,   108,   109,    -1,   110,    -1,   112,    -1,   115,    -1,
     118,    -1,   232,    -1,   148,    -1,   231,    -1,   228,    -1,
     119,    -1,   124,    14,    -1,   135,    -1,    69,   111,    14,
      -1,   163,    11,   111,    -1,   163,    -1,    72,   113,    14,
      -1,     5,   114,     6,    -1,   113,    11,     5,   114,     6,
      -1,   169,    -1,   114,    11,   169,    -1,    71,   116,    14,
      -1,   117,    -1,   116,   117,    -1,     9,   160,     9,   155,
      -1,    10,   155,    -1,    77,    14,    -1,    77,     9,   147,
       9,    14,    -1,    77,   147,    14,    -1,    76,   120,    14,
      -1,    76,    37,    14,    -1,   121,    -1,   120,    11,   121,
      -1,   154,     5,   122,     6,    -1,   123,    -1,   122,    11,
     123,    -1,   160,    -1,   160,     4,   160,    -1,    78,   125,
      -1,   126,    -1,   125,    11,   126,    -1,   130,     9,   127,
       9,    -1,   128,    -1,   127,    11,   128,    -1,   129,    -1,
     129,     7,   129,    -1,   216,    -1,   160,    -1,     4,   216,
      -1,   131,    -1,   130,    11,   131,    -1,   169,    -1,     5,
     169,    11,   160,    12,   132,     6,    -1,   217,    11,   217,
      -1,   217,    11,   217,    11,   217,    -1,   134,    -1,   133,
     134,    -1,   168,    14,    -1,   203,    -1,   167,    -1,   198,
      -1,   199,    -1,   192,    -1,   171,    -1,   221,    -1,   226,
      -1,   225,    -1,   224,    -1,   174,    -1,   183,    -1,   182,
      -1,   184,    -1,   188,    -1,   223,    -1,   222,    -1,   136,
      -1,   142,    -1,   135,    -1,   143,    -1,    79,    14,    -1,
      55,     5,   137,     6,    14,    -1,   137,    11,   138,    -1,
     138,    -1,    92,    12,   139,    -1,   139,    -1,    86,    12,
     141,    -1,    87,    12,   217,    -1,    88,    12,   140,    -1,
      89,    12,   140,    -1,    90,    12,   140,    -1,    91,    12,
     140,    -1,    93,    12,   204,    -1,    94,    12,   140,    -1,
     204,    -1,     7,    -1,   160,    -1,   162,    -1,   160,    -1,
     160,     5,   170,     6,    -1,    56,     5,   160,     6,    14,
      -1,    58,   160,    14,    -1,    50,    14,    -1,   217,    50,
      14,    -1,    -1,     5,   146,   147,     6,    -1,     5,     6,
      -1,   159,    -1,   147,    11,   159,    -1,   149,   155,    14,
      -1,   151,   157,    14,    -1,   150,    -1,   150,   166,   217,
      -1,    67,    -1,   152,    -1,   152,   166,   217,    -1,   152,
     166,     5,   166,     6,    -1,    68,    -1,   150,    -1,   152,
      -1,   149,    -1,   151,    -1,   156,    -1,   155,    11,   156,
      -1,   159,    -1,   159,   166,   217,    -1,   163,    -1,   158,
      -1,   157,    11,   158,    -1,   159,    -1,   159,   166,   217,
      -1,   159,   166,     5,   166,     6,    -1,   163,    -1,    21,
      -1,    21,    -1,   160,    -1,   161,    11,   160,    -1,    52,
      -1,    53,    -1,   159,     5,   164,     6,    -1,   165,    -1,
     164,    11,   165,    -1,   204,    -1,   166,    -1,   204,    13,
     204,    -1,     7,    -1,    45,   217,    46,   159,    14,    -1,
     169,    12,   204,    -1,   159,    -1,   159,     5,   170,     6,
      -1,   201,    -1,   204,    -1,   170,    11,   204,    -1,   172,
     173,    -1,    43,   217,    -1,    43,   217,    11,    -1,    43,
      -1,   168,    11,   204,    14,    -1,   168,    11,   204,    11,
     204,    14,    -1,   217,   134,    -1,   217,   175,    14,    -1,
      60,     5,   176,     6,    -1,   177,    -1,   176,   177,    -1,
     178,    -1,   179,    -1,   180,    -1,    84,    -1,   160,    -1,
     160,    96,   216,    -1,     5,   176,     6,    -1,   162,    -1,
     181,    -1,    11,    -1,     9,    -1,    10,    -1,    13,    -1,
     217,    -1,     3,   217,    -1,   217,    47,    14,    -1,    51,
      14,    -1,    81,     5,   186,    11,   187,     6,   189,    14,
      -1,    82,   217,   185,    14,    -1,    82,     7,   185,    14,
      -1,    82,   162,   185,    14,    -1,    11,   189,    -1,    -1,
     204,    -1,     7,    -1,    83,    12,   217,    -1,   217,    -1,
      83,    12,     7,    -1,     7,    -1,    83,    12,   162,    -1,
      83,    12,   160,    -1,    80,     5,   186,    11,   187,     6,
     189,    14,    -1,    80,     5,   186,    11,   187,    11,   191,
       6,   189,    14,    -1,   190,    -1,   189,    11,   190,    -1,
      -1,   204,    -1,     5,   202,    11,   159,    12,   204,    11,
     204,     6,    -1,     5,   202,    11,   159,    12,   204,    11,
     204,    11,   204,     6,    -1,    50,    12,   217,    -1,    38,
       5,   204,     6,    39,    14,   193,   194,   196,   197,    14,
      -1,    -1,   133,    -1,    -1,   195,    -1,   194,   195,    -1,
      41,     5,   204,     6,    39,    14,   133,    -1,    -1,    40,
      14,   133,    -1,    40,    14,    -1,    42,    -1,    38,     5,
     204,     6,   134,    -1,    38,     5,   204,     6,   217,    11,
     217,    11,   217,    14,    -1,   159,     5,   202,     6,    -1,
     159,     5,   204,    13,   204,     6,    -1,   159,     5,    13,
     204,     6,    -1,   159,     5,   204,    13,     6,    -1,   159,
       5,    13,     6,    -1,   204,    -1,   202,    11,   204,    -1,
      -1,    65,   200,    14,    -1,    65,   160,    14,    -1,   205,
      -1,   204,    19,   205,    -1,   204,    20,   205,    -1,   206,
      -1,   205,    17,   206,    -1,   207,    -1,   206,    16,   207,
      -1,   208,    -1,    15,   208,    -1,   210,    -1,    -1,   208,
      18,   209,   208,    -1,   211,    -1,     4,   211,    -1,     3,
     211,    -1,   210,     3,   211,    -1,   210,     4,   211,    -1,
     212,    -1,   211,     9,   212,    -1,   211,     7,   212,    -1,
     213,    -1,   213,     8,   212,    -1,   214,    -1,   213,    10,
     214,    -1,   159,    -1,   216,    -1,   200,    -1,   201,    -1,
       5,   204,     6,    -1,    27,    -1,    28,    -1,   217,    -1,
     219,    -1,   218,    -1,   220,    -1,   215,    -1,   162,    -1,
      23,    -1,    22,    -1,    33,    -1,    24,    -1,    25,    -1,
      66,    14,    -1,    54,    14,    -1,    54,   162,    14,    -1,
      48,    14,    -1,    48,   162,    14,    -1,    44,   217,    14,
      -1,    44,     5,   227,     6,   204,    14,    -1,    44,     5,
     227,     6,    11,   204,    14,    -1,    44,   159,     5,   227,
       6,    14,    -1,    44,   159,    11,     5,   227,     6,    14,
      -1,    44,   159,    14,    -1,   217,    -1,   227,    11,   217,
      -1,    74,     5,   229,     6,    14,    -1,   230,    -1,   229,
      11,   230,    -1,   168,    -1,    73,   161,    14,    -1,    75,
     161,    14,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   203,   203,   247,   266,   288,   294,   300,   306,   314,
     373,   448,   525,   546,   565,   585,   615,   642,   670,   674,
     681,   685,   689,   693,   697,   701,   705,   709,   713,   717,
     721,   727,   738,   744,   755,   765,   780,   797,   801,   808,
     819,   823,   830,   866,   901,   913,   932,   953,   959,   968,
     972,   978,  1017,  1021,  1028,  1035,  1044,  1053,  1057,  1064,
    1092,  1096,  1103,  1107,  1123,  1127,  1145,  1152,  1156,  1163,
    1167,  1177,  1187,  1206,  1210,  1217,  1222,  1227,  1232,  1237,
    1242,  1247,  1252,  1257,  1262,  1267,  1272,  1277,  1282,  1287,
    1292,  1297,  1302,  1307,  1312,  1317,  1322,  1329,  1339,  1348,
    1350,  1354,  1359,  1364,  1369,  1374,  1379,  1384,  1389,  1394,
    1399,  1406,  1411,  1418,  1420,  1424,  1426,  1430,  1437,  1444,
    1451,  1481,  1481,  1490,  1501,  1508,  1525,  1529,  1535,  1540,
    1549,  1556,  1561,  1568,  1577,  1584,  1588,  1594,  1598,  1610,
    1617,  1625,  1630,  1635,  1642,  1649,  1657,  1662,  1667,  1672,
    1692,  1753,  1774,  1778,  1785,  1796,  1809,  1815,  1829,  1841,
    1845,  1849,  1863,  1871,  1896,  1909,  1915,  1951,  1957,  1964,
    1976,  1985,  1990,  1994,  2019,  2033,  2055,  2065,  2095,  2103,
    2113,  2135,  2139,  2143,  2149,  2155,  2159,  2166,  2177,  2181,
    2188,  2193,  2198,  2203,  2210,  2214,  2229,  2240,  2254,  2296,
    2311,  2325,  2341,  2346,  2354,  2359,  2371,  2375,  2379,  2387,
    2395,  2399,  2411,  2453,  2499,  2506,  2513,  2518,  2522,  2543,
    2567,  2581,  2608,  2609,  2615,  2616,  2620,  2628,  2640,  2641,
    2648,  2654,  2667,  2677,  2707,  2713,  2728,  2742,  2756,  2781,
    2791,  2798,  2806,  2828,  2844,  2848,  2860,  2874,  2878,  2892,
    2896,  2910,  2914,  2925,  2929,  2929,  2943,  2947,  2963,  2978,
    2992,  3008,  3012,  3026,  3043,  3047,  3059,  3063,  3079,  3080,
    3085,  3086,  3087,  3107,  3115,  3127,  3131,  3135,  3139,  3143,
    3147,  3153,  3164,  3174,  3202,  3212,  3225,  3231,  3237,  3244,
    3250,  3257,  3269,  3280,  3293,  3304,  3315,  3327,  3331,  3338,
    3348,  3352,  3359,  3449,  3460
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "OP", "CP", "STAR",
  "POW", "DIV", "CAT", "CM", "EQ", "COLON", "NL", "NOT", "AND", "OR",
  "RELOP", "EQV", "NEQV", "NAME", "DOUBLE", "INTEGER", "E_EXPONENTIAL",
  "D_EXPONENTIAL", "CONST_EXP", "TrUE", "FaLSE", "ICON", "RCON", "LCON",
  "CCON", "FLOAT", "CHARACTER", "LOGICAL", "COMPLEX", "NONE", "IF", "THEN",
  "ELSE", "ELSEIF", "ENDIF", "DO", "GOTO", "ASSIGN", "TO", "CONTINUE",
  "STOP", "RDWR", "END", "ENDDO", "STRING", "CHAR", "PAUSE", "OPEN",
  "CLOSE", "BACKSPACE", "REWIND", "ENDFILE", "FORMAT", "PROGRAM",
  "FUNCTION", "SUBROUTINE", "ENTRY", "CALL", "RETURN", "ARITH_TYPE",
  "CHAR_TYPE", "DIMENSION", "INCLUDE", "COMMON", "EQUIVALENCE", "EXTERNAL",
  "PARAMETER", "INTRINSIC", "IMPLICIT", "SAVE", "DATA", "COMMENT", "READ",
  "WRITE", "PRINT", "FMT", "EDIT_DESC", "REPEAT", "OPEN_IOSTAT",
  "OPEN_ERR", "OPEN_FILE", "OPEN_STATUS", "OPEN_ACCESS", "OPEN_FORM",
  "OPEN_UNIT", "OPEN_RECL", "OPEN_BLANK", "LOWER_THAN_COMMENT", "'.'",
  "$accept", "F2java", "Sourcecodes", "Sourcecode", "Fprogram",
  "Fsubroutine", "Ffunction", "Program", "Subroutine", "Function",
  "Specstmts", "SpecStmtList", "Specstmt", "Dimension", "ArraydecList",
  "EquivalenceStmt", "EquivalenceList", "EquivalenceItem", "Common",
  "CommonList", "CommonSpec", "Save", "Implicit", "ImplicitSpecList",
  "ImplicitSpecItem", "ImplicitLetterList", "ImplicitLetter", "Data",
  "DataList", "DataItem", "DataConstantList", "DataConstantExpr",
  "DataConstant", "LhsList", "DataLhs", "LoopBounds", "Statements",
  "Statement", "Comment", "Open", "Olist", "OlistItem", "UnitSpec",
  "CharExp", "Ios", "Close", "Rewind", "End", "Functionargs", "@1",
  "Namelist", "Typestmt", "ArithTypes", "ArithSimpleType", "CharTypes",
  "CharSimpleType", "AnySimpleType", "AnyTypes", "ArithTypevarlist",
  "ArithTypevar", "CharTypevarlist", "CharTypevar", "Name",
  "UndeclaredName", "UndeclaredNamelist", "String", "Arraydeclaration",
  "Arraynamelist", "Arrayname", "Star", "StmtLabelAssign", "Assignment",
  "Lhs", "Arrayindexlist", "Doloop", "Do_incr", "Do_vals", "Label",
  "Format", "FormatExplist", "FormatExp", "RepeatableItem",
  "UnRepeatableItem", "FormatSeparator", "RepeatSpec", "Continue", "EndDo",
  "Write", "PrintIoList", "WriteFileDesc", "FormatSpec", "Read",
  "IoExplist", "IoExp", "EndSpec", "Blockif", "IfBlock", "Elseifs",
  "Elseif", "Else", "EndIf", "Logicalif", "Arithmeticif", "Subroutinecall",
  "SubstringOp", "Explist", "Call", "Exp", "log_disjunct", "log_term",
  "log_factor", "log_primary", "@2", "arith_expr", "term", "factor",
  "char_expr", "primary", "Boolean", "Constant", "Integer", "Double",
  "Float", "Exponential", "Return", "Pause", "Stop", "Goto",
  "ComputedGoto", "AssignedGoto", "Intlist", "Parameter", "Pdecs", "Pdec",
  "External", "Intrinsic", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    97,    98,    99,    99,   100,   100,   100,   100,   101,
     102,   103,   104,   105,   105,   106,   106,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   111,   111,   112,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   118,   118,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   124,   125,   125,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   135,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   143,   144,
     144,   146,   145,   145,   147,   147,   148,   148,   149,   149,
     150,   151,   151,   151,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   156,   157,   157,   158,   158,   158,   158,
     159,   160,   161,   161,   162,   162,   163,   164,   164,   165,
     165,   165,   166,   167,   168,   169,   169,   169,   170,   170,
     171,   172,   172,   172,   173,   173,   174,   174,   175,   176,
     176,   177,   177,   177,   178,   178,   178,   178,   179,   179,
     180,   180,   180,   180,   181,   181,   182,   183,   184,   184,
     184,   184,   185,   185,   186,   186,   187,   187,   187,   187,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   190,
     191,   192,   193,   193,   194,   194,   194,   195,   196,   196,
     196,   197,   198,   199,   200,   201,   201,   201,   201,   202,
     202,   202,   203,   203,   204,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   209,   208,   210,   210,   210,   210,
     210,   211,   211,   211,   212,   212,   213,   213,   214,   214,
     214,   214,   214,   215,   215,   216,   216,   216,   216,   216,
     216,   217,   218,   219,   220,   220,   221,   222,   222,   223,
     223,   224,   225,   225,   226,   226,   226,   227,   227,   228,
     229,   229,   230,   231,   232
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     4,
       4,     4,     3,     4,     3,     5,     4,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     1,     3,     3,     5,     1,     3,     3,
       1,     2,     4,     2,     2,     5,     3,     3,     3,     1,
       3,     4,     1,     3,     1,     3,     2,     1,     3,     4,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     1,
       7,     3,     5,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     4,     5,     3,     2,
       3,     0,     4,     2,     1,     3,     3,     3,     1,     3,
       1,     1,     3,     5,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     3,     1,     3,     5,     1,
       1,     1,     1,     3,     1,     1,     4,     1,     3,     1,
       1,     3,     1,     5,     3,     1,     4,     1,     1,     3,
       2,     2,     3,     1,     4,     6,     2,     3,     4,     1,
       2,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     8,     4,
       4,     4,     2,     0,     1,     1,     3,     1,     3,     1,
       3,     3,     8,    10,     1,     3,     0,     1,     9,    11,
       3,    11,     0,     1,     0,     1,     2,     7,     0,     3,
       2,     1,     5,    10,     4,     6,     5,     5,     4,     1,
       3,     0,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     2,     1,     0,     4,     1,     2,     2,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       3,     3,     6,     7,     6,     7,     3,     1,     3,     5,
       1,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,   130,   134,     0,     0,     2,     3,
       5,     6,     7,     0,     0,     0,     8,   135,   136,     0,
     151,     0,     0,     0,    97,     1,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,    20,
      21,    22,    23,    28,     0,    30,    25,     0,   128,     0,
     131,    27,    26,    24,     0,     0,     0,    12,   121,     0,
      14,     0,   150,     0,     0,    33,     0,     0,     0,    40,
       0,     0,   152,     0,     0,     0,     0,     0,    49,   137,
     138,     0,     0,    44,     0,   124,     0,    56,    57,     0,
      67,   165,    69,   167,   281,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    95,    93,    94,    96,    77,     0,     0,    81,
       0,    86,    88,    87,    89,    90,    80,    78,    79,    76,
       0,    82,    92,    91,    85,    84,    83,    19,    29,     0,
     139,   141,   143,   162,     0,     0,   144,   146,   149,     0,
       0,     0,     0,   123,     0,    16,    13,    31,     0,     0,
       0,    43,    39,    41,     0,    37,     0,    34,     0,   303,
     302,     0,   300,   304,    48,     0,    47,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,   171,     0,     0,
       0,     0,   289,   154,   155,     0,   197,   287,     0,     0,
       0,     0,   150,     0,     0,     0,   286,     0,     0,   203,
     203,   203,     0,    74,     9,     0,    75,     0,     0,   170,
       0,     0,   176,     0,     0,   126,     0,   129,     0,   127,
       0,     0,   132,    10,    11,     0,     0,     0,     0,     0,
       0,   282,   284,   285,   273,   274,   283,   268,   280,     0,
     157,   160,   270,   271,   159,   244,   247,   249,   251,   253,
     256,   261,   264,   266,   279,   269,   275,   277,   276,   278,
      32,     0,    35,     0,     0,   153,     0,     0,    50,     0,
      52,    54,     0,   125,     0,    58,     0,     0,    60,    62,
      65,    64,    68,     0,     0,   168,     0,   172,   297,     0,
       0,     0,   296,   291,     0,   290,   288,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   102,
     111,     0,   118,   241,   243,   242,   205,     0,   204,     0,
     216,     0,     0,     0,   119,     0,   164,     0,   196,     0,
     177,   140,   142,   145,     0,   147,     0,    15,   122,   258,
     257,     0,   252,   241,   156,     0,     0,     0,     0,     0,
       0,   254,     0,     0,     0,     0,     0,     0,    42,    38,
       0,   299,   301,    51,     0,     0,    45,     0,    66,    59,
       0,     0,   238,     0,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,     0,     0,   241,
     202,   214,   217,   200,   201,   199,   120,     0,     0,     0,
     191,   192,   190,   193,   184,   185,   188,     0,   179,   181,
     182,   183,   189,   194,     0,   133,   272,   239,   158,   161,
     245,   246,   248,   250,     0,   259,   260,   263,   262,   265,
     267,    36,    53,    55,     0,    61,    63,   236,   169,   237,
       0,     0,   232,     0,     0,     0,   298,     0,     0,   163,
     103,   115,   104,   105,   113,   114,   106,   107,   108,   101,
     109,   110,    98,    99,   117,   234,     0,   209,     0,     0,
     207,     0,     0,   239,     0,     0,   174,   195,     0,     0,
     178,   180,   148,   255,     0,     0,   235,   222,     0,     0,
     292,   294,     0,     0,   240,     0,   216,     0,   216,     0,
     215,     0,   187,   186,    70,     0,   223,   224,     0,   293,
     295,     0,   168,   208,   211,   210,   206,     0,     0,     0,
       0,   268,   175,    71,     0,   228,   225,     0,   116,   212,
       0,   216,   198,     0,     0,     0,     0,   226,     0,     0,
     220,     0,     0,    72,     0,   230,   231,     0,   233,   213,
       0,     0,   229,   221,     0,     0,   218,     0,     0,     0,
     227,   219
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      36,    37,    38,    39,    63,    40,    71,   164,    41,    68,
      69,    42,    43,    77,    78,   279,   280,    44,    87,    88,
     287,   288,   289,    89,    90,   504,   110,   111,   112,   113,
     317,   318,   319,   473,   470,   114,   115,   214,    59,   154,
      84,    46,    47,    48,    49,    50,    19,    81,   139,   140,
     145,   146,   247,   474,    73,   248,   142,   249,   250,   251,
     116,   117,   118,   294,   119,   120,   219,   121,   223,   427,
     428,   429,   430,   431,   432,   122,   123,   124,   331,   327,
     489,   125,   410,   411,   539,   126,   527,   545,   546,   558,
     567,   127,   128,   252,   253,   405,   129,   412,   255,   256,
     257,   258,   444,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   131,   132,   133,   134,   135,   136,
     299,    51,   171,   172,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -457
static const short int yypact[] =
{
      82,    86,    86,    86,  -457,  -457,    24,   122,    82,  -457,
    -457,  -457,  -457,   543,   543,   543,  -457,  -457,  -457,    84,
    -457,   196,   240,   112,  -457,  -457,  -457,   250,   101,   271,
      86,   285,    86,    17,   104,    60,   822,   543,  -457,  -457,
    -457,  -457,  -457,  -457,   289,  -457,  -457,   250,   300,   250,
     300,  -457,  -457,  -457,   822,   822,    86,  -457,   308,   310,
    -457,   359,  -457,   363,   397,   406,    86,   250,   291,  -457,
     250,   198,  -457,   251,   250,   272,   409,   320,  -457,  -457,
    -457,   403,   250,  -457,   341,  -457,   250,   428,  -457,    83,
    -457,   425,  -457,  -457,  -457,   429,   421,    66,   421,    47,
     414,    52,   444,   448,    86,   434,   445,   456,   457,    27,
     757,  -457,  -457,  -457,  -457,  -457,  -457,   450,   454,  -457,
     250,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
     717,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,   390,
    -457,   318,  -457,  -457,   421,   395,  -457,   318,  -457,    40,
     757,   757,   240,  -457,   250,  -457,  -457,  -457,   572,   250,
     462,   461,  -457,  -457,    61,  -457,   468,  -457,    86,  -457,
    -457,   176,  -457,  -457,  -457,   131,  -457,    86,   376,   250,
    -457,   463,    60,   245,    60,   892,  1090,   465,   421,   219,
     467,   431,  -457,  -457,  -457,   473,  -457,  -457,   474,   305,
      86,   477,   479,   491,   484,   486,  -457,   925,   925,   471,
     471,   471,   487,  -457,  -457,   671,  -457,  1090,   494,  -457,
     488,   501,  -457,   493,   250,  -457,   421,  -457,   250,  -457,
      63,   300,  -457,  -457,  -457,   495,   185,  1157,  1157,  1090,
    1136,  -457,  -457,  -457,  -457,  -457,  -457,   503,  -457,   194,
    -457,  -457,  -457,  -457,   215,   496,   498,  -457,   497,   340,
     417,  -457,   419,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,   250,  -457,   250,   250,  -457,   504,   250,  -457,   252,
    -457,   475,   505,  -457,    86,  -457,   326,   422,  -457,   513,
    -457,  -457,  -457,   958,   329,   223,    96,  -457,  -457,   331,
     421,   517,  -457,  -457,   250,  -457,  -457,  -457,   511,   512,
     514,   516,   519,   520,   521,   522,   523,   335,  -457,  -457,
     144,   530,  -457,  1090,  -457,  -457,  -457,   526,   144,   529,
    1123,   528,   532,   533,  -457,   534,   144,  1090,  -457,   437,
    -457,  -457,  -457,  -457,   300,  -457,   538,  -457,  -457,   417,
     417,   100,   497,   892,  -457,   572,  1090,  1090,  1090,  1090,
    1090,  -457,  1157,  1157,  1157,  1157,  1157,  1157,   461,  -457,
     350,  -457,  -457,  -457,    86,    86,  -457,   537,  -457,  -457,
     245,   245,  -457,   134,  -457,  1090,   991,   803,  1024,   421,
     357,   421,   540,    86,   421,    21,    21,    21,    21,  1057,
    1090,    21,   547,   305,   548,   369,   144,    18,    18,  1090,
     541,  -457,   144,  -457,  -457,  -457,  -457,   164,   421,   437,
    -457,  -457,  -457,  -457,  -457,   469,  -457,   208,  -457,  -457,
    -457,  -457,  -457,  -457,   558,  -457,  -457,   223,  -457,   144,
     496,   496,   498,  -457,  1136,   417,   417,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,   421,  -457,  -457,  -457,   144,  -457,
     150,   552,  -457,   622,  1090,   234,  -457,   553,   375,  -457,
    -457,   563,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
     144,  -457,  -457,  -457,  -457,  -457,  1090,  -457,   557,   377,
    -457,   564,   560,   100,  1123,  1090,  -457,  -457,   361,   326,
    -457,  -457,  -457,   554,   567,   569,  -457,   822,   421,   261,
    -457,  -457,   568,  1090,   144,    23,  1123,   531,  1123,  1090,
    -457,   265,  -457,  -457,  -457,   421,   822,   544,   575,  -457,
    -457,   394,   144,  -457,  -457,  -457,  -457,   396,   566,   582,
     405,   146,  -457,   587,   601,   182,  -457,   421,  -457,  -457,
     421,  1123,  -457,  1090,   421,  1090,   594,  -457,   585,   595,
    -457,   411,   160,  -457,   170,   822,  -457,   614,  -457,  -457,
    1090,   590,   822,  -457,    71,   617,  -457,  1090,   822,   175,
     822,  -457
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -457,  -457,  -457,   624,  -457,  -457,  -457,  -457,  -457,  -457,
     423,  -457,   598,  -457,   478,  -457,  -457,   362,  -457,  -457,
     570,  -457,  -457,  -457,   464,  -457,   266,  -457,  -457,   460,
    -457,   264,   268,  -457,   466,  -457,   -53,   -94,   274,  -457,
    -457,   243,   248,  -102,  -457,  -457,  -457,   301,   -18,  -457,
     -58,  -457,   -16,    31,     2,   133,  -457,  -457,   -64,   433,
    -457,   424,   -27,   136,   621,   -80,   -12,  -457,   303,     1,
    -457,   -62,   -17,   142,  -457,  -457,  -457,  -457,  -457,   242,
    -401,  -457,  -457,  -457,  -457,  -457,  -457,  -457,   246,   451,
     254,  -457,  -456,   169,  -457,  -457,  -457,  -457,   119,  -457,
    -457,  -457,  -457,   574,   -22,   262,  -457,   204,   111,   313,
     314,  -236,  -457,  -457,  -227,  -127,  -457,   316,  -457,  -177,
      76,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -277,  -457,  -457,   398,  -457,  -457
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -152
static const short int yytable[] =
{
      64,   150,   151,   161,   352,    61,   291,    85,    91,    91,
     349,   350,   170,    93,    93,    65,   213,    79,    92,   195,
     141,   198,   147,   390,   178,   487,   501,    91,    91,   210,
     533,    17,    93,    93,   209,    80,   222,   148,    24,    17,
     141,    94,    20,    91,    20,   231,    94,    91,    93,   144,
      94,   149,    93,   165,    76,    85,   213,   213,   218,    91,
     537,   192,   540,    94,    93,    86,   197,   272,   344,   181,
     189,   188,   273,   193,   194,   193,   194,   576,   203,   193,
     194,    62,   577,    91,     4,     5,    94,    62,    93,    94,
     357,   358,   183,    91,   184,   561,   236,   501,    93,   193,
     194,   488,   387,    91,   193,   194,   436,    20,    93,   378,
      66,    67,   130,    82,   468,   357,   358,    58,    83,   357,
     358,   222,    25,    91,    91,    62,    60,    85,    93,    93,
     130,   130,    64,    18,   235,   445,   446,    21,    22,    23,
     457,    18,   226,     1,     2,     3,    56,    65,   230,     4,
       5,   353,   283,   357,   358,    91,   506,    91,   553,    79,
      93,     6,    93,   357,   358,    92,    72,    92,    72,   357,
     358,   570,   187,   190,   191,   495,   571,    80,   496,   357,
     358,   581,   276,   357,   358,   211,   215,   277,    91,   357,
     358,   348,   152,    93,   357,   358,   179,   141,     4,     5,
     354,   147,   160,   291,   291,   355,   130,   368,   503,   166,
      57,   418,   167,   419,   500,   170,   148,   420,   421,   422,
     227,   423,   556,   544,   300,   232,   215,   215,   356,    20,
     301,    94,   346,   302,   357,   358,   386,   447,   448,   449,
     201,   204,   357,   358,   141,    58,    91,    91,   510,   286,
      91,    93,    93,   357,   358,    93,   369,   165,   373,   426,
     193,   194,   168,   374,   298,   169,    20,   241,    94,   242,
     243,    62,   244,   245,    16,   529,    70,   392,   246,   542,
     357,   358,    16,   168,   357,   358,   173,    45,    45,    45,
      74,   130,   424,   462,   476,   477,   478,   193,   194,   481,
      66,    67,   342,   138,   275,   162,   345,   143,   237,   238,
     239,    45,   307,   281,   153,   475,   475,   475,   475,   290,
     240,   475,   523,   158,   155,   143,    62,   241,    94,   242,
     243,   175,   244,   245,   176,   384,   321,   388,   246,   426,
     385,   402,   389,   362,   363,   434,   403,   426,   241,    94,
     242,   243,   179,   244,   245,   180,   451,   193,   194,   246,
      91,   273,   254,   467,   418,    93,   419,   522,   389,   222,
     420,   421,   422,   156,   423,   485,   298,   157,   193,   194,
     486,   512,    20,   516,    94,   282,   389,   179,   517,   295,
     296,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     548,   224,   158,   320,   225,   385,   228,   494,   177,   229,
     549,   328,   328,   193,   194,   433,   494,   159,   426,   552,
     377,   336,   494,   174,   364,   569,   365,   366,   196,   367,
     185,   379,   213,   380,   186,   535,    91,    54,    55,   182,
     418,    93,   419,   351,    94,   424,   420,   421,   422,   199,
     423,   233,   234,   200,   526,   202,   332,   333,    20,   206,
      94,   207,   208,   463,   216,   466,   217,   298,   440,   441,
     472,   271,   224,   274,   284,   425,   297,   304,   213,   375,
      91,   303,   330,   490,   490,    93,   213,   305,   306,   193,
     194,   322,   541,  -151,   497,   433,   323,   383,   324,    91,
     325,   334,   338,   433,    93,   337,   339,   340,   353,   347,
     281,   453,   572,   359,   360,   361,   290,   290,   371,   376,
     381,   424,   391,   393,   394,   580,   395,   406,   396,   471,
     505,   397,   398,   399,   400,   401,   404,   407,    91,   130,
     408,   417,   413,    93,   435,    91,   414,   415,   416,   454,
      93,    91,   494,    91,   469,   425,    93,   437,    93,   254,
     439,   482,   484,   425,   502,   499,   507,   511,   513,   515,
     518,   519,  -152,   524,   433,   237,   238,   239,   550,   143,
     525,   538,   530,   130,   528,   544,   547,   240,   551,   458,
     460,   536,   465,    62,   241,    94,   242,   243,   554,   244,
     245,   543,   130,   320,   480,   246,   555,   320,   565,   568,
       4,     5,    27,   493,    28,    29,    30,    31,    32,    33,
      34,    35,     6,   559,   193,   194,   560,   566,   573,   575,
     563,   578,    26,   508,   425,   137,   370,   270,   163,   278,
     452,   130,   285,    62,   455,    94,   483,   479,   130,   456,
     292,   534,   343,    75,   130,   531,   130,   341,   438,   329,
      95,   498,   491,   520,   557,    96,    97,    98,   509,   220,
      99,   492,   442,   100,   443,   372,   101,   102,   103,   205,
     104,     0,   221,   450,     0,     0,     0,   105,   106,     0,
     514,     0,    62,     0,    94,     0,     0,     0,     0,   521,
       0,     6,   107,   108,   109,     0,     0,     0,     0,    95,
       0,     0,     0,     0,    96,    97,    98,   532,   220,    99,
       0,   335,   100,   514,     0,   101,   102,   103,     0,   104,
       0,   221,     0,     0,     0,     0,   105,   106,    62,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,   107,   108,   109,     0,    95,     0,   562,     0,   564,
      96,    97,    98,     0,   220,    99,     0,     0,   100,     0,
       0,   101,   102,   103,   574,   104,     0,   221,    62,     0,
      94,   579,   105,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     6,   107,   108,   109,
      96,    97,    98,     0,     0,    99,     0,   212,   100,     0,
       0,   101,   102,   103,     0,   104,     0,     0,     0,     0,
       0,     0,   105,   106,    62,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,   107,   108,   109,
       0,    95,   461,    62,     0,    94,    96,    97,    98,     0,
       0,    99,     0,     0,   100,     0,     0,   101,   102,   103,
      95,   104,     0,     0,     0,    96,    97,    98,   105,   106,
      99,     0,     0,   100,     0,     0,   101,   102,   103,     0,
     104,     0,     6,   107,   108,   109,     0,   105,   106,     0,
       0,     0,     0,     0,     0,   237,   238,   239,     0,     0,
       0,     6,   107,   108,   109,   293,     0,   240,     0,     0,
       0,     0,     0,    62,   241,    94,   242,   243,     0,   244,
     245,     0,     0,     0,     0,   246,     0,     0,   237,   238,
     239,     0,   326,     0,     0,     0,     0,     0,     0,     0,
     240,     0,     0,     0,   193,   194,    62,   241,    94,   242,
     243,     0,   244,   245,     0,     0,     0,     0,   246,     0,
       0,   237,   238,   239,   382,     0,     0,     0,     0,     0,
       0,     0,     0,   240,     0,     0,     0,   193,   194,    62,
     241,    94,   242,   243,     0,   244,   245,     0,     0,     0,
       0,   246,     0,     0,   237,   238,   239,   459,     0,     0,
       0,     0,     0,     0,     0,     0,   240,     0,     0,     0,
     193,   194,    62,   241,    94,   242,   243,     0,   244,   245,
       0,     0,     0,     0,   246,     0,     0,   237,   238,   239,
       0,     0,     0,     0,     0,   464,     0,     0,     0,   240,
       0,     0,     0,   193,   194,    62,   241,    94,   242,   243,
       0,   244,   245,     0,     0,     0,     0,   246,     0,     0,
     237,   238,   239,     0,   307,     0,     0,     0,     0,     0,
       0,     0,   240,     0,     0,     0,   193,   194,    62,   241,
      94,   242,   243,     0,   244,   245,     0,     0,     0,     0,
     246,     0,     0,   237,   238,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   240,     0,     0,     0,   193,
     194,    62,   241,    94,   242,   243,     0,   244,   245,     0,
       0,     0,     0,   246,     0,     0,   237,   238,   409,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   240,   237,
     238,   239,   193,   194,    62,   241,    94,   242,   243,     0,
     244,   245,     0,     0,     0,     0,   246,    62,   241,    94,
     242,   243,   239,   244,   245,     0,     0,     0,     0,   246,
       0,     0,     0,     0,     0,   193,   194,     0,    62,   241,
      94,   242,   243,     0,   244,   245,     0,     0,   193,   194,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     194
};

static const short int yycheck[] =
{
      27,    54,    55,    67,   240,    23,   183,    34,    35,    36,
     237,   238,    74,    35,    36,    27,   110,    33,    35,    99,
      47,   101,    49,   300,    82,     7,   427,    54,    55,   109,
       7,     0,    54,    55,     7,    33,   130,    49,    14,     8,
      67,    23,    21,    70,    21,     5,    23,    74,    70,    48,
      23,    50,    74,    70,    37,    82,   150,   151,   120,    86,
     516,    14,   518,    23,    86,     5,    14,     6,     5,    86,
      97,     5,    11,    52,    53,    52,    53,     6,   105,    52,
      53,    21,    11,   110,    67,    68,    23,    21,   110,    23,
      19,    20,     9,   120,    11,   551,   154,   498,   120,    52,
      53,    83,     6,   130,    52,    53,     6,    21,   130,   286,
       9,    10,    36,     9,   391,    19,    20,     5,    14,    19,
      20,   215,     0,   150,   151,    21,    14,   154,   150,   151,
      54,    55,   159,     0,   152,   362,   363,     1,     2,     3,
       6,     8,   141,    61,    62,    63,    62,   159,   147,    67,
      68,     5,   179,    19,    20,   182,     6,   184,    12,   175,
     182,    79,   184,    19,    20,   182,    30,   184,    32,    19,
      20,    11,    96,    97,    98,    11,     6,   175,    14,    19,
      20,     6,     6,    19,    20,   109,   110,    11,   215,    19,
      20,     6,    56,   215,    19,    20,    11,   224,    67,    68,
       6,   228,    66,   380,   381,    11,   130,   271,   444,    11,
      14,     3,    14,     5,     6,   277,   228,     9,    10,    11,
     144,    13,    40,    41,     5,   149,   150,   151,    13,    21,
      11,    23,   231,    14,    19,    20,    13,   364,   365,   366,
     104,   105,    19,    20,   271,     5,   273,   274,    14,     4,
     277,   273,   274,    19,    20,   277,   273,   274,     6,   339,
      52,    53,    11,    11,   188,    14,    21,    22,    23,    24,
      25,    21,    27,    28,     0,    14,     5,   304,    33,    14,
      19,    20,     8,    11,    19,    20,    14,    13,    14,    15,
       5,   215,    84,   387,   396,   397,   398,    52,    53,   401,
       9,    10,   226,    14,   168,    14,   230,     7,     3,     4,
       5,    37,     7,   177,     6,   395,   396,   397,   398,   183,
      15,   401,   499,     5,    14,     7,    21,    22,    23,    24,
      25,    11,    27,    28,    14,     6,   200,     6,    33,   419,
      11,     6,    11,     3,     4,   344,    11,   427,    22,    23,
      24,    25,    11,    27,    28,    14,     6,    52,    53,    33,
     387,    11,   158,     6,     3,   387,     5,     6,    11,   463,
       9,    10,    11,    14,    13,     6,   300,    14,    52,    53,
      11,     6,    21,     6,    23,     9,    11,    11,    11,   185,
     186,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       6,    11,     5,   199,    14,    11,    11,    11,     5,    14,
      14,   207,   208,    52,    53,   339,    11,    11,   498,    14,
     284,   217,    11,    14,     7,    14,     9,     8,    14,    10,
       5,     9,   526,    11,     5,   515,   463,    14,    15,    11,
       3,   463,     5,   239,    23,    84,     9,    10,    11,     5,
      13,   150,   151,     5,   507,    21,   210,   211,    21,    14,
      23,     5,     5,   387,    14,   389,    12,   391,   357,   358,
     394,     9,    11,     5,    11,   339,    11,    46,   572,     4,
     507,    14,    11,   407,   408,   507,   580,    14,    14,    52,
      53,    14,   519,    14,   418,   419,     5,   293,    14,   526,
      14,    14,    14,   427,   526,    11,     5,    14,     5,    14,
     374,   375,   565,    17,    16,    18,   380,   381,    14,    14,
       7,    84,     5,    12,    12,   578,    12,   323,    12,   393,
     454,    12,    12,    12,    12,    12,     6,    11,   565,   463,
      11,   337,    14,   565,     6,   572,    14,    14,    14,    12,
     572,   578,    11,   580,    14,   419,   578,   353,   580,   355,
     356,    14,    14,   427,     6,    96,    14,    14,     5,    12,
       6,    11,    18,     6,   498,     3,     4,     5,    12,     7,
      11,    50,    14,   507,   508,    41,    11,    15,     6,   385,
     386,   515,   388,    21,    22,    23,    24,    25,    11,    27,
      28,   525,   526,   399,   400,    33,     5,   403,    14,    14,
      67,    68,    69,   409,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   547,    52,    53,   550,    42,    14,    39,
     554,    14,     8,    11,   498,    37,   274,   159,    68,   175,
     374,   565,   182,    21,   380,    23,   403,   399,   572,   381,
     184,   515,   228,    32,   578,   513,   580,   224,   355,   208,
      38,   419,   408,   494,   545,    43,    44,    45,   464,    47,
      48,   409,   359,    51,   360,   277,    54,    55,    56,   105,
      58,    -1,    60,   367,    -1,    -1,    -1,    65,    66,    -1,
     486,    -1,    21,    -1,    23,    -1,    -1,    -1,    -1,   495,
      -1,    79,    80,    81,    82,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    44,    45,   513,    47,    48,
      -1,    50,    51,   519,    -1,    54,    55,    56,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    65,    66,    21,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    38,    -1,   553,    -1,   555,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    51,    -1,
      -1,    54,    55,    56,   570,    58,    -1,    60,    21,    -1,
      23,   577,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    79,    80,    81,    82,
      43,    44,    45,    -1,    -1,    48,    -1,    50,    51,    -1,
      -1,    54,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    21,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    38,    39,    21,    -1,    23,    43,    44,    45,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      38,    58,    -1,    -1,    -1,    43,    44,    45,    65,    66,
      48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      58,    -1,    79,    80,    81,    82,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    79,    80,    81,    82,    13,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    52,    53,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    52,    53,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      52,    53,    21,    22,    23,    24,    25,    -1,    27,    28,
      -1,    -1,    -1,    -1,    33,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    52,    53,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    52,    53,    21,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    -1,    -1,
      33,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    52,
      53,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    33,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,     3,
       4,     5,    52,    53,    21,    22,    23,    24,    25,    -1,
      27,    28,    -1,    -1,    -1,    -1,    33,    21,    22,    23,
      24,    25,     5,    27,    28,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    21,    22,
      23,    24,    25,    -1,    27,    28,    -1,    -1,    52,    53,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    61,    62,    63,    67,    68,    79,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   135,   150,   152,   153,
      21,   160,   160,   160,    14,     0,   100,    69,    71,    72,
      73,    74,    75,    76,    77,    78,   107,   108,   109,   110,
     112,   115,   118,   119,   124,   135,   148,   149,   150,   151,
     152,   228,   231,   232,   107,   107,    62,    14,     5,   145,
      14,   145,    21,   111,   159,   163,     9,    10,   116,   117,
       5,   113,   160,   161,     5,   161,    37,   120,   121,   149,
     151,   154,     9,    14,   147,   159,     5,   125,   126,   130,
     131,   159,   169,   201,    23,    38,    43,    44,    45,    48,
      51,    54,    55,    56,    58,    65,    66,    80,    81,    82,
     133,   134,   135,   136,   142,   143,   167,   168,   169,   171,
     172,   174,   182,   183,   184,   188,   192,   198,   199,   203,
     217,   221,   222,   223,   224,   225,   226,   109,    14,   155,
     156,   159,   163,     7,   166,   157,   158,   159,   163,   166,
     133,   133,   160,     6,   146,    14,    14,    14,     5,    11,
     160,   155,    14,   117,   114,   169,    11,    14,    11,    14,
     168,   229,   230,    14,    14,    11,    14,     5,   147,    11,
      14,   169,    11,     9,    11,     5,     5,   217,     5,   159,
     217,   217,    14,    52,    53,   162,    14,    14,   162,     5,
       5,   160,    21,   159,   160,   200,    14,     5,     5,     7,
     162,   217,    50,   134,   144,   217,    14,    12,   168,   173,
      47,    60,   134,   175,    11,    14,   166,   217,    11,    14,
     166,     5,   217,   144,   144,   145,   147,     3,     4,     5,
      15,    22,    24,    25,    27,    28,    33,   159,   162,   164,
     165,   166,   200,   201,   204,   205,   206,   207,   208,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     111,     9,     6,    11,     5,   160,     6,    11,   121,   122,
     123,   160,     9,   159,    11,   126,     4,   127,   128,   129,
     160,   216,   131,    13,   170,   204,   204,    11,   217,   227,
       5,    11,    14,    14,    46,    14,    14,     7,    86,    87,
      88,    89,    90,    91,    92,    93,    94,   137,   138,   139,
     204,   160,    14,     5,    14,    14,     7,   186,   204,   186,
      11,   185,   185,   185,    14,    50,   204,    11,    14,     5,
      14,   156,   217,   158,     5,   217,   166,    14,     6,   211,
     211,   204,   208,     5,     6,    11,    13,    19,    20,    17,
      16,    18,     3,     4,     7,     9,     8,    10,   155,   169,
     114,    14,   230,     6,    11,     4,    14,   160,   216,     9,
      11,     7,     6,   204,     6,    11,    13,     6,     6,    11,
     227,     5,   159,    12,    12,    12,    12,    12,    12,    12,
      12,    12,     6,    11,     6,   202,   204,    11,    11,     5,
     189,   190,   204,    14,    14,    14,    14,   204,     3,     5,
       9,    10,    11,    13,    84,   160,   162,   176,   177,   178,
     179,   180,   181,   217,   166,     6,     6,   204,   165,   204,
     205,   205,   206,   207,   209,   211,   211,   212,   212,   212,
     214,     6,   123,   160,    12,   128,   129,     6,   204,     6,
     204,    39,   134,   217,    11,   204,   217,     6,   227,    14,
     141,   160,   217,   140,   160,   162,   140,   140,   140,   139,
     204,   140,    14,   138,    14,     6,    11,     7,    83,   187,
     217,   187,   202,   204,    11,    11,    14,   217,   176,    96,
       6,   177,     6,   208,   132,   217,     6,    14,    11,   204,
      14,    14,     6,     5,   204,    12,     6,    11,     6,    11,
     190,   204,     6,   216,     6,    11,   133,   193,   217,    14,
      14,   170,   204,     7,   160,   162,   217,   189,    50,   191,
     189,   159,    14,   217,    41,   194,   195,    11,     6,    14,
      12,     6,    14,    12,    11,     5,    40,   195,   196,   217,
     217,   189,   204,   217,   204,    14,    42,   197,    14,    14,
      11,     6,   133,    14,   204,    39,     6,    11,    14,   204,
     133,     6
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  yyvsp[0] = yylval;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

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
#line 204 "f2jparse.y"
    {
            AST *temp, *prev, *commentList = NULL;

            if(debug)
              printf("F2java -> Sourcecodes\n");
	    (yyval.ptnode) = switchem((yyvsp[0].ptnode));

#if VCG
            if(emittem) start_vcg((yyval.ptnode));
#endif
            prev = NULL;
            for(temp=(yyval.ptnode);temp!=NULL;temp=temp->nextstmt)
            {
              if(emittem) {

                if(temp->nodetype == Comment)
                {
                  if((prev == NULL) ||
                     ((prev != NULL) && (prev->nodetype != Comment)))
                    commentList = temp;
                }
                else
                {
                  /* commentList may be NULL here so we must check
                   * for that in codegen.
                   */
                  temp->astnode.source.prologComments = commentList;

                  typecheck(temp);

                  if(omitWrappers)
                    optScalar(temp);

                  emit(temp);

                  commentList = NULL;
                }
              }
              prev = temp;
            }
          }
    break;

  case 3:
#line 248 "f2jparse.y"
    {
                 AST *temp;

                 if(debug)
                   printf("Sourcecodes -> Sourcecode\n"); 
                 (yyval.ptnode)=(yyvsp[0].ptnode);

                 /* insert the name of the program unit into the
                  * global function table.  this will allow optScalar()
                  * to easily get a pointer to a function. 
                  */

                 if(omitWrappers && ((yyvsp[0].ptnode)->nodetype != Comment)) {
                   temp = (yyvsp[0].ptnode)->astnode.source.progtype->astnode.source.name;
                   
                   type_insert(global_func_table, (yyvsp[0].ptnode), 0, temp->astnode.ident.name);
                 }
               }
    break;

  case 4:
#line 267 "f2jparse.y"
    {
                 AST *temp;

                 if(debug)
                   printf("Sourcecodes -> Sourcecodes Sourcecode\n");
                 (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode); 
                 (yyval.ptnode)=(yyvsp[0].ptnode);

                 /* insert the name of the program unit into the
                  * global function table.  this will allow optScalar()
                  * to easily get a pointer to a function. 
                  */

                 if(omitWrappers && ((yyvsp[0].ptnode)->nodetype != Comment)) {
                   temp = (yyvsp[0].ptnode)->astnode.source.progtype->astnode.source.name;

                   type_insert(global_func_table, (yyvsp[0].ptnode), 0, temp->astnode.ident.name);
                 }
               }
    break;

  case 5:
#line 289 "f2jparse.y"
    { 
                  if(debug)
                    printf("Sourcecode -> Fprogram\n"); 
                  (yyval.ptnode)=(yyvsp[0].ptnode); 
                }
    break;

  case 6:
#line 295 "f2jparse.y"
    { 
                  if(debug)
                    printf("Sourcecode -> Fsubroutine\n"); 
                  (yyval.ptnode)=(yyvsp[0].ptnode);
                }
    break;

  case 7:
#line 301 "f2jparse.y"
    {
                  if(debug)
                    printf("Sourcecode -> Ffunction\n"); 
                  (yyval.ptnode)=(yyvsp[0].ptnode);
                }
    break;

  case 8:
#line 307 "f2jparse.y"
    { 
                  if(debug)
                    printf("Sourcecode -> Comment\n"); 
                  (yyval.ptnode)=(yyvsp[0].ptnode);
                }
    break;

  case 9:
#line 315 "f2jparse.y"
    {
                if(debug)
                  printf("Fprogram -> Program  Specstmts  Statements End\n");
                
                add_implicit_to_tree((yyvsp[-2].ptnode));

                (yyval.ptnode) = addnode();

                /* store the tables built during parsing into the
                 * AST node for access during code generation.
                 */

                (yyval.ptnode)->astnode.source.type_table = type_table;
                (yyval.ptnode)->astnode.source.external_table = external_table;
                (yyval.ptnode)->astnode.source.intrinsic_table = intrinsic_table;
                (yyval.ptnode)->astnode.source.args_table = args_table;
                (yyval.ptnode)->astnode.source.array_table = array_table; 
                (yyval.ptnode)->astnode.source.format_table = format_table; 
                (yyval.ptnode)->astnode.source.data_table = data_table; 
                (yyval.ptnode)->astnode.source.save_table = save_table; 
                (yyval.ptnode)->astnode.source.common_table = common_table; 
                (yyval.ptnode)->astnode.source.parameter_table = parameter_table; 
                (yyval.ptnode)->astnode.source.constants_table = constants_table;
                (yyval.ptnode)->astnode.source.equivalences = equivList; 
                (yyval.ptnode)->astnode.source.stmt_assign_list = assign_labels; 

                (yyval.ptnode)->astnode.source.javadocComments = NULL; 
                (yyval.ptnode)->astnode.source.save_all = save_all; 

                /* initialize some values in this node */

                (yyval.ptnode)->astnode.source.needs_input = FALSE;
                (yyval.ptnode)->astnode.source.needs_output = FALSE;
                (yyval.ptnode)->astnode.source.needs_reflection = FALSE;
                (yyval.ptnode)->astnode.source.needs_blas = FALSE;

                if(omitWrappers)
                  (yyval.ptnode)->astnode.source.scalarOptStatus = NOT_VISITED;

	        (yyvsp[-3].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	        (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	        (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	        (yyvsp[0].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
                (yyval.ptnode)->nodetype = Progunit;
                (yyval.ptnode)->astnode.source.progtype = (yyvsp[-3].ptnode);
                (yyval.ptnode)->astnode.source.typedecs = (yyvsp[-2].ptnode);
                (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode);
                (yyval.ptnode)->astnode.source.statements = switchem((yyvsp[0].ptnode));

                /* a PROGRAM has no args, so set the symbol table
                   to NULL */
                args_table = NULL;  

                (yyvsp[-3].ptnode)->astnode.source.descriptor = MAIN_DESCRIPTOR;
              }
    break;

  case 10:
#line 374 "f2jparse.y"
    {
                HASHNODE *ht;
                AST *temp;

                if(debug)
                  printf("Fsubroutine -> Subroutine Specstmts Statements End\n");
               
                add_implicit_to_tree((yyvsp[-2].ptnode));
                
                (yyval.ptnode) = addnode();
	        (yyvsp[-3].ptnode)->parent = (yyval.ptnode); 
	        (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
	        (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
	        (yyvsp[0].ptnode)->parent = (yyval.ptnode);
                (yyval.ptnode)->nodetype = Progunit;
                (yyval.ptnode)->astnode.source.progtype = (yyvsp[-3].ptnode);

                /* store the tables built during parsing into the
                 * AST node for access during code generation.
                 */

                (yyval.ptnode)->astnode.source.type_table = type_table;
                (yyval.ptnode)->astnode.source.external_table = external_table;
                (yyval.ptnode)->astnode.source.intrinsic_table = intrinsic_table;
                (yyval.ptnode)->astnode.source.args_table = args_table;
                (yyval.ptnode)->astnode.source.array_table = array_table; 
                (yyval.ptnode)->astnode.source.format_table = format_table; 
                (yyval.ptnode)->astnode.source.data_table = data_table; 
                (yyval.ptnode)->astnode.source.save_table = save_table; 
                (yyval.ptnode)->astnode.source.common_table = common_table; 
                (yyval.ptnode)->astnode.source.parameter_table = parameter_table; 
                (yyval.ptnode)->astnode.source.constants_table = constants_table;
                (yyval.ptnode)->astnode.source.equivalences = equivList; 
                (yyval.ptnode)->astnode.source.stmt_assign_list = assign_labels; 

                (yyval.ptnode)->astnode.source.javadocComments = NULL; 
                (yyval.ptnode)->astnode.source.save_all = save_all; 

                /* initialize some values in this node */

                (yyval.ptnode)->astnode.source.needs_input = FALSE;
                (yyval.ptnode)->astnode.source.needs_output = FALSE;
                (yyval.ptnode)->astnode.source.needs_reflection = FALSE;
                (yyval.ptnode)->astnode.source.needs_blas = FALSE;

                if(omitWrappers)
                  (yyval.ptnode)->astnode.source.scalarOptStatus = NOT_VISITED;

                (yyval.ptnode)->astnode.source.typedecs = (yyvsp[-2].ptnode);
                (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode);
                (yyval.ptnode)->astnode.source.statements = switchem((yyvsp[0].ptnode));

                /* foreach arg to this program unit, store the array 
                 * size, if applicable, from the hash table into the
                 * node itself.
                 */
              
                for(temp=(yyvsp[-3].ptnode)->astnode.source.args;temp!=NULL;temp=temp->nextstmt)
                {
                  if((ht=type_lookup(type_table,temp->astnode.ident.name)) != NULL)
                  {
                    temp->vartype=ht->variable->vartype;
                    temp->astnode.ident.arraylist=ht->variable->astnode.ident.arraylist;
                  }
                  if((ht=type_lookup(args_table, temp->astnode.ident.name)) != NULL){
                      ht->variable->vartype=temp->vartype;
                  }
                }
                
                type_insert(function_table, (yyvsp[-3].ptnode), 0,
                   (yyvsp[-3].ptnode)->astnode.source.name->astnode.ident.name);
              }
    break;

  case 11:
#line 449 "f2jparse.y"
    {
                HASHNODE *ht;
                AST *temp;

                if(debug)
                  printf("Ffunction ->   Function Specstmts Statements  End\n");
             
                assign_function_return_type((yyvsp[-3].ptnode), (yyvsp[-2].ptnode));

                add_implicit_to_tree((yyvsp[-2].ptnode));

                (yyval.ptnode) = addnode();

                /* store the tables built during parsing into the
                 * AST node for access during code generation.
                 */

                (yyval.ptnode)->astnode.source.type_table = type_table;
                (yyval.ptnode)->astnode.source.external_table = external_table;
                (yyval.ptnode)->astnode.source.intrinsic_table = intrinsic_table;
                (yyval.ptnode)->astnode.source.args_table = args_table;
                (yyval.ptnode)->astnode.source.array_table = array_table; 
                (yyval.ptnode)->astnode.source.format_table = format_table; 
                (yyval.ptnode)->astnode.source.data_table = data_table; 
                (yyval.ptnode)->astnode.source.save_table = save_table; 
                (yyval.ptnode)->astnode.source.common_table = common_table; 
                (yyval.ptnode)->astnode.source.parameter_table = parameter_table; 
                (yyval.ptnode)->astnode.source.constants_table = constants_table;
                (yyval.ptnode)->astnode.source.equivalences = equivList; 
                (yyval.ptnode)->astnode.source.stmt_assign_list = assign_labels; 

                (yyval.ptnode)->astnode.source.javadocComments = NULL; 
                (yyval.ptnode)->astnode.source.save_all = save_all; 

                /* initialize some values in this node */

                (yyval.ptnode)->astnode.source.needs_input = FALSE;
                (yyval.ptnode)->astnode.source.needs_output = FALSE;
                (yyval.ptnode)->astnode.source.needs_reflection = FALSE;
                (yyval.ptnode)->astnode.source.needs_blas = FALSE;
                if(omitWrappers)
                  (yyval.ptnode)->astnode.source.scalarOptStatus = NOT_VISITED;

	        (yyvsp[-3].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	        (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	        (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	        (yyvsp[0].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
                (yyval.ptnode)->nodetype = Progunit;
                (yyval.ptnode)->astnode.source.progtype = (yyvsp[-3].ptnode);
                (yyval.ptnode)->astnode.source.typedecs = (yyvsp[-2].ptnode);
		(yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode);
                (yyval.ptnode)->astnode.source.statements = switchem((yyvsp[0].ptnode));

                /* foreach arg to this program unit, store the array 
                 * size, if applicable, from the hash table into the
                 * node itself.
                 */

                for(temp=(yyvsp[-3].ptnode)->astnode.source.args;temp!=NULL;temp=temp->nextstmt)
                {
                  if((ht=type_lookup(type_table,temp->astnode.ident.name)) != NULL)
                  {
                    temp->vartype=ht->variable->vartype;
                    temp->astnode.ident.arraylist=ht->variable->astnode.ident.arraylist;
                  }
                  if((ht=type_lookup(args_table, temp->astnode.ident.name)) != NULL){
                      ht->variable->vartype=temp->vartype;
                  }
                }
                      
                type_insert(function_table, (yyvsp[-3].ptnode), 0,
                  (yyvsp[-3].ptnode)->astnode.source.name->astnode.ident.name);
              }
    break;

  case 12:
#line 526 "f2jparse.y"
    {
                 if(debug)
                   printf("Program ->  PROGRAM UndeclaredName\n");
                 
                 unit_args = NULL;

                 (yyval.ptnode) = addnode();
	         (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
		 lowercase((yyvsp[-1].ptnode)->astnode.ident.name);
		 (yyval.ptnode)->astnode.source.name = (yyvsp[-1].ptnode);
                 (yyval.ptnode)->nodetype = Program;
                 (yyval.ptnode)->token = PROGRAM;
                 (yyval.ptnode)->astnode.source.args = NULL;

                 init_tables();
                
                 fprintf(stderr," MAIN %s:\n",(yyvsp[-1].ptnode)->astnode.ident.name);
              }
    break;

  case 13:
#line 547 "f2jparse.y"
    {
                 if(debug)
                   printf("Subroutine ->  SUBROUTINE UndeclaredName Functionargs NL\n");

                 unit_args = (yyvsp[-1].ptnode);

                 (yyval.ptnode) = addnode();
                 (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
                 if((yyvsp[-1].ptnode) != NULL)
                   (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */

                 (yyval.ptnode)->astnode.source.name = (yyvsp[-2].ptnode); 
                 (yyval.ptnode)->nodetype = Subroutine;
                 (yyval.ptnode)->token = SUBROUTINE;
                 (yyval.ptnode)->astnode.source.args = switchem((yyvsp[-1].ptnode));
                
                 fprintf(stderr,"\t%s:\n",(yyvsp[-2].ptnode)->astnode.ident.name);
              }
    break;

  case 14:
#line 566 "f2jparse.y"
    {
                 if(debug)
                   printf("Subroutine ->  SUBROUTINE UndeclaredName NL\n");

                 unit_args = NULL;

                 init_tables();
                 (yyval.ptnode) = addnode();
                 (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */

                 (yyval.ptnode)->astnode.source.name = (yyvsp[-1].ptnode); 
                 (yyval.ptnode)->nodetype = Subroutine;
                 (yyval.ptnode)->token = SUBROUTINE;
                 (yyval.ptnode)->astnode.source.args = NULL;

                 fprintf(stderr,"\t%s:\n",(yyvsp[-1].ptnode)->astnode.ident.name);
              }
    break;

  case 15:
#line 586 "f2jparse.y"
    {
             if(debug)
               printf("Function ->  AnySimpleType FUNCTION UndeclaredName Functionargs NL\n");

             unit_args = (yyvsp[-1].ptnode);

             (yyval.ptnode) = addnode();

  	     (yyvsp[-2].ptnode)->parent = (yyval.ptnode);  /* 9-4-97 - Keith */
             if((yyvsp[-1].ptnode) != NULL)
               (yyvsp[-1].ptnode)->parent = (yyval.ptnode);  /* 9-4-97 - Keith */
             (yyval.ptnode)->astnode.source.name = (yyvsp[-2].ptnode);
             (yyval.ptnode)->nodetype = Function;
             (yyval.ptnode)->token = FUNCTION;
             (yyval.ptnode)->astnode.source.returns = (yyvsp[-4].type);
             (yyval.ptnode)->vartype = (yyvsp[-4].type);
             (yyvsp[-2].ptnode)->vartype = (yyvsp[-4].type);
             (yyval.ptnode)->astnode.source.args = switchem((yyvsp[-1].ptnode));

             /* since the function name is the implicit return value
              * and it can be treated as a variable, we insert it into
              * the hash table for lookup later.
              */

             (yyvsp[-2].ptnode)->astnode.ident.localvnum = -1;
             insert_name(type_table, (yyvsp[-2].ptnode), (yyvsp[-4].type));
           
             fprintf(stderr,"\t%s:\n",(yyvsp[-2].ptnode)->astnode.ident.name);
          }
    break;

  case 16:
#line 616 "f2jparse.y"
    {
             enum returntype ret;

             unit_args = (yyvsp[-1].ptnode);

             (yyval.ptnode) = addnode();

             (yyvsp[-2].ptnode)->parent = (yyval.ptnode);  
             if((yyvsp[-1].ptnode) != NULL)
               (yyvsp[-1].ptnode)->parent = (yyval.ptnode);  
             (yyval.ptnode)->astnode.source.name = (yyvsp[-2].ptnode);
             (yyval.ptnode)->nodetype = Function;
             (yyval.ptnode)->token = FUNCTION;
             ret = implicit_table[tolower((yyvsp[-2].ptnode)->astnode.ident.name[0]) - 'a'].type;
             (yyval.ptnode)->astnode.source.returns = ret;
             (yyval.ptnode)->vartype = ret;
             (yyvsp[-2].ptnode)->vartype = ret;
             (yyval.ptnode)->astnode.source.args = switchem((yyvsp[-1].ptnode));
        
             (yyvsp[-2].ptnode)->astnode.ident.localvnum = -1;
             insert_name(type_table, (yyvsp[-2].ptnode), ret);
            
             fprintf(stderr,"\t%s:\n",(yyvsp[-2].ptnode)->astnode.ident.name);
          }
    break;

  case 17:
#line 643 "f2jparse.y"
    {
             AST *tmparg;

             if(debug){
               printf("Specstmts -> SpecStmtList\n");
             }
             (yyvsp[0].ptnode) = switchem((yyvsp[0].ptnode));
             type_hash((yyvsp[0].ptnode)); 
             (yyval.ptnode)=(yyvsp[0].ptnode);

             for(tmparg = unit_args; tmparg; tmparg=tmparg->nextstmt) {
               HASHNODE *ht;

               ht = type_lookup(type_table, tmparg->astnode.ident.name);

               if(ht) {
                 if(!ht->variable->astnode.ident.explicit)
                   ht->variable->vartype = 
                     implicit_table[tolower(tmparg->astnode.ident.name[0]) - 'a'].type;
               }
               else
                 fprintf(stderr, "warning: didn't find %s in symbol table\n", 
                   tmparg->astnode.ident.name);
             }
           }
    break;

  case 18:
#line 671 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 19:
#line 675 "f2jparse.y"
    { 
             (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode); 
             (yyval.ptnode) = (yyvsp[0].ptnode); 
           }
    break;

  case 20:
#line 682 "f2jparse.y"
    {
	     (yyval.ptnode) = (yyvsp[0].ptnode);
	   }
    break;

  case 21:
#line 686 "f2jparse.y"
    {
	     (yyval.ptnode) = (yyvsp[0].ptnode);
	   }
    break;

  case 22:
#line 690 "f2jparse.y"
    {
	     (yyval.ptnode) = (yyvsp[0].ptnode);
	   }
    break;

  case 23:
#line 694 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 24:
#line 698 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 25:
#line 702 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 26:
#line 706 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 27:
#line 710 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 28:
#line 714 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 29:
#line 718 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[-1].ptnode);
           }
    break;

  case 30:
#line 722 "f2jparse.y"
    {
             (yyval.ptnode) = (yyvsp[0].ptnode);
	   }
    break;

  case 31:
#line 728 "f2jparse.y"
    {
             (yyval.ptnode) = addnode();
             (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
             (yyvsp[-1].ptnode) = switchem((yyvsp[-1].ptnode));
             (yyval.ptnode)->nodetype = Dimension;

             (yyval.ptnode)->astnode.typeunit.declist = (yyvsp[-1].ptnode);
           }
    break;

  case 32:
#line 739 "f2jparse.y"
    {
                (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Dimension;
              }
    break;

  case 33:
#line 745 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Dimension;
              }
    break;

  case 34:
#line 756 "f2jparse.y"
    {
                   (yyval.ptnode) = addnode();
                   (yyval.ptnode)->nodetype = Equivalence;
                   (yyval.ptnode)->prevstmt = NULL;
                   (yyval.ptnode)->nextstmt = NULL;
                   (yyval.ptnode)->astnode.equiv.nlist = switchem((yyvsp[-1].ptnode));
                 }
    break;

  case 35:
#line 766 "f2jparse.y"
    {
                   AST *tmp;

                   (yyval.ptnode) = addnode();
                   (yyval.ptnode)->nodetype = Equivalence;
                   (yyval.ptnode)->prevstmt = NULL;
                   (yyval.ptnode)->nextstmt = NULL;
                   (yyval.ptnode)->astnode.equiv.clist = switchem((yyvsp[-1].ptnode));

                   for(tmp=(yyvsp[-1].ptnode);tmp!=NULL;tmp=tmp->prevstmt)
                     tmp->parent = (yyval.ptnode);

                   addEquiv((yyval.ptnode)->astnode.equiv.clist);
                 }
    break;

  case 36:
#line 781 "f2jparse.y"
    {
                   AST *tmp;

                   (yyval.ptnode) = addnode();
                   (yyval.ptnode)->nodetype = Equivalence;
                   (yyval.ptnode)->astnode.equiv.clist = switchem((yyvsp[-1].ptnode));
                   (yyval.ptnode)->prevstmt = (yyvsp[-4].ptnode);
                   (yyval.ptnode)->nextstmt = NULL;

                   for(tmp=(yyvsp[-1].ptnode);tmp!=NULL;tmp=tmp->prevstmt)
                     tmp->parent = (yyval.ptnode);

                   addEquiv((yyval.ptnode)->astnode.equiv.clist);
                 }
    break;

  case 37:
#line 798 "f2jparse.y"
    {
                   (yyval.ptnode) = (yyvsp[0].ptnode);
                 }
    break;

  case 38:
#line 802 "f2jparse.y"
    {
                   (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                   (yyval.ptnode) = (yyvsp[0].ptnode);
                 }
    break;

  case 39:
#line 809 "f2jparse.y"
    {
          (yyval.ptnode) = addnode();
          (yyval.ptnode)->nodetype = CommonList;
          (yyval.ptnode)->astnode.common.name = NULL;

          (yyval.ptnode)->astnode.common.nlist = switchem((yyvsp[-1].ptnode));
          merge_common_blocks((yyval.ptnode)->astnode.common.nlist);
        }
    break;

  case 40:
#line 820 "f2jparse.y"
    {
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 41:
#line 824 "f2jparse.y"
    {
              (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode);
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 42:
#line 831 "f2jparse.y"
    {
              AST *temp;
              int pos;

              if(debug){
                 printf("CommonSpec -> DIV UndeclaredName DIV Namelist\n");
              }

              (yyval.ptnode) = addnode();
              (yyval.ptnode)->nodetype = Common;
              (yyval.ptnode)->astnode.common.name = strdup((yyvsp[-2].ptnode)->astnode.ident.name);
              (yyval.ptnode)->astnode.common.nlist = switchem((yyvsp[0].ptnode));

              pos = 0;

              /* foreach variable in the COMMON block... */
              for(temp=(yyval.ptnode)->astnode.common.nlist;temp!=NULL;temp=temp->nextstmt)
              {
                temp->astnode.ident.commonBlockName = 
                  strdup((yyvsp[-2].ptnode)->astnode.ident.name);

                if(omitWrappers)
                  temp->astnode.ident.position = pos++;

                /* insert this name into the common table */
                if(debug)
                  printf("@insert %s (block = %s) into common table\n",
                    temp->astnode.ident.name, (yyvsp[-2].ptnode)->astnode.ident.name);

                type_insert(common_table, temp, Float, temp->astnode.ident.name);
              }

              type_insert(global_common_table, (yyval.ptnode), Float, (yyval.ptnode)->astnode.common.name);
              free_ast_node((yyvsp[-2].ptnode));
           }
    break;

  case 43:
#line 867 "f2jparse.y"
    {
              AST *temp;

              /* This is an unnamed common block */
              if(debug){
                printf("CommonSpec -> CAT Namelist\n");
              }

              (yyval.ptnode) = addnode();
              (yyval.ptnode)->nodetype = Common;
              (yyval.ptnode)->astnode.common.name = strdup("Blank");
              (yyval.ptnode)->astnode.common.nlist = switchem((yyvsp[0].ptnode));

              /* foreach variable in the COMMON block... */
              for(temp=(yyvsp[0].ptnode);temp!=NULL;temp=temp->prevstmt) {
                temp->astnode.ident.commonBlockName = "Blank";

                /* insert this name into the common table */

                if(debug)
                  printf("@@insert %s (block = unnamed) into common table\n",
                    temp->astnode.ident.name);

                type_insert(common_table, temp, Float, temp->astnode.ident.name);
              }

              type_insert(global_common_table, (yyval.ptnode), Float, (yyval.ptnode)->astnode.common.name);
           }
    break;

  case 44:
#line 902 "f2jparse.y"
    {
         /*
          * I think in this case every variable is supposed to
          * be saved, but we already emit every variable as
          * static.  do nothing here.  --Keith
          */

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->nodetype = Save;
         save_all = TRUE;
       }
    break;

  case 45:
#line 914 "f2jparse.y"
    {
             AST *temp;
             
             if(debug){
                printf("Save -> SAVE DIV Namelist DIV NL\n");
             }
             (yyval.ptnode) = addnode();
             (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
             (yyval.ptnode)->nodetype = Save;

             for(temp=(yyvsp[-2].ptnode);temp!=NULL;temp=temp->prevstmt) {
               if(debug)
                 printf("@@insert %s into save table\n",
                    temp->astnode.ident.name);

               type_insert(save_table, temp, Float, temp->astnode.ident.name);
             }
	   }
    break;

  case 46:
#line 933 "f2jparse.y"
    {
             AST *temp;
             if(debug){
                printf("Save -> SAVE Namelist NL\n");
             }

             (yyval.ptnode) = addnode();
             (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
             (yyval.ptnode)->nodetype = Save;

             for(temp=(yyvsp[-1].ptnode);temp!=NULL;temp=temp->prevstmt) {
               if(debug)
                 printf("@@insert %s into save table\n",
                    temp->astnode.ident.name);

               type_insert(save_table, temp, Float, temp->astnode.ident.name);
             }
	   }
    break;

  case 47:
#line 954 "f2jparse.y"
    {
	      (yyval.ptnode)=addnode();
	      (yyval.ptnode)->nodetype = Specification;
	      (yyval.ptnode)->token = IMPLICIT;
	    }
    break;

  case 48:
#line 960 "f2jparse.y"
    {
	      (yyval.ptnode)=addnode();
	      (yyval.ptnode)->nodetype = Specification;
	      (yyval.ptnode)->token = IMPLICIT;
              fprintf(stderr,"Warning: IMPLICIT NONE ignored.\n");
	    }
    break;

  case 49:
#line 969 "f2jparse.y"
    {
                    /* I don't think anything needs to be done here */
                  }
    break;

  case 50:
#line 973 "f2jparse.y"
    {
                    /* or here either. */
                  }
    break;

  case 51:
#line 979 "f2jparse.y"
    {
                     AST *temp;

                     for(temp=(yyvsp[-1].ptnode);temp!=NULL;temp=temp->prevstmt) {
                       char *start_range, *end_range;
                       char start_char, end_char;
                       int i;

                       start_range = temp->astnode.expression.lhs->astnode.ident.name;
                       end_range = temp->astnode.expression.rhs->astnode.ident.name;

                       start_char = tolower(start_range[0]);
                       end_char = tolower(end_range[0]);

                       if((strlen(start_range) > 1) || (strlen(end_range) > 1)) {
                         yyerror("IMPLICIT spec must contain single character.");
                         exit(EXIT_FAILURE);
                       }

                       if(end_char < start_char) {
                         yyerror("IMPLICIT range in backwards order.");
                         exit(EXIT_FAILURE);
                       }

                       for(i=start_char - 'a'; i <= end_char - 'a'; i++) {
                         if(implicit_table[i].declared) {
                           yyerror("Duplicate letter specified in IMPLICIT statement.");
                           exit(EXIT_FAILURE);
                         }

                         implicit_table[i].type = (yyvsp[-3].type);
                         implicit_table[i].declared = TRUE;
                         implicit_table[i].len = len;  /* global set in Types production */
                       }
                     }
                   }
    break;

  case 52:
#line 1018 "f2jparse.y"
    {
                      (yyval.ptnode) = (yyvsp[0].ptnode);
                    }
    break;

  case 53:
#line 1022 "f2jparse.y"
    {
                      (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                      (yyval.ptnode) = (yyvsp[0].ptnode);
                    }
    break;

  case 54:
#line 1029 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyval.ptnode)->nodetype = Expression;
                  (yyval.ptnode)->astnode.expression.lhs = (yyvsp[0].ptnode);
                  (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
                }
    break;

  case 55:
#line 1036 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyval.ptnode)->nodetype = Expression;
                  (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
                  (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
                }
    break;

  case 56:
#line 1045 "f2jparse.y"
    {
              /* $$ = $2; */
              (yyval.ptnode) = addnode();
              (yyval.ptnode)->nodetype = DataList;
              (yyval.ptnode)->astnode.label.stmt = (yyvsp[0].ptnode);
            }
    break;

  case 57:
#line 1054 "f2jparse.y"
    {
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 58:
#line 1058 "f2jparse.y"
    {
              (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 59:
#line 1065 "f2jparse.y"
    {
              AST *temp;

              (yyval.ptnode) = addnode();
              (yyval.ptnode)->astnode.data.nlist = switchem((yyvsp[-3].ptnode));
              (yyval.ptnode)->astnode.data.clist = switchem((yyvsp[-1].ptnode));

              (yyval.ptnode)->nodetype = DataStmt;
              (yyval.ptnode)->prevstmt = NULL;
              (yyval.ptnode)->nextstmt = NULL;

              for(temp=(yyvsp[-3].ptnode);temp!=NULL;temp=temp->prevstmt) {
                if(debug)
                  printf("@@insert %s into data table\n",
                     temp->astnode.ident.name);
                
                temp->parent = (yyval.ptnode);

                if(temp->nodetype == DataImpliedLoop)
                  type_insert(data_table, temp, Float,
                     temp->astnode.forloop.Label->astnode.ident.name);
                else
                  type_insert(data_table, temp, Float, temp->astnode.ident.name);
              }
            }
    break;

  case 60:
#line 1093 "f2jparse.y"
    {
                     (yyval.ptnode) = (yyvsp[0].ptnode);
                   }
    break;

  case 61:
#line 1097 "f2jparse.y"
    {
                     (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                     (yyval.ptnode) = (yyvsp[0].ptnode);
                   }
    break;

  case 62:
#line 1104 "f2jparse.y"
    {
                    (yyval.ptnode) = (yyvsp[0].ptnode);
                  }
    break;

  case 63:
#line 1108 "f2jparse.y"
    {
                    (yyval.ptnode) = (yyvsp[-2].ptnode);
                    (yyval.ptnode)=addnode();
                    (yyval.ptnode)->nodetype = Binaryop;
                    (yyval.ptnode)->token = STAR;
                    (yyvsp[-2].ptnode)->expr_side = left;
                    (yyvsp[0].ptnode)->expr_side = right;
                    (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
                    (yyvsp[0].ptnode)->parent = (yyval.ptnode);
                    (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
                    (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
                    (yyval.ptnode)->astnode.expression.optype = '*';
                  }
    break;

  case 64:
#line 1124 "f2jparse.y"
    {
                 (yyval.ptnode) = (yyvsp[0].ptnode);
               }
    break;

  case 65:
#line 1128 "f2jparse.y"
    {
                 HASHNODE *hash_temp;
                 if((parameter_table != NULL) &&
                    ((hash_temp = type_lookup(parameter_table, yylval.lexeme)) != NULL))
                 {
                    (yyval.ptnode) = addnode();
                    (yyval.ptnode)->nodetype = Constant;
                    (yyval.ptnode)->vartype = hash_temp->variable->vartype;
                    (yyval.ptnode)->token = hash_temp->variable->token;
                    strcpy((yyval.ptnode)->astnode.constant.number,
                      hash_temp->variable->astnode.constant.number);
                 }
                 else{
                    printf("Error: '%s' is not a constant\n",yylval.lexeme);
                    exit(EXIT_FAILURE);
                 }
               }
    break;

  case 66:
#line 1146 "f2jparse.y"
    {
                 prepend_minus((yyvsp[0].ptnode)->astnode.constant.number);
                 (yyval.ptnode) = (yyvsp[0].ptnode);
               }
    break;

  case 67:
#line 1153 "f2jparse.y"
    {
            (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 68:
#line 1157 "f2jparse.y"
    {
            (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
            (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 69:
#line 1164 "f2jparse.y"
    {
            (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 70:
#line 1168 "f2jparse.y"
    {
            (yyvsp[-1].ptnode)->astnode.forloop.counter = (yyvsp[-3].ptnode);
            (yyvsp[-1].ptnode)->astnode.forloop.Label = (yyvsp[-5].ptnode);
            (yyval.ptnode) = (yyvsp[-1].ptnode);
            (yyvsp[-5].ptnode)->parent = (yyval.ptnode);
            (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
          }
    break;

  case 71:
#line 1178 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
               (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
               (yyvsp[0].ptnode)->parent = (yyval.ptnode);
               (yyval.ptnode)->nodetype = DataImpliedLoop;
               (yyval.ptnode)->astnode.forloop.start = (yyvsp[-2].ptnode);
               (yyval.ptnode)->astnode.forloop.stop = (yyvsp[0].ptnode);
               (yyval.ptnode)->astnode.forloop.incr = NULL;
             }
    break;

  case 72:
#line 1188 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
               (yyvsp[-4].ptnode)->parent = (yyval.ptnode);
               (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
               (yyvsp[0].ptnode)->parent = (yyval.ptnode);
               (yyval.ptnode)->nodetype = DataImpliedLoop;
               (yyval.ptnode)->astnode.forloop.start = (yyvsp[-4].ptnode);
               (yyval.ptnode)->astnode.forloop.stop = (yyvsp[-2].ptnode);
               (yyval.ptnode)->astnode.forloop.incr = (yyvsp[0].ptnode);
             }
    break;

  case 73:
#line 1207 "f2jparse.y"
    {  
                 (yyval.ptnode) = (yyvsp[0].ptnode); 
               }
    break;

  case 74:
#line 1211 "f2jparse.y"
    { 
                 (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode); 
                 (yyval.ptnode) = (yyvsp[0].ptnode); 
               }
    break;

  case 75:
#line 1218 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[-1].ptnode);
                (yyval.ptnode)->nodetype = Assignment;   
              }
    break;

  case 76:
#line 1223 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Call;
              }
    break;

  case 77:
#line 1228 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = StmtLabelAssign;
              }
    break;

  case 78:
#line 1233 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Logicalif;
              }
    break;

  case 79:
#line 1238 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Arithmeticif;
              }
    break;

  case 80:
#line 1243 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Blockif;
              }
    break;

  case 81:
#line 1248 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Forloop;
              }
    break;

  case 82:
#line 1253 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Return;
              }
    break;

  case 83:
#line 1258 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = AssignedGoto;
              }
    break;

  case 84:
#line 1263 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = ComputedGoto;
              }
    break;

  case 85:
#line 1268 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Goto;
              }
    break;

  case 86:
#line 1273 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Label;
              }
    break;

  case 87:
#line 1278 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Label;
              }
    break;

  case 88:
#line 1283 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Label;
              }
    break;

  case 89:
#line 1288 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Write;
              }
    break;

  case 90:
#line 1293 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Read;
              }
    break;

  case 91:
#line 1298 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Stop;
              }
    break;

  case 92:
#line 1303 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Pause;
              }
    break;

  case 93:
#line 1308 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Unimplemented;
              }
    break;

  case 94:
#line 1313 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Unimplemented;
              }
    break;

  case 95:
#line 1318 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Comment;
              }
    break;

  case 96:
#line 1323 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
                (yyval.ptnode)->nodetype = Unimplemented;
              }
    break;

  case 97:
#line 1330 "f2jparse.y"
    {
           (yyval.ptnode) = addnode();
           (yyval.ptnode)->token = COMMENT;
           (yyval.ptnode)->nodetype = Comment;
           (yyval.ptnode)->astnode.ident.len = 0;
           strcpy((yyval.ptnode)->astnode.ident.name, yylval.lexeme);
         }
    break;

  case 98:
#line 1340 "f2jparse.y"
    {
        fprintf(stderr,"Warning: OPEN not implemented.. skipping.\n");

        (yyval.ptnode) = addnode();
        (yyval.ptnode)->nodetype = Unimplemented;
      }
    break;

  case 101:
#line 1355 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 102:
#line 1360 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 103:
#line 1365 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 104:
#line 1370 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 105:
#line 1375 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 106:
#line 1380 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 107:
#line 1385 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 108:
#line 1390 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 109:
#line 1395 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 110:
#line 1400 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 111:
#line 1407 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 112:
#line 1412 "f2jparse.y"
    {
             /* UNIMPLEMENTED */
             (yyval.ptnode) = addnode();
           }
    break;

  case 117:
#line 1431 "f2jparse.y"
    {
          fprintf(stderr,"WArning: CLOSE not implemented.\n");
          (yyval.ptnode) = (yyvsp[-2].ptnode);
        }
    break;

  case 118:
#line 1438 "f2jparse.y"
    {
          fprintf(stderr,"Warning: REWIND not implemented.\n");
          (yyval.ptnode) = (yyvsp[-1].ptnode);
        }
    break;

  case 119:
#line 1445 "f2jparse.y"
    {
       (yyval.ptnode) = addnode();
       (yyval.ptnode)->token = END;
       (yyval.ptnode)->nodetype = End;
     }
    break;

  case 120:
#line 1452 "f2jparse.y"
    {
       AST *end_temp;

       end_temp = addnode();
       end_temp->token = END;
       end_temp->nodetype = End;

       (yyval.ptnode) = addnode();
       end_temp->parent = (yyval.ptnode);
       (yyval.ptnode)->nodetype = Label;
       (yyval.ptnode)->astnode.label.number = atoi((yyvsp[-2].ptnode)->astnode.constant.number);
       (yyval.ptnode)->astnode.label.stmt = end_temp;
       free_ast_node((yyvsp[-2].ptnode));
     }
    break;

  case 121:
#line 1481 "f2jparse.y"
    {init_tables();}
    break;

  case 122:
#line 1482 "f2jparse.y"
    {
                  if(debug){
                     printf("Functionargs -> OP Namelist CP\n");
                  }
                  (yyvsp[-1].ptnode) = switchem((yyvsp[-1].ptnode));
                  arg_table_load((yyvsp[-1].ptnode));
                  (yyval.ptnode) = (yyvsp[-1].ptnode);
                }
    break;

  case 123:
#line 1491 "f2jparse.y"
    {
                  if(debug){
                     printf("Functionargs -> OP Namelist CP\n");
                  }
                  init_tables();
                  (yyval.ptnode) = NULL;
                }
    break;

  case 124:
#line 1502 "f2jparse.y"
    {
              if(debug){
                printf("Namelist -> Name\n");
              }
              (yyval.ptnode)=(yyvsp[0].ptnode);
            }
    break;

  case 125:
#line 1509 "f2jparse.y"
    {
              if(debug){
                printf("Namelist -> Namelist CM Name\n");
              }
              (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode); 
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 126:
#line 1526 "f2jparse.y"
    {
             (yyval.ptnode) = process_typestmt((yyvsp[-2].type), (yyvsp[-1].ptnode));
           }
    break;

  case 127:
#line 1530 "f2jparse.y"
    {
             (yyval.ptnode) = process_typestmt((yyvsp[-2].type), (yyvsp[-1].ptnode));
           }
    break;

  case 128:
#line 1536 "f2jparse.y"
    {
               (yyval.type) = (yyvsp[0].type);
               len = 1;
             }
    break;

  case 129:
#line 1541 "f2jparse.y"
    {
               (yyval.type) = (yyvsp[-2].type);
               len = atoi((yyvsp[0].ptnode)->astnode.constant.number);
               free_ast_node((yyvsp[-1].ptnode));
               free_ast_node((yyvsp[0].ptnode));
             }
    break;

  case 130:
#line 1550 "f2jparse.y"
    { 
                    (yyval.type) = yylval.type;
                    typedec_context = (yyval.type);
                  }
    break;

  case 131:
#line 1557 "f2jparse.y"
    {
              (yyval.type) = (yyvsp[0].type);
              len = 1;
            }
    break;

  case 132:
#line 1562 "f2jparse.y"
    {
              (yyval.type) = (yyvsp[-2].type);
              len = atoi((yyvsp[0].ptnode)->astnode.constant.number);
              free_ast_node((yyvsp[-1].ptnode));
              free_ast_node((yyvsp[0].ptnode));
            }
    break;

  case 133:
#line 1569 "f2jparse.y"
    {
              (yyval.type) = (yyvsp[-4].type);
              len = -1;
              free_ast_node((yyvsp[-3].ptnode));
              free_ast_node((yyvsp[-1].ptnode));
            }
    break;

  case 134:
#line 1578 "f2jparse.y"
    {
                   (yyval.type) = yylval.type;
                   typedec_context = (yyval.type);
                 }
    break;

  case 135:
#line 1585 "f2jparse.y"
    {
                 (yyval.type) = (yyvsp[0].type);
               }
    break;

  case 136:
#line 1589 "f2jparse.y"
    {
                 (yyval.type) = (yyvsp[0].type);
               }
    break;

  case 137:
#line 1595 "f2jparse.y"
    {
            (yyval.type) = (yyvsp[0].type);
          }
    break;

  case 138:
#line 1599 "f2jparse.y"
    {
            (yyval.type) = (yyvsp[0].type);
          }
    break;

  case 139:
#line 1611 "f2jparse.y"
    {
                    (yyvsp[0].ptnode)->parent = addnode();
                    (yyvsp[0].ptnode)->parent->nodetype = Typedec;

                    (yyval.ptnode) = (yyvsp[0].ptnode);
                  }
    break;

  case 140:
#line 1618 "f2jparse.y"
    {
                    (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                    (yyvsp[0].ptnode)->parent = (yyvsp[-2].ptnode)->parent;
                    (yyval.ptnode) = (yyvsp[0].ptnode);
                  }
    break;

  case 141:
#line 1626 "f2jparse.y"
    {
                  (yyval.ptnode) = (yyvsp[0].ptnode);
                  (yyval.ptnode)->astnode.ident.len = -1;
                }
    break;

  case 142:
#line 1631 "f2jparse.y"
    {
                  (yyval.ptnode) = (yyvsp[-2].ptnode);
                  (yyval.ptnode)->astnode.ident.len = atoi((yyvsp[0].ptnode)->astnode.constant.number);
                }
    break;

  case 143:
#line 1636 "f2jparse.y"
    {
                  (yyval.ptnode) = (yyvsp[0].ptnode);
                  (yyval.ptnode)->astnode.ident.len = -1;
                }
    break;

  case 144:
#line 1643 "f2jparse.y"
    {
                   (yyvsp[0].ptnode)->parent = addnode();
                   (yyvsp[0].ptnode)->parent->nodetype = Typedec;

                   (yyval.ptnode) = (yyvsp[0].ptnode);
                 }
    break;

  case 145:
#line 1650 "f2jparse.y"
    {
                   (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                   (yyvsp[0].ptnode)->parent = (yyvsp[-2].ptnode)->parent;
                   (yyval.ptnode) = (yyvsp[0].ptnode);
                 }
    break;

  case 146:
#line 1658 "f2jparse.y"
    {
                 (yyval.ptnode) = (yyvsp[0].ptnode);
                 (yyval.ptnode)->astnode.ident.len = -1;
               }
    break;

  case 147:
#line 1663 "f2jparse.y"
    {
                 (yyval.ptnode) = (yyvsp[-2].ptnode);
                 (yyval.ptnode)->astnode.ident.len = atoi((yyvsp[0].ptnode)->astnode.constant.number);
               }
    break;

  case 148:
#line 1668 "f2jparse.y"
    {
                 (yyval.ptnode) = (yyvsp[-4].ptnode);
                 (yyval.ptnode)->astnode.ident.len = -1;
               }
    break;

  case 149:
#line 1673 "f2jparse.y"
    {
                 (yyval.ptnode) = (yyvsp[0].ptnode);
                 (yyval.ptnode)->astnode.ident.len = -1;
               }
    break;

  case 150:
#line 1693 "f2jparse.y"
    {
           HASHNODE *hashtemp;

           lowercase(yylval.lexeme);

           if(type_lookup(java_keyword_table,yylval.lexeme) ||
             type_lookup(jasmin_keyword_table,yylval.lexeme))
                yylval.lexeme[0] = toupper(yylval.lexeme[0]);


           /* check if the name we're looking at is defined as a parameter.
            * if so, instead of inserting an Identifier node here, we're just
            * going to insert the Constant node that corresponds to
            * the parameter.  normally the only time we'd worry about
            * such a substitution would be when the ident was the lhs
            * of some expression, but that should not happen with parameters.
            *
            * otherwise, if not a parameter, get a new AST node initialized
            * with this name.
            *
            * added check for null parameter table because this Name could
            * be reduced before we initialize the tables.  that would mean
            * that this name is the function name, so we dont want this to
            * be a parameter anyway.  kgs 11/7/00
            * 
            */
          

           if((parameter_table != NULL) &&
              ((hashtemp = type_lookup(parameter_table,yylval.lexeme)) != NULL))
           {
             /* had a problem here just setting $$ = hashtemp->variable
              * when there's an arraydec with two of the same PARAMETERS
              * in the arraynamelist, e.g. A(NMAX,NMAX).   so, instead we
              * just copy the relevant fields from the constant node.
              */
             if(debug)
               printf("not calling init name, param %s\n", yylval.lexeme);
             (yyval.ptnode) = addnode();
             (yyval.ptnode)->nodetype = hashtemp->variable->nodetype;
             (yyval.ptnode)->vartype = hashtemp->variable->vartype;
             (yyval.ptnode)->token = hashtemp->variable->token;
             strcpy((yyval.ptnode)->astnode.constant.number,
               hashtemp->variable->astnode.constant.number);
           }
           else{
             if(debug)
               printf("Name -> NAME\n");
             (yyval.ptnode) = initialize_name(yylval.lexeme);
           }
         }
    break;

  case 151:
#line 1754 "f2jparse.y"
    {
                  lowercase(yylval.lexeme);

                  (yyval.ptnode)=addnode();
                  (yyval.ptnode)->token = NAME;
                  (yyval.ptnode)->nodetype = Identifier;

                  (yyval.ptnode)->astnode.ident.needs_declaration = FALSE;

                  if(omitWrappers)
                    (yyval.ptnode)->astnode.ident.passByRef = FALSE;

                  if(type_lookup(java_keyword_table,yylval.lexeme) ||
                     type_lookup(jasmin_keyword_table,yylval.lexeme))
                        yylval.lexeme[0] = toupper(yylval.lexeme[0]);

                  strcpy((yyval.ptnode)->astnode.ident.name, yylval.lexeme);
                }
    break;

  case 152:
#line 1775 "f2jparse.y"
    {
              (yyval.ptnode)=(yyvsp[0].ptnode);
            }
    break;

  case 153:
#line 1779 "f2jparse.y"
    {
              (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 154:
#line 1786 "f2jparse.y"
    {
           (yyval.ptnode)=addnode();
           (yyval.ptnode)->token = STRING;
           (yyval.ptnode)->nodetype = Constant;
           strcpy((yyval.ptnode)->astnode.constant.number, yylval.lexeme);

           (yyval.ptnode)->vartype = String;
           if(debug)
             printf("**The string value is %s\n",(yyval.ptnode)->astnode.constant.number);
         }
    break;

  case 155:
#line 1797 "f2jparse.y"
    {
           (yyval.ptnode)=addnode();
           (yyval.ptnode)->token = STRING;
           (yyval.ptnode)->nodetype = Constant;
           strcpy((yyval.ptnode)->astnode.constant.number, yylval.lexeme);

           (yyval.ptnode)->vartype = String;
           if(debug)
             printf("**The char value is %s\n",(yyval.ptnode)->astnode.constant.number);
         }
    break;

  case 156:
#line 1810 "f2jparse.y"
    {
                    (yyval.ptnode) = process_array_declaration((yyvsp[-3].ptnode), (yyvsp[-1].ptnode));
                  }
    break;

  case 157:
#line 1816 "f2jparse.y"
    {
                    AST *temp;

                    temp = addnode();
                    temp->nodetype = ArrayDec;
                    (yyvsp[0].ptnode)->parent = temp;
                    if((yyvsp[0].ptnode)->nodetype == ArrayIdxRange) {
                      (yyvsp[0].ptnode)->astnode.expression.lhs->parent = temp;
                      (yyvsp[0].ptnode)->astnode.expression.rhs->parent = temp;
                    }

                    (yyval.ptnode)=(yyvsp[0].ptnode);
                  }
    break;

  case 158:
#line 1830 "f2jparse.y"
    {
                    (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode); 
                    (yyvsp[0].ptnode)->parent = (yyvsp[-2].ptnode)->parent;
                    if((yyvsp[0].ptnode)->nodetype == ArrayIdxRange) {
                      (yyvsp[0].ptnode)->astnode.expression.lhs->parent = (yyvsp[-2].ptnode)->parent;
                      (yyvsp[0].ptnode)->astnode.expression.rhs->parent = (yyvsp[-2].ptnode)->parent;
                    }
                    (yyval.ptnode) = (yyvsp[0].ptnode);
                  }
    break;

  case 159:
#line 1842 "f2jparse.y"
    {
             (yyval.ptnode) = (yyvsp[0].ptnode); 
           }
    break;

  case 160:
#line 1846 "f2jparse.y"
    {
             (yyval.ptnode)=(yyvsp[0].ptnode);
           }
    break;

  case 161:
#line 1850 "f2jparse.y"
    {
             (yyval.ptnode) = addnode();
             (yyval.ptnode)->nodetype = ArrayIdxRange;
             (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
             (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
           }
    break;

  case 162:
#line 1864 "f2jparse.y"
    {
         (yyval.ptnode)=addnode();
         (yyval.ptnode)->nodetype = Identifier;
        *(yyval.ptnode)->astnode.ident.name = '*';
       }
    break;

  case 163:
#line 1872 "f2jparse.y"
    {
                   (yyval.ptnode) = addnode();
                   (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
                   (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
                   (yyval.ptnode)->nodetype = StmtLabelAssign;
                   (yyval.ptnode)->astnode.assignment.lhs = (yyvsp[-1].ptnode);
                   (yyval.ptnode)->astnode.assignment.rhs = (yyvsp[-3].ptnode);

                   /* add this label to the list of assigned labels */

                   if(in_dlist_stmt_label(assign_labels, (yyvsp[-3].ptnode)) == 0) {
                     if(debug)
                       printf("inserting label num %s in assign_labels list\n",
                         (yyvsp[-3].ptnode)->astnode.constant.number);
                     dl_insert_b(assign_labels, (yyvsp[-3].ptnode));
                   }
                 }
    break;

  case 164:
#line 1899 "f2jparse.y"
    { 
                (yyval.ptnode) = addnode();
                (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
                (yyvsp[0].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
                (yyval.ptnode)->nodetype = Assignment;
                (yyval.ptnode)->astnode.assignment.lhs = (yyvsp[-2].ptnode);
                (yyval.ptnode)->astnode.assignment.rhs = (yyvsp[0].ptnode);
             }
    break;

  case 165:
#line 1910 "f2jparse.y"
    {
           (yyval.ptnode)=(yyvsp[0].ptnode);
           (yyval.ptnode)->nextstmt = NULL;
           (yyval.ptnode)->prevstmt = NULL;
         }
    break;

  case 166:
#line 1916 "f2jparse.y"
    {
           AST *temp;

           /*   Use the following declaration in case we 
            *   need to switch index order. 
            *
            *   HASHNODE * hashtemp;  
            */

           (yyval.ptnode) = addnode();
           (yyvsp[-3].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
           (yyval.ptnode)->nodetype = Identifier;
           (yyval.ptnode)->prevstmt = NULL;
           (yyval.ptnode)->nextstmt = NULL;

           free_ast_node((yyvsp[-1].ptnode)->parent);
           for(temp = (yyvsp[-1].ptnode); temp != NULL; temp = temp->prevstmt)
             temp->parent = (yyval.ptnode);

           strcpy((yyval.ptnode)->astnode.ident.name, (yyvsp[-3].ptnode)->astnode.ident.name);

           /*  This is in case we want to switch index order later.
            *
            *  hashtemp = type_lookup(array_table, $1->astnode.ident.name);
            *  if(hashtemp)
            *    $$->astnode.ident.arraylist = $3;
            *  else
            *    $$->astnode.ident.arraylist = switchem($3);
            */

           /* We don't switch index order.  */

           (yyval.ptnode)->astnode.ident.arraylist = switchem((yyvsp[-1].ptnode));
           free_ast_node((yyvsp[-3].ptnode));
         }
    break;

  case 167:
#line 1952 "f2jparse.y"
    {
           (yyval.ptnode) = (yyvsp[0].ptnode);
         }
    break;

  case 168:
#line 1958 "f2jparse.y"
    { 
                    (yyvsp[0].ptnode)->parent = addnode();
                    (yyvsp[0].ptnode)->parent->nodetype = Identifier;

                    (yyval.ptnode) = (yyvsp[0].ptnode);
                  }
    break;

  case 169:
#line 1965 "f2jparse.y"
    {
                    (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
                    (yyvsp[0].ptnode)->parent = (yyvsp[-2].ptnode)->parent;
		    (yyval.ptnode) = (yyvsp[0].ptnode);
		  }
    break;

  case 170:
#line 1977 "f2jparse.y"
    {
            (yyval.ptnode) = (yyvsp[0].ptnode);
            (yyval.ptnode)->nodetype = Forloop;
            (yyval.ptnode)->astnode.forloop.Label = (yyvsp[-1].ptnode);
          }
    break;

  case 171:
#line 1986 "f2jparse.y"
    { 
            (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 172:
#line 1991 "f2jparse.y"
    { 
            (yyval.ptnode) = (yyvsp[-1].ptnode);
          }
    break;

  case 173:
#line 1995 "f2jparse.y"
    {
            char *loop_label;

            loop_label = (char *)malloc(32);
            if(!loop_label) {
              fprintf(stderr,"Malloc error\n");
              exit(EXIT_FAILURE);
            }
            sprintf(loop_label,"%d", cur_do_label);
            cur_do_label++;

            (yyval.ptnode) = addnode();
            (yyval.ptnode)->token = INTEGER;
            (yyval.ptnode)->nodetype = Constant;
            strcpy((yyval.ptnode)->astnode.constant.number, loop_label);
            (yyval.ptnode)->vartype = Integer;

            dl_insert_b(do_labels, strdup((yyval.ptnode)->astnode.constant.number));

            free(loop_label);
          }
    break;

  case 174:
#line 2020 "f2jparse.y"
    {
            AST *counter;

            (yyval.ptnode) = addnode();
	    (yyvsp[-3].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	    (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
            counter = (yyval.ptnode)->astnode.forloop.counter = (yyvsp[-3].ptnode)->astnode.assignment.lhs;
            (yyval.ptnode)->astnode.forloop.start = (yyvsp[-3].ptnode);
            (yyval.ptnode)->astnode.forloop.stop = (yyvsp[-1].ptnode);
            (yyval.ptnode)->astnode.forloop.incr = NULL;
            (yyval.ptnode)->astnode.forloop.iter_expr = gen_iter_expr((yyvsp[-3].ptnode)->astnode.assignment.rhs,(yyvsp[-1].ptnode),NULL);
            (yyval.ptnode)->astnode.forloop.incr_expr = gen_incr_expr(counter,NULL);
          }
    break;

  case 175:
#line 2034 "f2jparse.y"
    {
           AST *counter;

           (yyval.ptnode) = addnode();
	   (yyvsp[-5].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	   (yyvsp[-3].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	   (yyvsp[-1].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
           counter = (yyval.ptnode)->astnode.forloop.counter = (yyvsp[-5].ptnode)->astnode.assignment.lhs;
           (yyval.ptnode)->nodetype = Forloop;
           (yyval.ptnode)->astnode.forloop.start = (yyvsp[-5].ptnode);
           (yyval.ptnode)->astnode.forloop.stop = (yyvsp[-3].ptnode);
           (yyval.ptnode)->astnode.forloop.incr = (yyvsp[-1].ptnode);
           (yyval.ptnode)->astnode.forloop.iter_expr = gen_iter_expr((yyvsp[-5].ptnode)->astnode.assignment.rhs,(yyvsp[-3].ptnode),(yyvsp[-1].ptnode));
           (yyval.ptnode)->astnode.forloop.incr_expr = gen_incr_expr(counter,(yyvsp[-1].ptnode));
         }
    break;

  case 176:
#line 2056 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
         (yyvsp[0].ptnode)->parent = (yyval.ptnode);
         (yyval.ptnode)->nodetype = Label;
         (yyval.ptnode)->astnode.label.number = atoi((yyvsp[-1].ptnode)->astnode.constant.number);
         (yyval.ptnode)->astnode.label.stmt = (yyvsp[0].ptnode);
         free_ast_node((yyvsp[-1].ptnode));
       }
    break;

  case 177:
#line 2066 "f2jparse.y"
    {
         /* HASHNODE *newnode; */
         char *tmpLabel;

         tmpLabel = (char *) f2jalloc(10); /* plenty of space for a f77 label num */

         /* newnode = (HASHNODE *) f2jalloc(sizeof(HASHNODE)); */

         (yyval.ptnode) = addnode();
         (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
         (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
         (yyval.ptnode)->nodetype = Format;
         (yyval.ptnode)->astnode.label.number = atoi((yyvsp[-2].ptnode)->astnode.constant.number);
         (yyval.ptnode)->astnode.label.stmt = (yyvsp[-1].ptnode);
         (yyvsp[-1].ptnode)->astnode.label.number = (yyval.ptnode)->astnode.label.number;
         if(debug)
           printf("@@ inserting format line num %d\n",(yyval.ptnode)->astnode.label.number);

         sprintf(tmpLabel,"%d",(yyvsp[-1].ptnode)->astnode.label.number);

         type_insert(format_table,(yyvsp[-1].ptnode),0,tmpLabel);
         free_ast_node((yyvsp[-2].ptnode));
       }
    break;

  case 178:
#line 2096 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->nodetype = Format;
         (yyval.ptnode)->astnode.label.stmt = switchem((yyvsp[-1].ptnode));
       }
    break;

  case 179:
#line 2104 "f2jparse.y"
    {
             AST *temp;

             temp = addnode();
             temp->nodetype = Format;
             (yyvsp[0].ptnode)->parent = temp;

             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 180:
#line 2114 "f2jparse.y"
    {
             (yyvsp[-1].ptnode)->nextstmt = (yyvsp[0].ptnode);
             (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode);
             (yyvsp[0].ptnode)->parent = (yyvsp[-1].ptnode)->parent;
             if(((yyvsp[0].ptnode)->token == REPEAT) && ((yyvsp[-1].ptnode)->token == INTEGER)) {
               (yyvsp[0].ptnode)->astnode.label.number = atoi((yyvsp[-1].ptnode)->astnode.constant.number);

               if(debug)
                 printf("## setting number = %s\n", (yyvsp[-1].ptnode)->astnode.constant.number);
             }
             if(debug) {
               if((yyvsp[0].ptnode)->token == REPEAT)
                 printf("## $2 is repeat token, $1 = %s ##\n",tok2str((yyvsp[-1].ptnode)->token));
               if((yyvsp[-1].ptnode)->token == REPEAT)
                 printf("## $1 is repeat token, $2 = %s ##\n",tok2str((yyvsp[0].ptnode)->token));
             }
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 181:
#line 2136 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 182:
#line 2140 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 183:
#line 2144 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 184:
#line 2150 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->token = EDIT_DESC;
         strcpy((yyval.ptnode)->astnode.ident.name, yylval.lexeme);
       }
    break;

  case 185:
#line 2156 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 186:
#line 2160 "f2jparse.y"
    {
         /* ignore the constant part for now */
         free_ast_node((yyvsp[0].ptnode));

         (yyval.ptnode) = (yyvsp[-2].ptnode);
       }
    break;

  case 187:
#line 2167 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->token = REPEAT;
         (yyval.ptnode)->astnode.label.stmt = switchem((yyvsp[-1].ptnode));
         if(debug)
           printf("## setting number = 1\n");
         (yyval.ptnode)->astnode.label.number = 1;
       }
    break;

  case 188:
#line 2178 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 189:
#line 2182 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 190:
#line 2189 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->token = CM;
       }
    break;

  case 191:
#line 2194 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->token = DIV;
       }
    break;

  case 192:
#line 2199 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->token = CAT;
       }
    break;

  case 193:
#line 2204 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->token = COLON;
       }
    break;

  case 194:
#line 2211 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 195:
#line 2215 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 196:
#line 2230 "f2jparse.y"
    {
         (yyval.ptnode) = addnode();
	 (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	 (yyval.ptnode)->nodetype = Label;
	 (yyval.ptnode)->astnode.label.number = atoi((yyvsp[-2].ptnode)->astnode.constant.number);
	 (yyval.ptnode)->astnode.label.stmt = NULL;
         free_ast_node((yyvsp[-2].ptnode));
       }
    break;

  case 197:
#line 2241 "f2jparse.y"
    {
          char *loop_label;

          (yyval.ptnode) = addnode();
          (yyval.ptnode)->nodetype = Label;

          loop_label = (char *)dl_pop(do_labels);

          (yyval.ptnode)->astnode.label.number = atoi(loop_label);
          (yyval.ptnode)->astnode.label.stmt = NULL;
        }
    break;

  case 198:
#line 2255 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->astnode.io_stmt.io_type = Write;
         (yyval.ptnode)->astnode.io_stmt.fmt_list = NULL;

         /*  unimplemented
           $$->astnode.io_stmt.file_desc = ;
         */

         if((yyvsp[-3].ptnode)->nodetype == Constant)
         {
           if((yyvsp[-3].ptnode)->astnode.constant.number[0] == '*') {
             (yyval.ptnode)->astnode.io_stmt.format_num = -1;
             free_ast_node((yyvsp[-3].ptnode));
           }
           else if((yyvsp[-3].ptnode)->token == STRING) {
             (yyval.ptnode)->astnode.io_stmt.format_num = -1;
             (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-3].ptnode);
           }
           else {
             (yyval.ptnode)->astnode.io_stmt.format_num = atoi((yyvsp[-3].ptnode)->astnode.constant.number);
             free_ast_node((yyvsp[-3].ptnode));
           }
         }
         else
         {
           /* is this case ever reached??  i don't think so.  --kgs */
           (yyval.ptnode)->astnode.io_stmt.format_num = -1;
           (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-3].ptnode);
         }
 
         (yyval.ptnode)->astnode.io_stmt.arg_list = switchem((yyvsp[-1].ptnode));

         for(temp=(yyval.ptnode)->astnode.io_stmt.arg_list;temp!=NULL;temp=temp->nextstmt)
           temp->parent->nodetype = Write;

         /* currently ignoring the file descriptor.. */
         free_ast_node((yyvsp[-5].ptnode));
       }
    break;

  case 199:
#line 2297 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->astnode.io_stmt.io_type = Write;
         (yyval.ptnode)->astnode.io_stmt.fmt_list = NULL;

         (yyval.ptnode)->astnode.io_stmt.format_num = atoi((yyvsp[-2].ptnode)->astnode.constant.number);
         (yyval.ptnode)->astnode.io_stmt.arg_list = switchem((yyvsp[-1].ptnode));

         for(temp=(yyval.ptnode)->astnode.io_stmt.arg_list;temp!=NULL;temp=temp->nextstmt)
           temp->parent->nodetype = Write;
         free_ast_node((yyvsp[-2].ptnode));
       }
    break;

  case 200:
#line 2312 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->astnode.io_stmt.io_type = Write;
         (yyval.ptnode)->astnode.io_stmt.fmt_list = NULL;

         (yyval.ptnode)->astnode.io_stmt.format_num = -1;
         (yyval.ptnode)->astnode.io_stmt.arg_list = switchem((yyvsp[-1].ptnode));
           
         for(temp=(yyval.ptnode)->astnode.io_stmt.arg_list;temp!=NULL;temp=temp->nextstmt)
           temp->parent->nodetype = Write;
       }
    break;

  case 201:
#line 2326 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->astnode.io_stmt.io_type = Write;
         (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-2].ptnode);

         (yyval.ptnode)->astnode.io_stmt.format_num = -1;
         (yyval.ptnode)->astnode.io_stmt.arg_list = switchem((yyvsp[-1].ptnode));

         for(temp=(yyval.ptnode)->astnode.io_stmt.arg_list;temp!=NULL;temp=temp->nextstmt)
           temp->parent->nodetype = Write;
       }
    break;

  case 202:
#line 2342 "f2jparse.y"
    {
               (yyval.ptnode) = (yyvsp[0].ptnode);
             }
    break;

  case 203:
#line 2346 "f2jparse.y"
    {
               (yyval.ptnode) = NULL;
             }
    break;

  case 204:
#line 2355 "f2jparse.y"
    {
         /* do nothing for now */
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 205:
#line 2360 "f2jparse.y"
    {
         /* do nothing for now */
          (yyval.ptnode) = addnode();
          (yyval.ptnode)->token = INTEGER;
          (yyval.ptnode)->nodetype = Constant;
          strcpy((yyval.ptnode)->astnode.constant.number,"*");
          (yyval.ptnode)->vartype = Integer;
       }
    break;

  case 206:
#line 2372 "f2jparse.y"
    {
          (yyval.ptnode) = (yyvsp[0].ptnode);
        }
    break;

  case 207:
#line 2376 "f2jparse.y"
    {
          (yyval.ptnode) = (yyvsp[0].ptnode);
        }
    break;

  case 208:
#line 2380 "f2jparse.y"
    {
          (yyval.ptnode) = addnode();
	  (yyval.ptnode)->token = INTEGER;
          (yyval.ptnode)->nodetype = Constant;
          strcpy((yyval.ptnode)->astnode.constant.number,"*");
	  (yyval.ptnode)->vartype = Integer;
        }
    break;

  case 209:
#line 2388 "f2jparse.y"
    {
          (yyval.ptnode) = addnode();
	  (yyval.ptnode)->token = INTEGER;
          (yyval.ptnode)->nodetype = Constant;
          strcpy((yyval.ptnode)->astnode.constant.number,"*");
	  (yyval.ptnode)->vartype = Integer;
        }
    break;

  case 210:
#line 2396 "f2jparse.y"
    {
          (yyval.ptnode) = (yyvsp[0].ptnode);
        }
    break;

  case 211:
#line 2400 "f2jparse.y"
    {
          fprintf(stderr,"Warning - ignoring FMT = %s\n",
             (yyvsp[0].ptnode)->astnode.ident.name);
          (yyval.ptnode) = addnode();
	  (yyval.ptnode)->token = INTEGER;
          (yyval.ptnode)->nodetype = Constant;
          strcpy((yyval.ptnode)->astnode.constant.number,"*");
	  (yyval.ptnode)->vartype = Integer;
        }
    break;

  case 212:
#line 2412 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->astnode.io_stmt.io_type = Read;
         (yyval.ptnode)->astnode.io_stmt.fmt_list = NULL;
         (yyval.ptnode)->astnode.io_stmt.end_num = -1;

         if((yyvsp[-3].ptnode)->nodetype == Constant)
         {
           if((yyvsp[-3].ptnode)->astnode.constant.number[0] == '*') {
             (yyval.ptnode)->astnode.io_stmt.format_num = -1;
             free_ast_node((yyvsp[-3].ptnode));
           }
           else if((yyvsp[-3].ptnode)->token == STRING) {
             (yyval.ptnode)->astnode.io_stmt.format_num = -1;
             (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-3].ptnode);
           }
           else {
             (yyval.ptnode)->astnode.io_stmt.format_num = atoi((yyvsp[-3].ptnode)->astnode.constant.number);
             free_ast_node((yyvsp[-3].ptnode));
           }
         }
         else
         {
           /* is this case ever reached??  i don't think so.  --kgs */
           (yyval.ptnode)->astnode.io_stmt.format_num = -1;
           (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-3].ptnode);
         }

         (yyval.ptnode)->astnode.io_stmt.arg_list = switchem((yyvsp[-1].ptnode));

         if((yyval.ptnode)->astnode.io_stmt.arg_list && (yyval.ptnode)->astnode.io_stmt.arg_list->parent)
           free_ast_node((yyval.ptnode)->astnode.io_stmt.arg_list->parent);

         for(temp=(yyval.ptnode)->astnode.io_stmt.arg_list;temp!=NULL;temp=temp->nextstmt)
           temp->parent = (yyval.ptnode);

         /* currently ignoring the file descriptor and format spec. */
         free_ast_node((yyvsp[-5].ptnode));
      }
    break;

  case 213:
#line 2454 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->astnode.io_stmt.io_type = Read;
         (yyval.ptnode)->astnode.io_stmt.fmt_list = NULL;

         if((yyvsp[-5].ptnode)->nodetype == Constant)
         {
           if((yyvsp[-5].ptnode)->astnode.constant.number[0] == '*') {
             (yyval.ptnode)->astnode.io_stmt.format_num = -1;
             free_ast_node((yyvsp[-5].ptnode));
           }
           else if((yyvsp[-5].ptnode)->token == STRING) {
             (yyval.ptnode)->astnode.io_stmt.format_num = -1;
             (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-5].ptnode);
           }
           else {
             (yyval.ptnode)->astnode.io_stmt.format_num = atoi((yyvsp[-5].ptnode)->astnode.constant.number);
             free_ast_node((yyvsp[-5].ptnode));
           }
         }
         else
         {
           /* is this case ever reached??  i don't think so.  --kgs */
           (yyval.ptnode)->astnode.io_stmt.format_num = -1;
           (yyval.ptnode)->astnode.io_stmt.fmt_list = (yyvsp[-5].ptnode);
         }

         (yyval.ptnode)->astnode.io_stmt.end_num = atoi((yyvsp[-3].ptnode)->astnode.constant.number);
         free_ast_node((yyvsp[-3].ptnode));

         (yyval.ptnode)->astnode.io_stmt.arg_list = switchem((yyvsp[-1].ptnode));

         if((yyval.ptnode)->astnode.io_stmt.arg_list && (yyval.ptnode)->astnode.io_stmt.arg_list->parent)
           free_ast_node((yyval.ptnode)->astnode.io_stmt.arg_list->parent);

         for(temp=(yyval.ptnode)->astnode.io_stmt.arg_list;temp!=NULL;temp=temp->nextstmt)
           temp->parent = (yyval.ptnode);

         /* currently ignoring the file descriptor.. */
         free_ast_node((yyvsp[-7].ptnode));
      }
    break;

  case 214:
#line 2500 "f2jparse.y"
    {
             (yyvsp[0].ptnode)->parent = addnode();
             (yyvsp[0].ptnode)->parent->nodetype = IoExplist;

             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 215:
#line 2507 "f2jparse.y"
    {
             (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
             (yyvsp[0].ptnode)->parent = (yyvsp[-2].ptnode)->parent;
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 216:
#line 2513 "f2jparse.y"
    {
             (yyval.ptnode) = NULL;
           }
    break;

  case 217:
#line 2519 "f2jparse.y"
    {
         (yyval.ptnode) = (yyvsp[0].ptnode);
       }
    break;

  case 218:
#line 2523 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->nodetype = IoImpliedLoop;
         (yyval.ptnode)->astnode.forloop.start = (yyvsp[-3].ptnode);
         (yyval.ptnode)->astnode.forloop.stop = (yyvsp[-1].ptnode);
         (yyval.ptnode)->astnode.forloop.incr = NULL;
         (yyval.ptnode)->astnode.forloop.counter = (yyvsp[-5].ptnode);
         (yyval.ptnode)->astnode.forloop.Label = switchem((yyvsp[-7].ptnode));
         (yyval.ptnode)->astnode.forloop.iter_expr = gen_iter_expr((yyvsp[-3].ptnode),(yyvsp[-1].ptnode),NULL);
         (yyval.ptnode)->astnode.forloop.incr_expr = gen_incr_expr((yyvsp[-5].ptnode),NULL);

         (yyvsp[-7].ptnode)->parent = (yyval.ptnode);
         for(temp = (yyvsp[-7].ptnode); temp != NULL; temp = temp->nextstmt)
           temp->parent = (yyval.ptnode);
         (yyvsp[-5].ptnode)->parent = (yyval.ptnode);
         (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
         (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
       }
    break;

  case 219:
#line 2544 "f2jparse.y"
    {
         AST *temp;

         (yyval.ptnode) = addnode();
         (yyval.ptnode)->nodetype = IoImpliedLoop;
         (yyval.ptnode)->astnode.forloop.start = (yyvsp[-5].ptnode);
         (yyval.ptnode)->astnode.forloop.stop = (yyvsp[-3].ptnode);
         (yyval.ptnode)->astnode.forloop.incr = (yyvsp[-1].ptnode);
         (yyval.ptnode)->astnode.forloop.counter = (yyvsp[-7].ptnode);
         (yyval.ptnode)->astnode.forloop.Label = switchem((yyvsp[-9].ptnode));
         (yyval.ptnode)->astnode.forloop.iter_expr = gen_iter_expr((yyvsp[-5].ptnode),(yyvsp[-3].ptnode),(yyvsp[-1].ptnode));
         (yyval.ptnode)->astnode.forloop.incr_expr = gen_incr_expr((yyvsp[-7].ptnode),(yyvsp[-1].ptnode));

         (yyvsp[-9].ptnode)->parent = (yyval.ptnode);
         for(temp = (yyvsp[-9].ptnode); temp != NULL; temp = temp->nextstmt)
           temp->parent = (yyval.ptnode);
         (yyvsp[-7].ptnode)->parent = (yyval.ptnode);
         (yyvsp[-5].ptnode)->parent = (yyval.ptnode);
         (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
         (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
       }
    break;

  case 220:
#line 2568 "f2jparse.y"
    {
           (yyval.ptnode) = (yyvsp[0].ptnode);
         }
    break;

  case 221:
#line 2582 "f2jparse.y"
    {
             (yyval.ptnode) = addnode();
             (yyvsp[-8].ptnode)->parent = (yyval.ptnode);
             if((yyvsp[-4].ptnode) != NULL)
               (yyvsp[-4].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
             if((yyvsp[-3].ptnode) != NULL) 
               (yyvsp[-3].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
             if((yyvsp[-2].ptnode) != NULL)
               (yyvsp[-2].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
             (yyval.ptnode)->nodetype = Blockif;
             (yyval.ptnode)->astnode.blockif.conds = (yyvsp[-8].ptnode);
             (yyvsp[-4].ptnode) = switchem((yyvsp[-4].ptnode));
             (yyval.ptnode)->astnode.blockif.stmts = (yyvsp[-4].ptnode);

             /*  If there are any `else if' statements,
              *  switchem. Otherwise, NULL pointer checked
              *  in code generating functions. 
              */
             (yyvsp[-3].ptnode) = switchem((yyvsp[-3].ptnode)); 
             (yyval.ptnode)->astnode.blockif.elseifstmts = (yyvsp[-3].ptnode); /* Might be NULL. */
             (yyval.ptnode)->astnode.blockif.elsestmts = (yyvsp[-2].ptnode);   /* Might be NULL. */

             (yyval.ptnode)->astnode.blockif.endif_label = (yyvsp[-1].ptnode)->astnode.blockif.endif_label;
           }
    break;

  case 222:
#line 2608 "f2jparse.y"
    {(yyval.ptnode)=0;}
    break;

  case 223:
#line 2610 "f2jparse.y"
    {
             (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 224:
#line 2615 "f2jparse.y"
    {(yyval.ptnode)=0;}
    break;

  case 225:
#line 2617 "f2jparse.y"
    {
              (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 226:
#line 2621 "f2jparse.y"
    {
             (yyvsp[0].ptnode)->prevstmt = (yyvsp[-1].ptnode);
	     (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 227:
#line 2629 "f2jparse.y"
    {
          (yyval.ptnode)=addnode();
	  (yyvsp[-4].ptnode)->parent = (yyval.ptnode);  
	  (yyvsp[0].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
	  (yyval.ptnode)->nodetype = Elseif;
	  (yyval.ptnode)->astnode.blockif.conds = (yyvsp[-4].ptnode);
	  (yyval.ptnode)->astnode.blockif.stmts = switchem((yyvsp[0].ptnode));
        }
    break;

  case 228:
#line 2640 "f2jparse.y"
    {(yyval.ptnode)=0;}
    break;

  case 229:
#line 2642 "f2jparse.y"
    {
            (yyval.ptnode)=addnode();
            (yyvsp[0].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
            (yyval.ptnode)->nodetype = Else;
            (yyval.ptnode)->astnode.blockif.stmts = switchem((yyvsp[0].ptnode));
          }
    break;

  case 230:
#line 2649 "f2jparse.y"
    {
            (yyval.ptnode) = 0;
          }
    break;

  case 231:
#line 2655 "f2jparse.y"
    {
         if(debug) printf("EndIf\n");
         (yyval.ptnode) = addnode();
         (yyval.ptnode)->nodetype = Blockif;

         if(strlen(yylval.lexeme) > 0)
           (yyval.ptnode)->astnode.blockif.endif_label = atoi(yylval.lexeme);
         else
           (yyval.ptnode)->astnode.blockif.endif_label = -1;
       }
    break;

  case 232:
#line 2668 "f2jparse.y"
    {
             (yyval.ptnode) = addnode();
             (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
             (yyvsp[0].ptnode)->parent = (yyval.ptnode); /* 9-4-97 - Keith */
             (yyval.ptnode)->astnode.logicalif.conds = (yyvsp[-2].ptnode);
             (yyval.ptnode)->astnode.logicalif.stmts = (yyvsp[0].ptnode);
           }
    break;

  case 233:
#line 2678 "f2jparse.y"
    {
                (yyval.ptnode) = addnode();
                (yyval.ptnode)->nodetype = Arithmeticif;
                (yyvsp[-7].ptnode)->parent = (yyval.ptnode);
                (yyvsp[-5].ptnode)->parent = (yyval.ptnode);
                (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
                (yyvsp[-1].ptnode)->parent = (yyval.ptnode);

                (yyval.ptnode)->astnode.arithmeticif.cond = (yyvsp[-7].ptnode);
                (yyval.ptnode)->astnode.arithmeticif.neg_label  = atoi((yyvsp[-5].ptnode)->astnode.constant.number);
                (yyval.ptnode)->astnode.arithmeticif.zero_label = atoi((yyvsp[-3].ptnode)->astnode.constant.number);
                (yyval.ptnode)->astnode.arithmeticif.pos_label  = atoi((yyvsp[-1].ptnode)->astnode.constant.number);
                free_ast_node((yyvsp[-5].ptnode));
                free_ast_node((yyvsp[-3].ptnode));
                free_ast_node((yyvsp[-1].ptnode));
              }
    break;

  case 234:
#line 2708 "f2jparse.y"
    {
                    (yyval.ptnode) = process_subroutine_call((yyvsp[-3].ptnode), (yyvsp[-1].ptnode));
                  }
    break;

  case 235:
#line 2714 "f2jparse.y"
    {
               if(debug)
                 printf("SubString! format = c(e1:e2)\n");
               (yyval.ptnode) = addnode();
               (yyvsp[-5].ptnode)->parent = (yyval.ptnode);
               (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
               (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
               strcpy((yyval.ptnode)->astnode.ident.name, (yyvsp[-5].ptnode)->astnode.ident.name);
               (yyval.ptnode)->nodetype = Substring;
               (yyval.ptnode)->token = NAME;
               (yyval.ptnode)->astnode.ident.startDim[0] = (yyvsp[-3].ptnode);
               (yyval.ptnode)->astnode.ident.endDim[0] = (yyvsp[-1].ptnode);
               free_ast_node((yyvsp[-5].ptnode));
             }
    break;

  case 236:
#line 2729 "f2jparse.y"
    {
               if(debug)
                 printf("SubString! format = c(:e2)\n");
               (yyval.ptnode) = addnode();
               (yyvsp[-4].ptnode)->parent = (yyval.ptnode);
               (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
               strcpy((yyval.ptnode)->astnode.ident.name, (yyvsp[-4].ptnode)->astnode.ident.name);
               (yyval.ptnode)->nodetype = Substring;
               (yyval.ptnode)->token = NAME;
               (yyval.ptnode)->astnode.ident.startDim[0] = NULL;
               (yyval.ptnode)->astnode.ident.endDim[0] = (yyvsp[-1].ptnode);
               free_ast_node((yyvsp[-4].ptnode));
             }
    break;

  case 237:
#line 2743 "f2jparse.y"
    {
               if(debug)
                 printf("SubString! format = c(e1:)\n");
               (yyval.ptnode) = addnode();
               (yyvsp[-4].ptnode)->parent = (yyval.ptnode);
               (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
               strcpy((yyval.ptnode)->astnode.ident.name, (yyvsp[-4].ptnode)->astnode.ident.name);
               (yyval.ptnode)->nodetype = Substring;
               (yyval.ptnode)->token = NAME;
               (yyval.ptnode)->astnode.ident.startDim[0] = (yyvsp[-2].ptnode);
               (yyval.ptnode)->astnode.ident.endDim[0] = NULL;
               free_ast_node((yyvsp[-4].ptnode));
             }
    break;

  case 238:
#line 2757 "f2jparse.y"
    {
               if(debug)
                 printf("SubString! format = c(:)\n");
               (yyval.ptnode) = addnode();
               (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
               strcpy((yyval.ptnode)->astnode.ident.name, (yyvsp[-3].ptnode)->astnode.ident.name);
               (yyval.ptnode)->nodetype = Substring;
               (yyval.ptnode)->token = NAME;
               (yyval.ptnode)->astnode.ident.startDim[0] = NULL;
               (yyval.ptnode)->astnode.ident.endDim[0] = NULL;
               free_ast_node((yyvsp[-3].ptnode));
             }
    break;

  case 239:
#line 2782 "f2jparse.y"
    {
             AST *temp;

             temp = addnode();
             temp->nodetype = Call;
             (yyvsp[0].ptnode)->parent = temp;

             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 240:
#line 2792 "f2jparse.y"
    {
             (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
             (yyvsp[0].ptnode)->parent = (yyvsp[-2].ptnode)->parent;
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 241:
#line 2798 "f2jparse.y"
    {
             (yyval.ptnode) = NULL;
           }
    break;

  case 242:
#line 2807 "f2jparse.y"
    {
            /* we don't want subroutines in the type_table
             * make a dlist to stuff the names in and check
             * them in initialize_name.
             */
             
             if(in_dlist(subroutine_names, (yyvsp[-1].ptnode)->astnode.ident.name)==0){
                if(debug){
                   printf("inserting %s in dlist and del from type\n",
                         (yyvsp[-1].ptnode)->astnode.ident.name);
                }
                dl_insert_b(subroutine_names, strdup((yyvsp[-1].ptnode)->astnode.ident.name));
                hash_delete(type_table, (yyvsp[-1].ptnode)->astnode.ident.name);
             }
             if(debug){
               printf("call: %s\n", (yyvsp[-1].ptnode)->astnode.ident.name);
             }

             (yyval.ptnode) = (yyvsp[-1].ptnode);
	     (yyval.ptnode)->nodetype = Call;
          }
    break;

  case 243:
#line 2829 "f2jparse.y"
    {
            (yyval.ptnode) = addnode();
            (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
            (yyval.ptnode)->nodetype = Identifier;
            strcpy((yyval.ptnode)->astnode.ident.name, (yyvsp[-1].ptnode)->astnode.ident.name);
            (yyval.ptnode)->astnode.ident.arraylist = addnode();
            (yyval.ptnode)->astnode.ident.arraylist->nodetype = EmptyArgList;
            free_ast_node((yyvsp[-1].ptnode));
          }
    break;

  case 244:
#line 2845 "f2jparse.y"
    {
       (yyval.ptnode) = (yyvsp[0].ptnode);
     }
    break;

  case 245:
#line 2849 "f2jparse.y"
    {
       (yyval.ptnode)=addnode();
       (yyvsp[-2].ptnode)->expr_side = left;
       (yyvsp[0].ptnode)->expr_side = right;
       (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
       (yyvsp[0].ptnode)->parent = (yyval.ptnode);
       (yyval.ptnode)->token = EQV;
       (yyval.ptnode)->nodetype = Logicalop;
       (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
       (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
     }
    break;

  case 246:
#line 2861 "f2jparse.y"
    {
       (yyval.ptnode)=addnode();
       (yyvsp[-2].ptnode)->expr_side = left;
       (yyvsp[0].ptnode)->expr_side = right;
       (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
       (yyvsp[0].ptnode)->parent = (yyval.ptnode);
       (yyval.ptnode)->token = NEQV;
       (yyval.ptnode)->nodetype = Logicalop;
       (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
       (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
     }
    break;

  case 247:
#line 2875 "f2jparse.y"
    {
                (yyval.ptnode) = (yyvsp[0].ptnode);
              }
    break;

  case 248:
#line 2879 "f2jparse.y"
    {
                (yyval.ptnode)=addnode();
		(yyvsp[-2].ptnode)->expr_side = left;
		(yyvsp[0].ptnode)->expr_side = right;
		(yyvsp[-2].ptnode)->parent = (yyval.ptnode);
		(yyvsp[0].ptnode)->parent = (yyval.ptnode);
		(yyval.ptnode)->token = OR;
		(yyval.ptnode)->nodetype = Logicalop;
		(yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
		(yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
              }
    break;

  case 249:
#line 2893 "f2jparse.y"
    {
            (yyval.ptnode) = (yyvsp[0].ptnode);
          }
    break;

  case 250:
#line 2897 "f2jparse.y"
    {
            (yyval.ptnode)=addnode();
            (yyvsp[-2].ptnode)->expr_side = left;
            (yyvsp[0].ptnode)->expr_side = right;
            (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
            (yyvsp[0].ptnode)->parent = (yyval.ptnode);
            (yyval.ptnode)->token = AND;
            (yyval.ptnode)->nodetype = Logicalop;
            (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
            (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
          }
    break;

  case 251:
#line 2911 "f2jparse.y"
    {
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 252:
#line 2915 "f2jparse.y"
    {
              (yyval.ptnode)=addnode();
              (yyvsp[0].ptnode)->parent = (yyval.ptnode);  /* 9-4-97 - Keith */
              (yyval.ptnode)->token = NOT;
              (yyval.ptnode)->nodetype = Logicalop;
              (yyval.ptnode)->astnode.expression.lhs = 0;
              (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
            }
    break;

  case 253:
#line 2926 "f2jparse.y"
    {
               (yyval.ptnode) = (yyvsp[0].ptnode);
             }
    break;

  case 254:
#line 2929 "f2jparse.y"
    {temptok = yylval.tok;}
    break;

  case 255:
#line 2930 "f2jparse.y"
    {
               (yyval.ptnode)=addnode();
               (yyvsp[-3].ptnode)->expr_side = left;
               (yyvsp[0].ptnode)->expr_side = right;
               (yyvsp[-3].ptnode)->parent = (yyval.ptnode);
               (yyvsp[0].ptnode)->parent = (yyval.ptnode);
               (yyval.ptnode)->nodetype = Relationalop;
               (yyval.ptnode)->token = temptok;
               (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-3].ptnode);
               (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
             }
    break;

  case 256:
#line 2944 "f2jparse.y"
    {
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 257:
#line 2948 "f2jparse.y"
    {
              if((yyvsp[0].ptnode)->nodetype == Constant) {
                prepend_minus((yyvsp[0].ptnode)->astnode.constant.number);
                (yyval.ptnode) = (yyvsp[0].ptnode);
              }
              else {
                (yyval.ptnode) = addnode();
                (yyvsp[0].ptnode)->parent = (yyval.ptnode);
                (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
                (yyval.ptnode)->astnode.expression.lhs = 0;
                (yyval.ptnode)->astnode.expression.minus = '-';   
                (yyval.ptnode)->nodetype = Unaryop;
                (yyval.ptnode)->vartype = (yyvsp[0].ptnode)->vartype;
              }
            }
    break;

  case 258:
#line 2964 "f2jparse.y"
    {
              if((yyvsp[0].ptnode)->nodetype == Constant) {
                (yyval.ptnode) = (yyvsp[0].ptnode);
              }
              else {
                (yyval.ptnode) = addnode();
                (yyvsp[0].ptnode)->parent = (yyval.ptnode);
                (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
                (yyval.ptnode)->astnode.expression.lhs = 0;
                (yyval.ptnode)->astnode.expression.minus = '+';
                (yyval.ptnode)->nodetype = Unaryop;
		  (yyval.ptnode)->vartype = (yyvsp[0].ptnode)->vartype;
              }
            }
    break;

  case 259:
#line 2979 "f2jparse.y"
    {
              (yyval.ptnode)=addnode();
              (yyvsp[-2].ptnode)->expr_side = left;
              (yyvsp[0].ptnode)->expr_side = right;
              (yyval.ptnode)->token = PLUS;
              (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
              (yyvsp[0].ptnode)->parent = (yyval.ptnode);
              (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
              (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
              (yyval.ptnode)->vartype = MIN((yyvsp[-2].ptnode)->vartype, (yyvsp[0].ptnode)->vartype);
              (yyval.ptnode)->nodetype = Binaryop;
              (yyval.ptnode)->astnode.expression.optype = '+';
            }
    break;

  case 260:
#line 2993 "f2jparse.y"
    {
              (yyval.ptnode)=addnode();
              (yyval.ptnode)->token = MINUS;
              (yyvsp[-2].ptnode)->expr_side = left;
              (yyvsp[0].ptnode)->expr_side = right;
              (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
              (yyvsp[0].ptnode)->parent = (yyval.ptnode);
              (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
              (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
              (yyval.ptnode)->vartype = MIN((yyvsp[-2].ptnode)->vartype, (yyvsp[0].ptnode)->vartype);
              (yyval.ptnode)->nodetype = Binaryop;
              (yyval.ptnode)->astnode.expression.optype = '-';
            }
    break;

  case 261:
#line 3009 "f2jparse.y"
    {
        (yyval.ptnode) = (yyvsp[0].ptnode);
      }
    break;

  case 262:
#line 3013 "f2jparse.y"
    {
        (yyval.ptnode)=addnode();
        (yyvsp[-2].ptnode)->expr_side = left;
        (yyvsp[0].ptnode)->expr_side = right;
        (yyval.ptnode)->token = DIV;
        (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
        (yyvsp[0].ptnode)->parent = (yyval.ptnode);
        (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
        (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
	 (yyval.ptnode)->vartype = MIN((yyvsp[-2].ptnode)->vartype, (yyvsp[0].ptnode)->vartype);
        (yyval.ptnode)->nodetype = Binaryop;
        (yyval.ptnode)->astnode.expression.optype = '/';
      }
    break;

  case 263:
#line 3027 "f2jparse.y"
    {
        (yyval.ptnode)=addnode();

        (yyval.ptnode)->token = STAR;
        (yyvsp[-2].ptnode)->expr_side = left;
        (yyvsp[0].ptnode)->expr_side = right;
        (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
        (yyvsp[0].ptnode)->parent = (yyval.ptnode);
        (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
        (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
	 (yyval.ptnode)->vartype = MIN((yyvsp[-2].ptnode)->vartype, (yyvsp[0].ptnode)->vartype);
        (yyval.ptnode)->nodetype = Binaryop;
        (yyval.ptnode)->astnode.expression.optype = '*';
      }
    break;

  case 264:
#line 3044 "f2jparse.y"
    {
          (yyval.ptnode) = (yyvsp[0].ptnode);
        }
    break;

  case 265:
#line 3048 "f2jparse.y"
    {
          (yyval.ptnode)=addnode();
          (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
          (yyvsp[0].ptnode)->parent = (yyval.ptnode);
 	  (yyval.ptnode)->nodetype = Power;
	  (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
	  (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
          (yyval.ptnode)->vartype = MIN((yyvsp[-2].ptnode)->vartype, (yyvsp[0].ptnode)->vartype);
        }
    break;

  case 266:
#line 3060 "f2jparse.y"
    {
             (yyval.ptnode) = (yyvsp[0].ptnode);
           }
    break;

  case 267:
#line 3064 "f2jparse.y"
    {
             (yyval.ptnode)=addnode();
             (yyval.ptnode)->token = CAT;
             (yyvsp[-2].ptnode)->expr_side = left;
             (yyvsp[0].ptnode)->expr_side = right;
             (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
             (yyvsp[0].ptnode)->parent = (yyval.ptnode);
             (yyval.ptnode)->astnode.expression.lhs = (yyvsp[-2].ptnode);
             (yyval.ptnode)->astnode.expression.rhs = (yyvsp[0].ptnode);
             (yyval.ptnode)->vartype = MIN((yyvsp[-2].ptnode)->vartype, (yyvsp[0].ptnode)->vartype);
             (yyval.ptnode)->nodetype = Binaryop;
             (yyval.ptnode)->astnode.expression.optype = '+';
           }
    break;

  case 268:
#line 3079 "f2jparse.y"
    {(yyval.ptnode)=(yyvsp[0].ptnode);}
    break;

  case 269:
#line 3081 "f2jparse.y"
    {
	       (yyval.ptnode) = (yyvsp[0].ptnode);
	     }
    break;

  case 270:
#line 3085 "f2jparse.y"
    {(yyval.ptnode)=(yyvsp[0].ptnode);}
    break;

  case 271:
#line 3086 "f2jparse.y"
    {(yyval.ptnode)=(yyvsp[0].ptnode);}
    break;

  case 272:
#line 3088 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
               (yyvsp[-1].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
               (yyval.ptnode)->nodetype = Expression;
               (yyval.ptnode)->astnode.expression.parens = TRUE;
               (yyval.ptnode)->astnode.expression.rhs = (yyvsp[-1].ptnode);
               (yyval.ptnode)->astnode.expression.lhs = 0;
               (yyval.ptnode)->vartype = (yyvsp[-1].ptnode)->vartype;
             }
    break;

  case 273:
#line 3108 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
               (yyval.ptnode)->token = TrUE;
               (yyval.ptnode)->nodetype = Constant;
               strcpy((yyval.ptnode)->astnode.constant.number, "true");
               (yyval.ptnode)->vartype = Logical;
             }
    break;

  case 274:
#line 3116 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
               (yyval.ptnode)->token = FaLSE;
               (yyval.ptnode)->nodetype = Constant;
               strcpy((yyval.ptnode)->astnode.constant.number, "false");
               (yyval.ptnode)->vartype = Logical;
             }
    break;

  case 275:
#line 3128 "f2jparse.y"
    {
           (yyval.ptnode) = (yyvsp[0].ptnode); 
         }
    break;

  case 276:
#line 3132 "f2jparse.y"
    { 
           (yyval.ptnode) = (yyvsp[0].ptnode); 
         }
    break;

  case 277:
#line 3136 "f2jparse.y"
    { 
           (yyval.ptnode) = (yyvsp[0].ptnode); 
         }
    break;

  case 278:
#line 3140 "f2jparse.y"
    { 
           (yyval.ptnode) = (yyvsp[0].ptnode); 
         }
    break;

  case 279:
#line 3144 "f2jparse.y"
    { 
           (yyval.ptnode) = (yyvsp[0].ptnode); 
         }
    break;

  case 280:
#line 3148 "f2jparse.y"
    { 
           (yyval.ptnode) = (yyvsp[0].ptnode); 
         }
    break;

  case 281:
#line 3154 "f2jparse.y"
    {
               if(debug)printf("Integer\n");
               (yyval.ptnode) = addnode();
               (yyval.ptnode)->token = INTEGER;
               (yyval.ptnode)->nodetype = Constant;
               strcpy((yyval.ptnode)->astnode.constant.number, yylval.lexeme);
               (yyval.ptnode)->vartype = Integer;
             }
    break;

  case 282:
#line 3165 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
	       (yyval.ptnode)->token = DOUBLE;
               (yyval.ptnode)->nodetype = Constant;
               strcpy((yyval.ptnode)->astnode.constant.number, yylval.lexeme);
               (yyval.ptnode)->vartype = Double;
             }
    break;

  case 283:
#line 3175 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
               (yyval.ptnode)->token = FLOAT;
               (yyval.ptnode)->nodetype = Constant;
               strcpy((yyval.ptnode)->astnode.constant.number, yylval.lexeme);
               strcat((yyval.ptnode)->astnode.constant.number, "f");
               (yyval.ptnode)->vartype = Float;
             }
    break;

  case 284:
#line 3203 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
	       (yyval.ptnode)->token = E_EXPONENTIAL;
               (yyval.ptnode)->nodetype = Constant;
	       exp_to_double(yylval.lexeme, tempname);
               strcpy((yyval.ptnode)->astnode.constant.number, tempname);
               strcat((yyval.ptnode)->astnode.constant.number, "f");
               (yyval.ptnode)->vartype = Float;
             }
    break;

  case 285:
#line 3213 "f2jparse.y"
    {
               (yyval.ptnode) = addnode();
	       (yyval.ptnode)->token = D_EXPONENTIAL;
               (yyval.ptnode)->nodetype = Constant;
	       exp_to_double(yylval.lexeme, tempname);
               strcpy((yyval.ptnode)->astnode.constant.number, tempname);
               (yyval.ptnode)->vartype = Double;
             }
    break;

  case 286:
#line 3226 "f2jparse.y"
    {
                (yyval.ptnode)= addnode();
             }
    break;

  case 287:
#line 3232 "f2jparse.y"
    {
          (yyval.ptnode) = addnode();
          (yyval.ptnode)->nodetype = Pause;
          (yyval.ptnode)->astnode.constant.number[0] = 0;
        }
    break;

  case 288:
#line 3238 "f2jparse.y"
    {
           (yyval.ptnode) = (yyvsp[-1].ptnode);
           (yyval.ptnode)->nodetype = Pause;
        }
    break;

  case 289:
#line 3245 "f2jparse.y"
    {
          (yyval.ptnode) = addnode();
          (yyval.ptnode)->nodetype = Stop;
          (yyval.ptnode)->astnode.constant.number[0] = 0;
        }
    break;

  case 290:
#line 3251 "f2jparse.y"
    {
           (yyval.ptnode) = (yyvsp[-1].ptnode);
           (yyval.ptnode)->nodetype = Stop;
        }
    break;

  case 291:
#line 3258 "f2jparse.y"
    {
          (yyval.ptnode) = addnode();
          (yyvsp[-1].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
          (yyval.ptnode)->nodetype = Goto;
	  if(debug)
            printf("goto label: %d\n", atoi(yylval.lexeme)); 
          (yyval.ptnode)->astnode.go_to.label = atoi(yylval.lexeme);
          free_ast_node((yyvsp[-1].ptnode));
        }
    break;

  case 292:
#line 3270 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyvsp[-3].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
                  (yyvsp[-1].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
                  (yyval.ptnode)->nodetype = ComputedGoto;
                  (yyval.ptnode)->astnode.computed_goto.name = (yyvsp[-1].ptnode);
                  (yyval.ptnode)->astnode.computed_goto.intlist = switchem((yyvsp[-3].ptnode));
        	  if(debug)
        	    printf("Computed go to,\n");
                }
    break;

  case 293:
#line 3281 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyvsp[-4].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
                  (yyvsp[-1].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
                  (yyval.ptnode)->nodetype = ComputedGoto;
                  (yyval.ptnode)->astnode.computed_goto.name = (yyvsp[-1].ptnode);
                  (yyval.ptnode)->astnode.computed_goto.intlist = switchem((yyvsp[-4].ptnode));
        	  if(debug)
        	    printf("Computed go to,\n");
                }
    break;

  case 294:
#line 3294 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyvsp[-4].ptnode)->parent = (yyval.ptnode);
                  (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
                  (yyval.ptnode)->nodetype = AssignedGoto;
                  (yyval.ptnode)->astnode.computed_goto.name = (yyvsp[-4].ptnode);
                  (yyval.ptnode)->astnode.computed_goto.intlist = switchem((yyvsp[-2].ptnode));
        	  if(debug)
        	    printf("Assigned go to,\n");
                }
    break;

  case 295:
#line 3305 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyvsp[-5].ptnode)->parent = (yyval.ptnode);
                  (yyvsp[-2].ptnode)->parent = (yyval.ptnode);
                  (yyval.ptnode)->nodetype = AssignedGoto;
                  (yyval.ptnode)->astnode.computed_goto.name = (yyvsp[-5].ptnode);
                  (yyval.ptnode)->astnode.computed_goto.intlist = switchem((yyvsp[-2].ptnode));
        	  if(debug)
        	    printf("Assigned go to,\n");
                }
    break;

  case 296:
#line 3316 "f2jparse.y"
    {
                  (yyval.ptnode) = addnode();
                  (yyvsp[-1].ptnode)->parent = (yyval.ptnode);
                  (yyval.ptnode)->nodetype = AssignedGoto;
                  (yyval.ptnode)->astnode.computed_goto.name = (yyvsp[-1].ptnode);
                  (yyval.ptnode)->astnode.computed_goto.intlist = NULL;
        	  if(debug)
        	    printf("Assigned go to (no intlist)\n");
                }
    break;

  case 297:
#line 3328 "f2jparse.y"
    {
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 298:
#line 3332 "f2jparse.y"
    {
              (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode);
              (yyval.ptnode) = (yyvsp[0].ptnode);
            }
    break;

  case 299:
#line 3339 "f2jparse.y"
    {
	       (yyval.ptnode) = addnode();
               (yyvsp[-2].ptnode)->parent = (yyval.ptnode);   /* 9-4-97 - Keith */
	       (yyval.ptnode)->nodetype = Specification;
	       (yyval.ptnode)->astnode.typeunit.specification = Parameter;
               (yyval.ptnode)->astnode.typeunit.declist = switchem((yyvsp[-2].ptnode)); 
             }
    break;

  case 300:
#line 3349 "f2jparse.y"
    { 
            (yyval.ptnode)=(yyvsp[0].ptnode);
          }
    break;

  case 301:
#line 3353 "f2jparse.y"
    {
            (yyvsp[0].ptnode)->prevstmt = (yyvsp[-2].ptnode); 
            (yyval.ptnode)=(yyvsp[0].ptnode);
          }
    break;

  case 302:
#line 3360 "f2jparse.y"
    {
            void add_decimal_point(char *);
            double constant_eval;
            HASHNODE *ht;
            char *cur_id;
            AST *temp;

            if(debug)
              printf("Parameter...\n");

            (yyval.ptnode) = (yyvsp[0].ptnode);
            (yyval.ptnode)->nodetype = Assignment;

            constant_eval = eval_const_expr((yyval.ptnode)->astnode.assignment.rhs);

            if(debug) {
              printf("### constant_eval is %.40g\n", constant_eval);
              printf("### constant_eval is %.40e\n", constant_eval);
            }
            
            temp = addnode();
            temp->nodetype = Constant;

            ht = type_lookup(type_table, (yyval.ptnode)->astnode.assignment.lhs->astnode.ident.name);

            if(ht)
              temp->vartype = ht->variable->vartype;
            else
              temp->vartype = (yyval.ptnode)->astnode.assignment.rhs->vartype;
            
            switch(temp->vartype) {
              case String:
              case Character:
                temp->token = STRING;
                strcpy(temp->astnode.constant.number, 
                       (yyval.ptnode)->astnode.assignment.rhs->astnode.constant.number);
                break;
              case Complex:
                fprintf(stderr,"Pdec: Complex not yet supported.\n");
                break;
              case Logical:
                temp->token = (yyval.ptnode)->astnode.assignment.rhs->token;
                strcpy(temp->astnode.constant.number, 
                       temp->token == TrUE ? "true" : "false");
                break;
              case Float:
                temp->token = FLOAT;

                sprintf(temp->astnode.constant.number,"%.40g",constant_eval);
                add_decimal_point(temp->astnode.constant.number);
                strcat(temp->astnode.constant.number, "f");
                
                break;
              case Double:
                temp->token = DOUBLE;

                sprintf(temp->astnode.constant.number,"%.40g",constant_eval);
                add_decimal_point(temp->astnode.constant.number);
                
                break;
              case Integer:
                temp->token = INTEGER;
                sprintf(temp->astnode.constant.number,"%d",(int)constant_eval);
                break;
              default:
                fprintf(stderr,"Pdec: bad vartype!\n");
            }

            free_ast_node((yyval.ptnode)->astnode.assignment.rhs);
            (yyval.ptnode)->astnode.assignment.rhs = temp;
                                                      
            if(debug)
              printf("### the constant is '%s'\n",
                temp->astnode.constant.number);

            cur_id = strdup((yyval.ptnode)->astnode.assignment.lhs->astnode.ident.name);

            if(type_lookup(java_keyword_table,cur_id) ||
               type_lookup(jasmin_keyword_table,cur_id))
                  cur_id[0] = toupper(cur_id[0]);

            if(debug)
               printf("insert param_table %s\n", (yyval.ptnode)->astnode.assignment.lhs->astnode.ident.name);
            hash_delete(type_table, (yyval.ptnode)->astnode.assignment.lhs->astnode.ident.name);
            type_insert(parameter_table, temp, 0, cur_id);
            free_ast_node((yyval.ptnode)->astnode.assignment.lhs);
          }
    break;

  case 303:
#line 3450 "f2jparse.y"
    {
             (yyval.ptnode)=addnode(); 
             (yyvsp[-1].ptnode)->parent = (yyval.ptnode);  /* 9-3-97 - Keith */
             (yyval.ptnode)->nodetype = Specification;
             (yyval.ptnode)->token = EXTERNAL;
             (yyval.ptnode)->astnode.typeunit.declist = switchem((yyvsp[-1].ptnode));
             (yyval.ptnode)->astnode.typeunit.specification = External;
           }
    break;

  case 304:
#line 3461 "f2jparse.y"
    {
             (yyval.ptnode)=addnode(); 
             (yyvsp[-1].ptnode)->parent = (yyval.ptnode);  /* 9-3-97 - Keith */
             (yyval.ptnode)->nodetype = Specification;
	     (yyval.ptnode)->token = INTRINSIC;
             (yyval.ptnode)->astnode.typeunit.declist = switchem((yyvsp[-1].ptnode));
             (yyval.ptnode)->astnode.typeunit.specification = Intrinsic;
           }
    break;


    }

/* Line 1037 of yacc.c.  */
#line 5731 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {

		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 yydestruct ("Error: popping",
                             yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  yydestruct ("Error: discarding lookahead",
              yytoken, &yylval);
  yychar = YYEMPTY;
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 3472 "f2jparse.y"



/*****************************************************************************
 *                                                                           *
 * yyerror                                                                   *
 *                                                                           *
 * The standard yacc error routine.                                          *
 *                                                                           *
 *****************************************************************************/

void 
yyerror(char *s)
{
  extern Dlist file_stack;
  INCLUDED_FILE *pfile;
  Dlist tmp;

  if(current_file_info)
    printf("%s:%d: %s\n", current_file_info->name, lineno, s);
  else
    printf("line %d: %s\n", lineno, s);

  dl_traverse_b(tmp, file_stack) {
    pfile = (INCLUDED_FILE *)dl_val(tmp);

    printf("\tincluded from: %s:%d\n", pfile->name, pfile->line_num);
  }
}

/*****************************************************************************
 *                                                                           *
 * add_decimal_point                                                         *
 *                                                                           *
 * this is just a hack to compensate for the fact that there's no printf     *
 * specifier that does exactly what we want.  assume the given string        *
 * represents a floating point number.  if there's no decimal point in the   *
 * string, then append ".0" to it.  However, if there's an 'e' in the string *
 * then javac will interpret it as floating point.  The only real problem    *
 * that occurs is when the constant is too big to fit as an integer, but has *
 * no decimal point, so javac flags it as an error (int constant too big).   *
 *                                                                           *
 *****************************************************************************/

void
add_decimal_point(char *str)
{
  BOOL found_dec = FALSE;
  char *p = str;

  while( *p != '\0' ) {
    if( *p == '.' ) {
      found_dec = TRUE;
      break;
    }

    if( *p == 'e' )
      return;
    
    p++;
  }

  if(!found_dec)
    strcat(str, ".0");
}

/*****************************************************************************
 *                                                                           *
 * addnode                                                                   *
 *                                                                           *
 * To keep things simple, there is only one type of parse tree               *
 * node.  If there is any way to ensure that all the pointers                *
 * in this are NULL, it would be a good idea to do that.  I am               *
 * not sure what the default behavior is.                                    *
 *                                                                           *
 *****************************************************************************/

AST * 
addnode() 
{
  return (AST*)f2jcalloc(1,sizeof(AST));
}


/*****************************************************************************
 *                                                                           *
 * switchem                                                                  *
 *                                                                           *
 * Need to turn the linked list around,                                      *
 * so that it can traverse forward instead of in reverse.                    *
 * What I do here is create a doubly linked list.                            *
 * Note that there is no `sentinel' or `head' node                           *
 * in this list.  It is acyclic and terminates in                            *
 * NULL pointers.                                                            *
 *                                                                           *
 *****************************************************************************/

AST * 
switchem(AST * root) 
{
  if(root == NULL)
    return NULL;

  if (root->prevstmt == NULL) 
    return root;

  while (root->prevstmt != NULL) 
  {
    root->prevstmt->nextstmt = root;
    root = root->prevstmt;
  }

  return root;
}

/*****************************************************************************
 *                                                                           *
 * assign_array_dims                                                         *
 *                                                                           *
 * This is used by DIMENSION and COMMON to set the specified array           *
 * dimensions, possibly in the absence of a type declaration.  If we         *
 * haven't seen a delcaration for this variable yet, create a new node.      *
 * Otherwise, assign the array dimensions to the existing node.              *
 *                                                                           *
 *****************************************************************************/

void
assign_array_dims(AST *var)
{
  HASHNODE *hash_entry;
  AST *node;
  int i;

  hash_entry = type_lookup(type_table, var->astnode.ident.name);
  if(hash_entry)
    node = hash_entry->variable;
  else {
    if(debug){
      printf("Calling initalize name from assign_array_dims\n");
    }

    node = initialize_name(var->astnode.ident.name);

    /* if it's an intrinsic_named array */
    if(node->astnode.ident.which_implicit == INTRIN_NAMED_ARRAY_OR_FUNC_CALL){
       node->astnode.ident.which_implicit = INTRIN_NAMED_ARRAY;
       type_insert(type_table, node, node->vartype, var->astnode.ident.name);
    }

    if(debug)
      printf("assign_array_dims: %s\n", var->astnode.ident.name);
  }

  node->astnode.ident.localvnum = -1;
  node->astnode.ident.arraylist = var->astnode.ident.arraylist;
  node->astnode.ident.dim = var->astnode.ident.dim;
  node->astnode.ident.leaddim = var->astnode.ident.leaddim;
  for(i=0;i<MAX_ARRAY_DIM;i++) {
    node->astnode.ident.startDim[i] = var->astnode.ident.startDim[i];
    node->astnode.ident.endDim[i] = var->astnode.ident.endDim[i];
  }
}

/*****************************************************************************
 *                                                                           *
 * assign_common_array_dims                                                  *
 *                                                                           *
 * For arrays declared in COMMON blocks, we go ahead and assign the          *
 * dimensions in case they aren't dimensioned anywhere else.                 *
 *                                                                           *
 *****************************************************************************/

void
assign_common_array_dims(AST *root)
{
  AST *Clist, *temp;

  for(Clist = root->astnode.common.nlist; Clist != NULL; Clist = Clist->nextstmt)
  {
    for(temp=Clist->astnode.common.nlist; temp!=NULL; temp=temp->nextstmt)
    {
      if(temp->astnode.ident.arraylist)
        assign_array_dims(temp);
    }
  }
}

/*****************************************************************************
 *                                                                           *
 * type_hash                                                                 *
 *                                                                           *
 * For now, type_hash takes a tree (linked list) of type                     *
 * declarations from the Decblock rule.  It will need to                     *
 * get those from Intrinsic, External, Parameter, etc.                       *
 *                                                                           *
 *****************************************************************************/

void 
type_hash(AST * types)
{
  HASHNODE *hash_entry;
  AST * temptypes, * tempnames;
  int return_type;

   /* Outer for loop traverses typestmts, inner for()
    * loop traverses declists. Code for stuffing symbol table is
    * is in inner for() loop.   
    */
  for (temptypes = types; temptypes; temptypes = temptypes->nextstmt)
  {
      /* Long assignment, set up the for() loop here instead of
         the expression list.  */
    tempnames = temptypes->astnode.typeunit.declist;

      /* Need to set the return value here before entering
         the next for() loop.  */
    return_type = temptypes->astnode.typeunit.returns;

    if(debug)
      printf("type_hash(): type dec is %s\n", print_nodetype(temptypes));

    if(temptypes->nodetype == CommonList) {
      assign_common_array_dims(temptypes);
      continue;
    }

    /* skip parameter statements and data statements */
    if(( (temptypes->nodetype == Specification) &&
         (temptypes->astnode.typeunit.specification == Parameter)) 
        || (temptypes->nodetype == DataList))
      continue;

    for (; tempnames; tempnames = tempnames->nextstmt)
    {
      int i;

      /* ignore parameter assignment stmts */
      if((tempnames->nodetype == Assignment) ||
         (tempnames->nodetype == DataStmt))
        continue;
        
      /* Stuff names and return types into the symbol table. */
      if(debug)
        printf("Type hash: '%s' (%s)\n", tempnames->astnode.ident.name,
          print_nodetype(tempnames));
        
      if(temptypes->nodetype == Dimension)
        assign_array_dims(tempnames);
      else {
        /* check whether there is already an array declaration for this ident.
         * this would be true in case of a normal type declaration with array
         * declarator, in which case we'll do a little extra work here.  but
         * for idents that were previously dimensioned, we need to get this
         * info out of the table.
         */

        hash_entry = type_lookup(array_table,tempnames->astnode.ident.name);
        if(hash_entry) {
          AST *var = hash_entry->variable;
  
          tempnames->astnode.ident.localvnum = -1;
          tempnames->astnode.ident.arraylist = var->astnode.ident.arraylist;
          tempnames->astnode.ident.dim = var->astnode.ident.dim;
          tempnames->astnode.ident.leaddim = var->astnode.ident.leaddim;
          for(i=0;i<MAX_ARRAY_DIM;i++) {
            tempnames->astnode.ident.startDim[i] = var->astnode.ident.startDim[i];
            tempnames->astnode.ident.endDim[i] = var->astnode.ident.endDim[i];
          }
        }
        if((temptypes->token != INTRINSIC) && (temptypes->token != EXTERNAL))
        {
          hash_entry = type_lookup(type_table,tempnames->astnode.ident.name);

          if(hash_entry == NULL) {
            tempnames->vartype = return_type;
            tempnames->astnode.ident.localvnum = -1;

            if(debug){
                printf("hh type_insert: %s\n", tempnames->astnode.ident.name);
            }

            type_insert(type_table, tempnames, return_type,
               tempnames->astnode.ident.name);

            if(debug)
              printf("Type hash (non-external): %s\n",
                  tempnames->astnode.ident.name);
          }
          else {
            if(debug) {
              printf("type_hash: Entry already exists...");  
              printf("going to override the type.\n");  
            }
            hash_entry->variable->vartype = tempnames->vartype;
          }
        }
      }

      /* Now separate out the EXTERNAL from the INTRINSIC on the
       * fortran side.
       */

      if(temptypes != NULL) {
        AST *newnode;

        /* create a new node to stick into the intrinsic/external table
         * so that the type_table isn't pointing to the same node.
         */
        newnode = addnode();
        strcpy(newnode->astnode.ident.name,tempnames->astnode.ident.name);
        newnode->vartype = return_type;
        newnode->nodetype = Identifier;

        switch (temptypes->token)
        {
          case INTRINSIC:
            type_insert(intrinsic_table, 
                    newnode, return_type, newnode->astnode.ident.name);

            if(debug)
              printf("Type hash (INTRINSIC): %s\n",
                newnode->astnode.ident.name);

            break;
          case EXTERNAL:
            type_insert(external_table,
                    newnode, return_type, newnode->astnode.ident.name);

            if(debug)
              printf("Type hash (EXTERNAL): %s\n",
                newnode->astnode.ident.name);

            break;
          default:
            /* otherwise free the node that we didn't use. */
            free_ast_node(newnode);
            break;  /* ansi thing */

        } /* Close switch().  */
      }
    }  /* Close inner for() loop.  */
  }    /* Close outer for() loop.  */
}      /* Close type_hash().       */


/*****************************************************************************
 *                                                                           *
 * exp_to_double                                                             *
 *                                                                           *
 *  Since jasmin doesn't have any EXPONENTIAL data types, these              *
 * have to be turned into floats.  exp_to_double really just                 *
 * replaces instances of 'd' and 'D' in the exponential number               *
 * with 'e' so that c can convert it on a string scan and                    *
 * string print.  Java does recognize numbers of the                         *
 * form 1.0e+1, so the `d' and `d' need to be replaced with                  *
 * `e'.  For now, leave as double for uniformity with jasmin.                *
 *                                                                           *
 *****************************************************************************/

void 
exp_to_double (char *lexeme, char *temp)
{
  char *cp = lexeme;

  while (*cp)           /* While *cp != '\0'...  */
  {
    if (*cp == 'd' ||   /*  sscanf can recognize 'E'. */
        *cp == 'D')
    {
       *cp = 'e';       /* Replace the 'd' or 'D' with 'e'. */
       break;           /* Should be only one 'd', 'D', etc. */
    }
    cp++;               /* Examine the next character. */
  }

  /* Java should be able to handle exponential notation as part
   * of the float or double constant. 
   */

 strcpy(temp,lexeme);
}  /*  Close exp_to_double().  */


/*****************************************************************************
 *                                                                           *
 * arg_table_load                                                            *
 *                                                                           *
 * Initialize and fill a table with the names of the                         *
 * variables passed in as arguments to the function or                       *
 * subroutine.  This table is later checked when variable                    *
 * types are declared so that variables are not declared                     *
 * twice.                                                                    *  
 *                                                                           *
 *****************************************************************************/

void
arg_table_load(AST * arglist)
{
  AST * temp;

  /* We traverse down `prevstmt' because the arglist is
   * built with right recursion, i.e. in reverse.  This
   * procedure, 'arg_table_load()' is called when the non-
   * terminal `functionargs' is reduced, before the
   * argument list is reversed. Note that a NULL pointer
   * at either end of the list terminates the for() loop. 
   */

   for(temp = arglist; temp; temp = temp->nextstmt)
   {
     type_insert(args_table, temp, 0, temp->astnode.ident.name);
     if(debug)
       printf("#@Arglist var. name: %s\n", temp->astnode.ident.name);
   }
}


/*****************************************************************************
 *                                                                           *
 * lowercase                                                                 *
 *                                                                           *
 * This function takes a string and converts all characters to               *
 * lowercase.                                                                *
 *                                                                           *
 *****************************************************************************/

char * lowercase(char * name)
{
  char *ptr = name;

  while (*name)
  {
    *name = tolower(*name);
     name++;
  }

  return ptr;
}

/*****************************************************************************
 *                                                                           *
 * store_array_var                                                           *
 *                                                                           *
 * We need to make a table of array variables, because                       *
 * fortran accesses arrays by columns instead of rows                        *
 * as C and java does.  During code generation, the array                    *
 * variables are emitted in reverse to get row order.                        *
 *                                                                           *
 *****************************************************************************/

void
store_array_var(AST * var)
{

  if(type_lookup(array_table, var->astnode.ident.name) != NULL)
    fprintf(stderr,"Error: more than one array declarator for array '%s'\n",
       var->astnode.ident.name);
  else
    type_insert(array_table, var, 0, var->astnode.ident.name);

  if(debug)
    printf("Array name: %s\n", var->astnode.ident.name);
}

/*****************************************************************************
 *                                                                           *
 * mypow                                                                     *
 *                                                                           *
 * Double power function.  writing this here so that we                      *
 * dont have to link in the math library.                                    *
 *                                                                           *
 *****************************************************************************/

double
mypow(double x, double y)
{
  double result;
  int i;

  if(y < 0)
  {
    fprintf(stderr,"Warning: got negative exponent in mypow!\n");
    return 0.0;
  }

  if(y == 0)
    return 1.0;

  if(y == 1)
    return x;
  
  result = x;

  for(i=0;i<y-1;i++)
    result *= x;
  
  return result;
}

/*****************************************************************************
 *                                                                           *
 * init_tables                                                               *
 *                                                                           *
 * This function initializes all the symbol tables we'll need during         *
 * parsing and code generation.                                              *
 *                                                                           *
 *****************************************************************************/

void
init_tables()
{
  if(debug)
    printf("Initializing tables.\n");

  initialize_implicit_table(implicit_table);
  array_table     = (SYMTABLE *) new_symtable(211);
  format_table    = (SYMTABLE *) new_symtable(211);
  data_table      = (SYMTABLE *) new_symtable(211);
  save_table      = (SYMTABLE *) new_symtable(211);
  common_table    = (SYMTABLE *) new_symtable(211);
  parameter_table = (SYMTABLE *) new_symtable(211);
  type_table      = (SYMTABLE *) new_symtable(211);
  intrinsic_table = (SYMTABLE *) new_symtable(211);
  external_table  = (SYMTABLE *) new_symtable(211);
  args_table      = (SYMTABLE *) new_symtable(211);
  constants_table = make_dl();
  assign_labels   = make_dl();
  equivList       = NULL;
  save_all        = FALSE;

  cur_do_label = 1000000;

  subroutine_names = make_dl();
  do_labels = make_dl();
}

/*****************************************************************************
 *                                                                           *
 * merge_common_blocks                                                       *
 *                                                                           *
 * In Fortran, different declarations of the same COMMON block may use       *
 * differently named variables.  Since f2j is going to generate only one     *
 * class file to represent the COMMON block, we can only use one of these    *
 * variable names.  What we attempt to do here is take the different names   *
 * and merge them into one name, which we use wherever that common variable  *
 * is used.                                                                  *
 *                                                                           *
 *****************************************************************************/

void
merge_common_blocks(AST *root)
{
  HASHNODE *ht;
  AST *Clist, *temp;
  int count;
  char ** name_array;
  char *comvar = NULL, *var, und_var[80], 
       var_und[80], und_var_und[80], *t;

  for(Clist = root; Clist != NULL; Clist = Clist->nextstmt)
  {
    /* 
     * First check whether this common block is already in
     * the table.
     */

    ht=type_lookup(common_block_table,Clist->astnode.common.name);

    for(temp=Clist->astnode.common.nlist, count = 0; 
              temp!=NULL; temp=temp->nextstmt) 
      count++;

    name_array = (char **) f2jalloc( count * sizeof(name_array) );

    /* foreach COMMON variable */

    for(temp=Clist->astnode.common.nlist, count = 0; 
               temp!=NULL; temp=temp->nextstmt, count++) 
    {
      var = temp->astnode.ident.name;

      /* to merge two names we concatenate the second name
       * to the first name, separated by an underscore.
       */

      if(ht != NULL) {
        comvar = ((char **)ht->variable)[count];
        und_var[0] = '_';
        und_var[1] = 0;
        strcat(und_var,var);
        strcpy(var_und,var);
        strcat(var_und,"_");
        strcpy(und_var_und,und_var);
        strcat(und_var_und,"_");
      }

      if(ht == NULL) {
        name_array[count] = (char *) f2jalloc( strlen(var) + 1 );
        strcpy(name_array[count], var);
      }
      else {
        if(!strcmp(var,comvar) || 
             strstr(comvar,und_var_und) ||
             (((t=strstr(comvar,var_und)) != NULL) && t == comvar) ||
             (((t=strstr(comvar,und_var)) != NULL) && 
               (t+strlen(t) == comvar+strlen(comvar))))
        {
          name_array[count] = (char *) f2jalloc( strlen(comvar) + 1 );
          strcpy(name_array[count], comvar);
        }
        else {
          name_array[count] = (char *) f2jalloc(strlen(temp->astnode.ident.name) 
             + strlen(((char **)ht->variable)[count]) + 2);
  
          strcpy(name_array[count],temp->astnode.ident.name);
          strcat(name_array[count],"_");
          strcat(name_array[count],((char **)ht->variable)[count]);
        }
      }
    }

    type_insert(common_block_table, (AST *)name_array, Float,
         Clist->astnode.common.name);
  }
}

/*****************************************************************************
 *                                                                           *
 * addEquiv                                                                  *
 *                                                                           *
 * Insert the given node (which is itself a list of variables) into a list   *
 * of equivalences.  We end up with a list of lists.                         *
 *                                                                           *
 *****************************************************************************/

void
addEquiv(AST *node)
{
  static int id = 1;

  /* if the list is NULL, create one */

  if(equivList == NULL) {
    equivList = addnode(); 
    equivList->nodetype = Equivalence;
    equivList->token = id++;
    equivList->nextstmt = NULL;
    equivList->prevstmt = NULL;
    equivList->astnode.equiv.clist = node;
  }
  else {
    AST *temp = addnode();

    temp->nodetype = Equivalence;
    temp->token = id++;
    temp->astnode.equiv.clist = node;

    temp->nextstmt = equivList; 
    temp->prevstmt = NULL;

    equivList = temp;
  }
}

/*****************************************************************************
 *                                                                           *
 * eval_const_expr                                                           *
 *                                                                           *
 * This function evaluates a floating-point expression which should consist  *
 * of only parameters and constants.  The floating-point result is returned. *
 *                                                                           *
 *****************************************************************************/

double
eval_const_expr(AST *root)
{
  HASHNODE *p;
  double result1, result2;

  if(root == NULL)
    return 0.0;

  switch (root->nodetype)
  {
    case Identifier:
      if(!strcmp(root->astnode.ident.name,"*"))
        return 0.0;

      p = type_lookup(parameter_table, root->astnode.ident.name);

      if(p)
      {
         if(p->variable->nodetype == Constant) {
           root->vartype = p->variable->vartype;
           return ( atof(p->variable->astnode.constant.number) );
         }
      }

      /* else p==NULL, then the array size is specified with a
       * variable, but we cant find it in the parameter table.
       * it is probably an argument to the function.  do nothing
       * here, just fall through and hit the 'return 0' below.  --keith
       */

      return 0.0;
      
    case Expression:
      if (root->astnode.expression.lhs != NULL)
        eval_const_expr (root->astnode.expression.lhs);

      result2 = eval_const_expr (root->astnode.expression.rhs);

      root->token = root->astnode.expression.rhs->token;

      root->vartype = root->astnode.expression.rhs->vartype;
      strcpy(root->astnode.constant.number,
          root->astnode.expression.rhs->astnode.constant.number);

      return (result2);
    
    case Power:
      result1 = eval_const_expr (root->astnode.expression.lhs);
      result2 = eval_const_expr (root->astnode.expression.rhs);
      root->vartype = MIN(root->astnode.expression.lhs->vartype,
                          root->astnode.expression.rhs->vartype);
      return( mypow(result1,result2) );
  
    case Binaryop:
      result1 = eval_const_expr (root->astnode.expression.lhs);
      result2 = eval_const_expr (root->astnode.expression.rhs);
      root->vartype = MIN(root->astnode.expression.lhs->vartype,
                          root->astnode.expression.rhs->vartype);
      if(root->astnode.expression.optype == '-')
        return (result1 - result2);
      else if(root->astnode.expression.optype == '+')
        return (result1 + result2);
      else if(root->astnode.expression.optype == '*')
        return (result1 * result2);
      else if(root->astnode.expression.optype == '/')
        return (result1 / result2);
      else
        fprintf(stderr,"eval_const_expr: Bad optype!\n");
      return 0.0;
      
    case Unaryop:
      root->vartype = root->astnode.expression.rhs->vartype;
     /*
      result1 = eval_const_expr (root->astnode.expression.rhs);
      if(root->astnode.expression.minus == '-')
        return -result1;
     */
      break;
    case Constant:
      if(debug)
        printf("### its a constant.. %s\n", root->astnode.constant.number);

      if(root->token == STRING) {
        if(!strcmp(root->astnode.ident.name,"*"))
          return 0.0;
        else
          fprintf (stderr, "String in array dec (%s)!\n",
            root->astnode.constant.number);
      }
      else
        return( atof(root->astnode.constant.number) );
      break;
    case ArrayIdxRange:
      /* I dont think it really matters what the type of this node is. --kgs */
      root->vartype = MIN(root->astnode.expression.lhs->vartype,
                          root->astnode.expression.rhs->vartype);
      return(  eval_const_expr(root->astnode.expression.rhs) - 
               eval_const_expr(root->astnode.expression.lhs) );
     
    case Logicalop:
      {
        int lhs=0, rhs;

        root->nodetype = Constant;
        root->vartype = Logical;

        eval_const_expr(root->astnode.expression.lhs);
        eval_const_expr(root->astnode.expression.rhs);

        if(root->token != NOT)
          lhs = root->astnode.expression.lhs->token == TrUE;
        rhs = root->astnode.expression.rhs->token == TrUE;

        switch (root->token) {
          case EQV:
            root->token = (lhs == rhs) ? TrUE : FaLSE;
            break;
          case NEQV:
            root->token = (lhs != rhs) ? TrUE : FaLSE;
            break;
          case AND:
            root->token = (lhs && rhs) ? TrUE : FaLSE;
            break;
          case OR:
            root->token = (lhs || rhs) ? TrUE : FaLSE;
            break;
          case NOT:
            root->token = (! rhs) ? TrUE : FaLSE;
            break;
        }
        strcpy(root->astnode.constant.number,root->token == TrUE ? "true" : "false");
        return (double)root->token;
      }
      
    default:
      fprintf(stderr,"eval_const_expr(): bad nodetype!\n");
      return 0.0;
  }
  return 0.0;
}

void
printbits(char *header, void *var, int datalen)
{
  int i;

  printf("%s: ", header);
  for(i=0;i<datalen;i++) {
    printf("%1x", ((unsigned char *)var)[i] >> 7 );
    printf("%1x", ((unsigned char *)var)[i] >> 6 & 1 );
    printf("%1x", ((unsigned char *)var)[i] >> 5 & 1 );
    printf("%1x", ((unsigned char *)var)[i] >> 4 & 1 );
    printf("%1x", ((unsigned char *)var)[i] >> 3 & 1 );
    printf("%1x", ((unsigned char *)var)[i] >> 2 & 1 );
    printf("%1x", ((unsigned char *)var)[i] >> 1 & 1 );
    printf("%1x", ((unsigned char *)var)[i] & 1 );
  }
  printf("\n");
}

/*****************************************************************************
 *                                                                           *
 * prepend_minus                                                             *
 *                                                                           *
 * This function accepts a string and prepends a '-' in front of it.         *
 * We assume that the string pointer passed in has enough storage space.     *
 *                                                                           *
 *****************************************************************************/

void
prepend_minus(char *num)
{
  char * tempstr;

  if( (tempstr = first_char_is_minus(num)) != NULL) {
    *tempstr = ' ';
    return;
  }

  /* allocate enough for the number, minus sign, and null char */
  tempstr = (char *)f2jalloc(strlen(num) + 5);

  strcpy(tempstr,"-");
  strcat(tempstr,num);
  strcpy(num,tempstr);

  free(tempstr);
}

/*****************************************************************************
 *                                                                           *
 * first_char_is_minus                                                       *
 *                                                                           *
 * Determines whether the number represented by this string is negative.     *
 * If negative, this function returns a pointer to the minus sign.  if non-  *
 * negative, returns NULL.                                                   *
 *                                                                           *
 *****************************************************************************/

char *
first_char_is_minus(char *num)
{
  char *ptr = num;

  while( *ptr ) {
    if( *ptr == '-' )
      return ptr;
    ptr++;
  }

  return NULL;
}

/*****************************************************************************
 *                                                                           *
 * gen_incr_expr                                                             *
 *                                                                           *
 * this function creates an AST sub-tree representing a calculation of the   *
 * increment for this loop.  for null increments, add one.  for non-null     *
 * increments, add the appropriate value.
 *                                                                           *
 *****************************************************************************/

AST *
gen_incr_expr(AST *counter, AST *incr)
{
  AST *plus_node, *const_node, *assign_node, *lhs_copy, *rhs_copy, *incr_copy;

  lhs_copy = addnode();
  memcpy(lhs_copy, counter, sizeof(AST));
  rhs_copy = addnode();
  memcpy(rhs_copy, counter, sizeof(AST));

  if(incr == NULL) {
    const_node = addnode();
    const_node->token = INTEGER;
    const_node->nodetype = Constant;
    strcpy(const_node->astnode.constant.number, "1");
    const_node->vartype = Integer;

    plus_node = addnode();
    plus_node->token = PLUS;
    rhs_copy->parent = plus_node;
    const_node->parent = plus_node;
    plus_node->astnode.expression.lhs = rhs_copy;
    plus_node->astnode.expression.rhs = const_node;
    plus_node->nodetype = Binaryop;
    plus_node->astnode.expression.optype = '+';
  }
  else {
    incr_copy = addnode();
    memcpy(incr_copy, incr, sizeof(AST));

    plus_node = addnode();
    plus_node->token = PLUS;
    rhs_copy->parent = plus_node;
    incr_copy->parent = plus_node;
    plus_node->astnode.expression.lhs = rhs_copy;
    plus_node->astnode.expression.rhs = incr_copy;
    plus_node->nodetype = Binaryop;
    plus_node->astnode.expression.optype = '+';
  }

  assign_node = addnode();
  assign_node->nodetype = Assignment;
  lhs_copy->parent = assign_node;
  plus_node->parent = assign_node;
  assign_node->astnode.assignment.lhs = lhs_copy;
  assign_node->astnode.assignment.rhs = plus_node;

  return assign_node;
}

/*****************************************************************************
 *                                                                           *
 * gen_iter_expr                                                             *
 *                                                                           *
 * this function creates an AST sub-tree representing a calculation of the   *
 * number of iterations of a DO loop:                                        *
 *     (stop-start+incr)/incr                                                *
 * the full expression is MAX(INT((stop-start+incr)/incr),0) but we will     *
 * worry about the rest of it at code generation time.                       *
 *                                                                           *
 *****************************************************************************/

AST *
gen_iter_expr(AST *start, AST *stop, AST *incr)
{
  AST *minus_node, *plus_node, *div_node, *expr_node, *incr_node;
  
  minus_node = addnode();
  minus_node->token = MINUS;
  minus_node->astnode.expression.lhs = stop;
  minus_node->astnode.expression.rhs = start;
  minus_node->nodetype = Binaryop;
  minus_node->astnode.expression.optype = '-';
  
  if(incr == NULL) {
    incr_node = addnode();
    incr_node->token = INTEGER;
    incr_node->nodetype = Constant;
    strcpy(incr_node->astnode.constant.number, "1");
    incr_node->vartype = Integer;
  }
  else 
    incr_node = incr;
  
  plus_node = addnode();
  plus_node->token = PLUS;
  plus_node->astnode.expression.lhs = minus_node;
  plus_node->astnode.expression.rhs = incr_node;
  plus_node->nodetype = Binaryop;
  plus_node->astnode.expression.optype = '+';

  if(incr == NULL)
    return plus_node;
    
  expr_node = addnode();
  expr_node->nodetype = Expression;
  expr_node->astnode.expression.parens = TRUE;
  expr_node->astnode.expression.rhs = plus_node;
  expr_node->astnode.expression.lhs = NULL;

  div_node = addnode();
  div_node->token = DIV;
  div_node->astnode.expression.lhs = expr_node;
  div_node->astnode.expression.rhs = incr_node;
  div_node->nodetype = Binaryop;
  div_node->astnode.expression.optype = '/';

  return div_node;
}

/*****************************************************************************
 *                                                                           *
 * initialize_name                                                           *
 *                                                                           *
 * this function initializes an Identifier node with the given name.         *
 *                                                                           *
 *****************************************************************************/

AST *
initialize_name(char *id)
{
  HASHNODE *hashtemp;
  AST *tmp, *tnode;
  char *tempname;

  if(debug)
    printf("initialize_name: '%s'\n",id);

  tmp=addnode();
  tmp->token = NAME;
  tmp->nodetype = Identifier;

  tmp->astnode.ident.needs_declaration = FALSE;
  tmp->astnode.ident.explicit = FALSE;
  tmp->astnode.ident.which_implicit = INTRIN_NOT_NAMED;
  tmp->astnode.ident.localvnum = -1;
  tmp->astnode.ident.array_len = -1;

  if(omitWrappers)
    tmp->astnode.ident.passByRef = FALSE;

  if(type_lookup(java_keyword_table,id) ||
     type_lookup(jasmin_keyword_table,id))
        id[0] = toupper(id[0]);

  strcpy(tmp->astnode.ident.name, id);
  tempname = strdup(tmp->astnode.ident.name);
  uppercase(tempname);

  if((type_lookup(parameter_table, tmp->astnode.ident.name) == NULL) && 
     (in_dlist(subroutine_names, tmp->astnode.ident.name) == 0))
  {
    if(type_table) {
      hashtemp = type_lookup(type_table, tmp->astnode.ident.name);
      if(hashtemp)
      {
        if(debug)
          printf("initialize_name:'%s' in already hash table (type=%s)..\n",
            id, returnstring[hashtemp->variable->vartype]);
       
        tmp->vartype = hashtemp->variable->vartype;

        if(debug)
          printf("now type is %s\n", returnstring[tmp->vartype]);

        tmp->astnode.ident.len = hashtemp->variable->astnode.ident.len;
      }
      else
      {
        enum returntype ret;
  
        if(debug)
          printf("initialize_name:cannot find name %s in hash table..\n",id);

        if(methodscan(intrinsic_toks, tempname) != NULL) {
          tmp->astnode.ident.which_implicit = 
            intrinsic_or_implicit(tmp->astnode.ident.name); 
        }
      
        ret = implicit_table[tolower(id[0]) - 'a'].type;
  
        if(debug)
          printf("initialize_name:insert with default implicit type %s\n",
            returnstring[ret]);
        
        tmp->vartype = ret;
  
        if(debug)
          printf("type_insert: %s %d\n", tmp->astnode.ident.name, 
            tmp->nodetype);           	

        /* clone the ast node before inserting into the table */
        tnode = clone_ident(tmp);
        tnode->nodetype = Identifier;

        if(tmp->astnode.ident.which_implicit != 
           INTRIN_NAMED_ARRAY_OR_FUNC_CALL) 
        {
          if(debug)
            printf("insert typetable init name\n");

          type_insert(type_table, tnode, ret, tnode->astnode.ident.name);
        }
      }
    }
  }

  return tmp;
}

/*****************************************************************************
*                                                                            *
* intrinsic_or_implict                                                       *
*                                                                            *
* Only gets called if it is an intrinsic name.                               *
*                                                                            *
* this functions tries to figure out if it's intrinsic call, array           *
* or variable.                                                               *
*                                                                            *
******************************************************************************/

int
intrinsic_or_implicit(char *name)
{
  char *p, *tempname, *space_buffer, *clean_buffer, *tmp_spot;
  char *words[12] = {"INTEGER", "DOUBLEPRECISION", "CHARACTER", "DATA",
                      "PARAMETER", "LOGICAL", "INTRINSIC", "EXTERNAL", 
                      "SAVE", "IMPLICIT", "DIMENSION", "CALL"};
  int i, ret_val = INTRIN_NAMED_VARIABLE;

  tempname = (char *)malloc((strlen(name)+2)*sizeof(char));
  space_buffer = (char *)malloc((strlen(line_buffer)+2)*sizeof(char));
  clean_buffer = (char *)malloc((strlen(line_buffer)+2)*sizeof(char));

  strcpy(tempname, name);
  uppercase(tempname);
  strcat(tempname, "(");

  uppercase(line_buffer);

  tmp_spot = line_buffer;
  for(i=0; i<12; i++) {
    if(!strncmp(line_buffer, words[i], strlen(words[i]))) {
      tmp_spot = line_buffer + strlen(words[i]);
      break;
    }
  }
  strcpy(clean_buffer, " \0");
  strcat(clean_buffer, tmp_spot);

  p = strstr(clean_buffer, tempname);
  while(p) {
    if((p)&&(!isalpha((int)*(p-1)))) {
      ret_val=INTRIN_NAMED_ARRAY_OR_FUNC_CALL;
      break;
    }
    for(i=0; i< strlen(tempname); i++)
      p++;
    strcpy(space_buffer, " \0");
    strcat(space_buffer, p);
    p = strstr(space_buffer, tempname);
  }

  free(space_buffer);
  free(clean_buffer);
  free(tempname);

  return ret_val;
}

/*****************************************************************************
 *                                                                           *
 * print_sym_table_names                                                     *
 *                                                                           *
 * Routine to see what's in the symbol table.                                *
 *                                                                           *
 *****************************************************************************/

void
print_sym_table_names(SYMTABLE *table){
   Dlist t_table, tmp;
   AST *node;

   t_table = enumerate_symtable(table);
   dl_traverse(tmp, t_table){

      node = (AST *)dl_val(tmp);
      printf("sym_table %s\n", node->astnode.ident.name);
   }
}

/*****************************************************************************
 *                                                                           *
 * insert_name                                                               *
 *                                                                           *
 * this function inserts the given node into the symbol table, if it is not  *
 * already there.                                                            *
 *                                                                           *
 *****************************************************************************/

void
insert_name(SYMTABLE * tt, AST *node, enum returntype ret)
{
  HASHNODE *hash_entry;
  
  hash_entry = type_lookup(tt,node->astnode.ident.name);

  if(hash_entry == NULL)
    node->vartype = ret;
  else
    node->vartype = hash_entry->variable->vartype;

  type_insert(tt, node, node->vartype, node->astnode.ident.name);
}


/*****************************************************************************
 *                                                                           *
 * initialize_implicit_table                                                 *
 *                                                                           *
 * this function the implicit table, which indicates the implicit typing for *
 * the current program unit (i.e. which letters correspond to which data     *
 * type).                                                                    *
 *                                                                           *
 *****************************************************************************/

void
initialize_implicit_table(ITAB_ENTRY *itab)
{
  int i;

  /* first initialize everything to float */
  for(i = 0; i < 26; i++) {
    itab[i].type = Float;
    itab[i].declared = FALSE;
  }

  /* then change 'i' through 'n' to Integer */
  for(i = 'i' - 'a'; i <= 'n' - 'a'; i++)
    itab[i].type = Integer;
}

/*****************************************************************************
 *                                                                           * 
 * add_implicit_to_tree                                                      *   
 *                                                                           * 
 * this adds a node for an implicit variable to typedec                      * 
 *                                                                           * 
 *****************************************************************************/

void
add_implicit_to_tree(AST *typedec)
{
  Dlist t_table, tmp;
  AST *ast, *new_node, *last_typedec;

  last_typedec = typedec;
  while(last_typedec->nextstmt!=NULL) {
    last_typedec = last_typedec->nextstmt;
  }

  t_table = enumerate_symtable(type_table);
  dl_traverse(tmp, t_table) {
    ast = (AST *)dl_val(tmp);
    if(ast->astnode.ident.explicit == FALSE) {
      if(debug)printf("implicit name=%s\n", ast->astnode.ident.name);

      new_node = addnode();
      new_node->astnode.typeunit.returns = ast->vartype;
      new_node->nodetype = Typedec;
      ast->parent = new_node;
      new_node->astnode.typeunit.declist = clone_ident(ast);
      last_typedec->nextstmt = new_node;
      last_typedec = last_typedec->nextstmt;
    }
  }
}

/*****************************************************************************
 *                                                                           * 
 * clone_ident                                                               *   
 *                                                                           * 
 * this function clones an astnode(ident) and passes back the new node       * 
 *                                                                           * 
 *****************************************************************************/

AST *
clone_ident(AST *ast)
{
  AST *new_node;
  int i;

  new_node = addnode();

  new_node->parent = ast->parent;
  new_node->vartype = ast->vartype;

  new_node->astnode.ident.dim  = ast->astnode.ident.dim;
  new_node->astnode.ident.position  = ast->astnode.ident.position;
  new_node->astnode.ident.len  = ast->astnode.ident.len;
  new_node->astnode.ident.localvnum  = ast->astnode.ident.localvnum;
  new_node->astnode.ident.which_implicit = ast->astnode.ident.which_implicit;

  new_node->astnode.ident.passByRef = ast->astnode.ident.passByRef;
  new_node->astnode.ident.needs_declaration = 
     ast->astnode.ident.needs_declaration;
  new_node->astnode.ident.explicit = FALSE;

  for(i=0; i<=MAX_ARRAY_DIM; i++) {
    new_node->astnode.ident.startDim[i] = ast->astnode.ident.startDim[i];
    new_node->astnode.ident.endDim[i] = ast->astnode.ident.endDim[i];
  }

  new_node->astnode.ident.arraylist = ast->astnode.ident.arraylist;

  if(ast->astnode.ident.leaddim)
    new_node->astnode.ident.leaddim = strdup(ast->astnode.ident.leaddim);

  if(ast->astnode.ident.opcode)
    new_node->astnode.ident.opcode = strdup(ast->astnode.ident.opcode);

  if(ast->astnode.ident.commonBlockName)
    new_node->astnode.ident.commonBlockName = 
      strdup(ast->astnode.ident.commonBlockName);

  strcpy(new_node->astnode.ident.name, ast->astnode.ident.name);

  if(ast->astnode.ident.merged_name)
    new_node->astnode.ident.merged_name = 
      strdup(ast->astnode.ident.merged_name);

  if(ast->astnode.ident.descriptor)
    new_node->astnode.ident.descriptor = 
      strdup(ast->astnode.ident.descriptor);

  return new_node;
}

/*****************************************************************************
 *                                                                           *
 * in_dlist                                                                  *
 *                                                                           *
 * Returns 1 if the given name is in the list, returns 0 otherwise.          *
 * Assumes that the list contains char pointers.                             *
 *                                                                           *
 *****************************************************************************/

int
in_dlist(Dlist list, char *name)
{
  Dlist ptr;
  char *list_name;

  dl_traverse(ptr, list){
    list_name = (char *)dl_val(ptr);
    if(!strcmp(list_name, name))
      return 1;
  }

  return 0;
}

/*****************************************************************************
 *                                                                           *
 * in_dlist_stmt_label                                                       *
 *                                                                           *
 * Returns 1 if the given label is in the list, returns 0 otherwise.         *
 * Assumes that the list contains AST pointers.                              *
 *                                                                           *
 *****************************************************************************/

int
in_dlist_stmt_label(Dlist list, AST *label)
{
  Dlist ptr;
  AST *tmp;

  dl_traverse(ptr, list){
    tmp = (AST *)dl_val(ptr);

    if(!strcmp(tmp->astnode.constant.number, label->astnode.constant.number))
      return 1;
  }

  return 0;
}

/*****************************************************************************
 *                                                                           *
 * process_typestmt                                                          *
 *                                                                           *
 * Performs processing to handle a list of variable declarations.            *
 *                                                                           *
 *****************************************************************************/

AST *
process_typestmt(enum returntype this_type, AST *tvlist)
{
  AST *temp, *new;
  enum returntype ret;
  HASHNODE *hashtemp, *hashtemp2;

  new = addnode();
  free_ast_node(tvlist->parent);
  tvlist = switchem(tvlist);
  new->nodetype = Typedec;

  for(temp = tvlist; temp != NULL; temp = temp->nextstmt)
  {
    temp->vartype = this_type;
    ret = this_type;
    if(temp->astnode.ident.len < 0)
      temp->astnode.ident.len = len;
    temp->parent = new;

    hashtemp = type_lookup(args_table, temp->astnode.ident.name);
    if(hashtemp)
      hashtemp->variable->vartype = this_type;

    hashtemp2 = type_lookup(type_table, temp->astnode.ident.name);
    if(hashtemp2) {
      temp->vartype = this_type;
      temp->astnode.ident.explicit = TRUE;
      hashtemp2->variable = temp;
      if(debug) printf("explicit: %s\n",
        hashtemp2->variable->astnode.ident.name);
    }

    if(hashtemp) {
      if(temp->vartype != hashtemp->variable->vartype){
        if(debug) printf("different vartypes\n");
        hashtemp->variable->vartype=temp->vartype;
        hashtemp2->variable->vartype=temp->vartype;
      }
    }
  }

  new->astnode.typeunit.declist = tvlist;
  new->astnode.typeunit.returns = this_type;

  return new;
}

/*****************************************************************************
 *                                                                           *
 * process_array_declaration                                                 *
 *                                                                           *
 * Performs processing to handle an array declaration.                       *
 *                                                                           *
 *****************************************************************************/

AST *
process_array_declaration(AST *varname, AST *dimlist)
{
  AST *new, *temp, *tmp, *tnode;
  int count, i, alen;
  char *tempname, *id;
  enum returntype ret;
 
  if(debug)
    printf("we have an array declaration %s\n", varname->astnode.ident.name);

  tempname = strdup(varname->astnode.ident.name);
  uppercase(tempname);
               
  /* put in type table. we now know this intrinsic name is an array */
  if(methodscan(intrinsic_toks, tempname) != NULL) {
    tmp=addnode();

    tmp->token = NAME;
    tmp->nodetype = Identifier;
    tmp->astnode.ident.needs_declaration = FALSE;
    tmp->astnode.ident.explicit = FALSE;
    tmp->astnode.ident.localvnum = -1;

    id = strdup(varname->astnode.ident.name);
    strcpy(tmp->astnode.ident.name, id);

    ret = implicit_table[tolower(id[0]) - 'a'].type;
    tmp->vartype = ret; 

    tnode = clone_ident(tmp);
    tnode->nodetype = Identifier;
    tnode->astnode.ident.which_implicit = INTRIN_NAMED_ARRAY;

    type_insert(type_table, tnode, ret, tnode->astnode.ident.name);
  }

  new = varname;

  if(debug)
    printf("reduced arraydeclaration... calling switchem\n");
  new->astnode.ident.arraylist = switchem(dimlist);
                  
  count = 0;
  for(temp=new->astnode.ident.arraylist; temp != NULL; temp=temp->nextstmt)
    count++;

  if(count > MAX_ARRAY_DIM) {
    fprintf(stderr,"Error: array %s exceeds max ", new->astnode.ident.name);
    fprintf(stderr,"number of dimensions: %d\n", MAX_ARRAY_DIM);
    exit(EXIT_FAILURE);
  }

  new->astnode.ident.dim = count;

  /*
   * If this is a one-dimensional one-length character array, for example:
   *    character foo(12)
   *    character*1 bar(12)
   * then don't treat as an array.  Set dimension to zero and arraylist
   * to NULL.  Save the arraylist in startDim[2] since we will need it
   * during code generation.
   */

  if((typedec_context == String) && (len == 1) && (count == 1)) {
    new->astnode.ident.dim = 0;
    new->astnode.ident.startDim[2] = new->astnode.ident.arraylist;
    new->astnode.ident.arraylist = NULL;
    return new;
  }

  alen = 1;

  for(temp = new->astnode.ident.arraylist, i = 0;
      temp != NULL; 
      temp=temp->nextstmt, i++)
  {
    /* if this dimension is an implied size, then set both
     * start and end to NULL.
     */

    if((temp->nodetype == Identifier) && 
      (temp->astnode.ident.name[0] == '*'))
    {
      new->astnode.ident.startDim[i] = NULL;
      new->astnode.ident.endDim[i] = NULL;
      alen = 0;
    }
    else if(temp->nodetype == ArrayIdxRange) {
      new->astnode.ident.startDim[i] = temp->astnode.expression.lhs;
      new->astnode.ident.endDim[i] = temp->astnode.expression.rhs;
      alen *= (int)(eval_const_expr(new->astnode.ident.endDim[i]) - 
               eval_const_expr(new->astnode.ident.startDim[i])) + 1;
    }
    else {
      new->astnode.ident.startDim[i] = NULL;
      new->astnode.ident.endDim[i] = temp;
      alen *= (int) eval_const_expr(new->astnode.ident.endDim[i]);
    }
  }
                       
  if(alen)
    new->astnode.ident.array_len = alen;
  else
    new->astnode.ident.array_len = -1;

  new->astnode.ident.leaddim = NULL;
   
  /* leaddim might be a constant, so check for that.  --keith */
  if(new->astnode.ident.arraylist->nodetype == Constant) 
  {
    new->astnode.ident.leaddim = 
      strdup(new->astnode.ident.arraylist->astnode.constant.number);
  }
  else {
    new->astnode.ident.leaddim = 
      strdup(new->astnode.ident.arraylist->astnode.ident.name);
  }

  store_array_var(new);

  return new;
}

/*****************************************************************************
 *                                                                           *
 * process_subroutine_call                                                   *
 *                                                                           *
 * Performs processing to handle a subroutine/function call or array access. *
 *                                                                           *
 *****************************************************************************/

AST *
process_subroutine_call(AST *varname, AST *explist)
{
  char *tempname;
  AST *new;

  new = addnode();
  varname->parent = new;

  if(explist != NULL)
    strcpy(explist->parent->astnode.ident.name, 
      varname->astnode.ident.name);

  /*
   *  Here we could look up the name in the array table and set 
   *  the nodetype to ArrayAccess if it is found.  Then the code 
   *  generator could easily distinguish between array accesses 
   *  and function calls.  I'll have to implement the rest of 
   *  this soon.  -- Keith
   *
   *     if(type_lookup(array_table, varname->astnode.ident.name))
   *       new->nodetype = ArrayAccess;
   *     else
   *       new->nodetype = Identifier;
   */

  new->nodetype = Identifier;

  strcpy(new->astnode.ident.name, varname->astnode.ident.name);

  /* We don't switch index order.  */
  if(explist == NULL) {
    new->astnode.ident.arraylist = addnode();
    new->astnode.ident.arraylist->nodetype = EmptyArgList;
  }
  else
    new->astnode.ident.arraylist = switchem(explist);

  tempname = strdup(new->astnode.ident.name);
  uppercase(tempname);

  if(!type_lookup(external_table, new->astnode.ident.name) &&
     !type_lookup(array_table, new->astnode.ident.name) &&
     methodscan(intrinsic_toks, tempname))
  {
    HASHNODE *ife;

    /* this must be an intrinsic function call, so remove
     * the entry from the type table (because the code
     * generator checks whether something is an intrinsic
     * or not by checking whether it's in the type table).
     */
    ife = type_lookup(type_table, new->astnode.ident.name);
    if(ife)
      ife = hash_delete(type_table, new->astnode.ident.name);
  }

  free_ast_node(varname);
  free(tempname);

  return new;
}

/*****************************************************************************
 *                                                                           *
 * assign_function_return_type                                               *
 *                                                                           *
 * This function scans the type declarations to see if this function was     *
 * declared.  If so, we reset the return type of the function to the         *
 * type declared here.  e.g.:                                                *
 *         function dlaneg(n)                                                *
 *         integer n                                                         *
 *         integer dlaneg                                                    *
 * Normally the function would have an implicit type of REAL, but it         *
 * will be set to INTEGER in this case.                                      *
 *                                                                           *
 *****************************************************************************/

void
assign_function_return_type(AST *func, AST *specs)
{
  AST *temp, *dec_temp;
  HASHNODE *ht;

  for(temp = specs; temp; temp=temp->nextstmt) {

    if(temp->nodetype == Typedec) {
      for(dec_temp = temp->astnode.typeunit.declist; dec_temp;
         dec_temp = dec_temp->nextstmt)
      {
        if(!strcmp(dec_temp->astnode.ident.name, 
               func->astnode.source.name->astnode.ident.name)) 
        {
          func->astnode.source.returns = temp->astnode.typeunit.returns;
          func->vartype = temp->astnode.typeunit.returns;
          func->astnode.source.name->vartype = temp->astnode.typeunit.returns;

          ht = type_lookup(type_table, dec_temp->astnode.ident.name);

          /* the else case shouldn't be hit since the implied variable
           * should have been inserted already.
           */

          if(ht)
            ht->variable->vartype = temp->astnode.typeunit.returns;
          else
            insert_name(type_table, dec_temp, temp->astnode.typeunit.returns);
        }
      }
    }
  }
}

