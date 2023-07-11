%{
#include <stdio.h>
%}

%%
[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,} { printf("Email address: %s\n", yytext); }
.                                             ; // skip unmatched characters

%%

int main() {
    yylex();
    return 0;
}

