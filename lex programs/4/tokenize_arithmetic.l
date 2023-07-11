%{
#include <stdio.h>
%}

%%

[0-9]+          { printf("Operand: %s\n", yytext); }
[+\-*/]         { printf("Operator: %s\n", yytext); }
[ \t\n]         ; // skip whitespace characters
.               ; // skip unrecognized characters

%%

int main() {
    yylex();
    return 0;
}

