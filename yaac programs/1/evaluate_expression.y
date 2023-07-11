%{
#include <stdio.h>

int yylex(void);  // Declare yylex function
int yyerror(const char*);  // Declare yyerror function
%}

%name my_parser  // Specify a custom parser name

%token NUMBER
%left '+' '-'
%left '*' '/'

%%

input: /* empty */
     | input line
     ;

line: expr '\n' { printf("Result: %d\n", $1); }
    ;

expr: NUMBER
    | expr '+' expr   { $$ = $1 + $3; }
    | expr '-' expr   { $$ = $1 - $3; }
    | expr '*' expr   { $$ = $1 * $3; }
    | expr '/' expr   { $$ = $1 / $3; }
    | '(' expr ')'    { $$ = $2; }
    ;

%%

int main() {
    yyparse();
    return 0;
}

int yyerror(const char* message) {
    printf("Error: %s\n", message);
    return 1;
}

int yylex(void) {
    int c = getchar();
    if (c >= '0' && c <= '9') {
        yylval = c - '0';
        return NUMBER;
    }
    return c;
}

