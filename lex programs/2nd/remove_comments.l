%{
#include <stdio.h>
%}

%%
"/*"   { int c;
         while ((c = input()) != EOF) {
             if (c == '*' && (c = input()) == '/')
                 break;
         }
       }
"//"   { int c;
         while ((c = input()) != '\n' && c != EOF) ;
       }
.      { putchar(yytext[0]); }

%%

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    yyin = inputFile;
    yylex();

    fclose(inputFile);
    return 0;
}

