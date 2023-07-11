#ifndef YY_my_parser_h_included
#define YY_my_parser_h_included
/*#define YY_USE_CLASS 
*/
#line 1 "/usr/share/bison++/bison.h"
/* before anything */
#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif


 #line 8 "/usr/share/bison++/bison.h"

#line 21 "/usr/share/bison++/bison.h"
 /* %{ and %header{ and %union, during decl */
#ifndef YY_my_parser_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_my_parser_COMPATIBILITY 1
 #else
  #define  YY_my_parser_COMPATIBILITY 0
 #endif
#endif

#if YY_my_parser_COMPATIBILITY != 0
/* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_my_parser_LTYPE
   #define YY_my_parser_LTYPE YYLTYPE
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
  #endif
 #endif
/*#ifdef YYSTYPE*/
  #ifndef YY_my_parser_STYPE
   #define YY_my_parser_STYPE YYSTYPE
  /* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
   /* use %define STYPE */
  #endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_my_parser_DEBUG
   #define  YY_my_parser_DEBUG YYDEBUG
   /* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
   /* use %define DEBUG */
  #endif
 #endif 
 /* use goto to be compatible */
 #ifndef YY_my_parser_USE_GOTO
  #define YY_my_parser_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_my_parser_USE_GOTO
 #define YY_my_parser_USE_GOTO 0
#endif

#ifndef YY_my_parser_PURE

 #line 65 "/usr/share/bison++/bison.h"

#line 65 "/usr/share/bison++/bison.h"
/* YY_my_parser_PURE */
#endif


 #line 68 "/usr/share/bison++/bison.h"
#ifndef YY_USE_CLASS
# ifndef YYSTYPE
#  define YYSTYPE int
#  define YYSTYPE_IS_TRIVIAL 1
# endif
#endif

#line 68 "/usr/share/bison++/bison.h"
/* prefix */

#ifndef YY_my_parser_DEBUG

 #line 71 "/usr/share/bison++/bison.h"

#line 71 "/usr/share/bison++/bison.h"
/* YY_my_parser_DEBUG */
#endif

#ifndef YY_my_parser_LSP_NEEDED

 #line 75 "/usr/share/bison++/bison.h"

#line 75 "/usr/share/bison++/bison.h"
 /* YY_my_parser_LSP_NEEDED*/
#endif

/* DEFAULT LTYPE*/
#ifdef YY_my_parser_LSP_NEEDED
 #ifndef YY_my_parser_LTYPE
  #ifndef BISON_YYLTYPE_ISDECLARED
   #define BISON_YYLTYPE_ISDECLARED
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;
  #endif

  #define YY_my_parser_LTYPE yyltype
 #endif
#endif

/* DEFAULT STYPE*/
#ifndef YY_my_parser_STYPE
 #define YY_my_parser_STYPE int
#endif

/* DEFAULT MISCELANEOUS */
#ifndef YY_my_parser_PARSE
 #define YY_my_parser_PARSE yyparse
#endif

#ifndef YY_my_parser_LEX
 #define YY_my_parser_LEX yylex
#endif

#ifndef YY_my_parser_LVAL
 #define YY_my_parser_LVAL yylval
#endif

#ifndef YY_my_parser_LLOC
 #define YY_my_parser_LLOC yylloc
#endif

#ifndef YY_my_parser_CHAR
 #define YY_my_parser_CHAR yychar
#endif

#ifndef YY_my_parser_NERRS
 #define YY_my_parser_NERRS yynerrs
#endif

#ifndef YY_my_parser_DEBUG_FLAG
 #define YY_my_parser_DEBUG_FLAG yydebug
#endif

#ifndef YY_my_parser_ERROR
 #define YY_my_parser_ERROR yyerror
#endif

#ifndef YY_my_parser_PARSE_PARAM
 #ifndef __STDC__
  #ifndef __cplusplus
   #ifndef YY_USE_CLASS
    #define YY_my_parser_PARSE_PARAM
    #ifndef YY_my_parser_PARSE_PARAM_DEF
     #define YY_my_parser_PARSE_PARAM_DEF
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_my_parser_PARSE_PARAM
  #define YY_my_parser_PARSE_PARAM void
 #endif
#endif

