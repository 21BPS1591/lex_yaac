%{
#include <stdio.h>
int yyerror(const char *message);
int yylex(void);
int yyparse(void); // Add declaration for yyparse
int yylval; // Variable to store the value of a number token
%}

%name my_parser

%token NUMBER

%%

expression: expression '+' NUMBER     { $$ = $1 + $3; }
          | NUMBER                   { $$ = $1; }
          ;

%%

int main() {
    yyparse(); // Call yyparse to start parsing
    return 0;
}

int yyerror(const char *message) {
    printf("Error: %s\n", message);
    return 1;
}

int yylex(void) {
    int c;
    while ((c = getchar()) == ' ' || c == '\t' || c == '\n')
        ;

    if (c == '+') {
        return '+';
    }
    else if (c >= '0' && c <= '9') {
        int value = c - '0';
        while ((c = getchar()) >= '0' && c <= '9') {
            value = value * 10 + (c - '0');
        }
        ungetc(c, stdin);
        yylval = value;
        return NUMBER;
    }

    return c;
}