/* TOKEN C */
#ifndef YY_USE_CLASS

 #ifndef YY_my_parser_PURE
  #ifndef yylval
   extern YY_my_parser_STYPE YY_my_parser_LVAL;
  #else
   #if yylval != YY_my_parser_LVAL
    extern YY_my_parser_STYPE YY_my_parser_LVAL;
   #else
    #warning "Namespace conflict, disabling some functionality (bison++ only)"
   #endif
  #endif
 #endif


 #line 169 "/usr/share/bison++/bison.h"
#define	NUMBER	258


#line 169 "/usr/share/bison++/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
 #ifndef YY_my_parser_CLASS
  #define YY_my_parser_CLASS my_parser
 #endif

 #ifndef YY_my_parser_INHERIT
  #define YY_my_parser_INHERIT
 #endif

 #ifndef YY_my_parser_MEMBERS
  #define YY_my_parser_MEMBERS 
 #endif

 #ifndef YY_my_parser_LEX_BODY
  #define YY_my_parser_LEX_BODY  
 #endif

 #ifndef YY_my_parser_ERROR_BODY
  #define YY_my_parser_ERROR_BODY  
 #endif

 #ifndef YY_my_parser_CONSTRUCTOR_PARAM
  #define YY_my_parser_CONSTRUCTOR_PARAM
 #endif
 /* choose between enum and const */
 #ifndef YY_my_parser_USE_CONST_TOKEN
  #define YY_my_parser_USE_CONST_TOKEN 0
  /* yes enum is more compatible with flex,  */
  /* so by default we use it */ 
 #endif
 #if YY_my_parser_USE_CONST_TOKEN != 0
  #ifndef YY_my_parser_ENUM_TOKEN
   #define YY_my_parser_ENUM_TOKEN yy_my_parser_enum_token
  #endif
 #endif

class YY_my_parser_CLASS YY_my_parser_INHERIT
{
public: 
 #if YY_my_parser_USE_CONST_TOKEN != 0
  /* static const int token ... */
  
 #line 212 "/usr/share/bison++/bison.h"
static const int NUMBER;


#line 212 "/usr/share/bison++/bison.h"
 /* decl const */
 #else
  enum YY_my_parser_ENUM_TOKEN { YY_my_parser_NULL_TOKEN=0
  
 #line 215 "/usr/share/bison++/bison.h"
	,NUMBER=258


#line 215 "/usr/share/bison++/bison.h"
 /* enum token */
     }; /* end of enum declaration */
 #endif
public:
 int YY_my_parser_PARSE(YY_my_parser_PARSE_PARAM);
 virtual void YY_my_parser_ERROR(char *msg) YY_my_parser_ERROR_BODY;
 #ifdef YY_my_parser_PURE
  #ifdef YY_my_parser_LSP_NEEDED
   virtual int  YY_my_parser_LEX(YY_my_parser_STYPE *YY_my_parser_LVAL,YY_my_parser_LTYPE *YY_my_parser_LLOC) YY_my_parser_LEX_BODY;
  #else
   virtual int  YY_my_parser_LEX(YY_my_parser_STYPE *YY_my_parser_LVAL) YY_my_parser_LEX_BODY;
  #endif
 #else
  virtual int YY_my_parser_LEX() YY_my_parser_LEX_BODY;
  YY_my_parser_STYPE YY_my_parser_LVAL;
  #ifdef YY_my_parser_LSP_NEEDED
   YY_my_parser_LTYPE YY_my_parser_LLOC;
  #endif
  int YY_my_parser_NERRS;
  int YY_my_parser_CHAR;
 #endif
 #if YY_my_parser_DEBUG != 0
  public:
   int YY_my_parser_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
 #endif
public:
 YY_my_parser_CLASS(YY_my_parser_CONSTRUCTOR_PARAM);
public:
 YY_my_parser_MEMBERS 
};
/* other declare folow */
#endif


#if YY_my_parser_COMPATIBILITY != 0
 /* backward compatibility */
 /* Removed due to bison problems
 /#ifndef YYSTYPE
 / #define YYSTYPE YY_my_parser_STYPE
 /#endif*/

 #ifndef YYLTYPE
  #define YYLTYPE YY_my_parser_LTYPE
 #endif
 #ifndef YYDEBUG
  #ifdef YY_my_parser_DEBUG 
   #define YYDEBUG YY_my_parser_DEBUG
  #endif
 #endif

#endif
/* END */

 #line 267 "/usr/share/bison++/bison.h"
#endif
