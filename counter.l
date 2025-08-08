%{
#include <stdio.h>

int word_count = 0;
int char_count = 0;
int line_count = 0;
int in_word = 0;
%}

%%

\n          { line_count++; char_count++; in_word = 0; return 0; }
[ \t]       { char_count++; in_word = 0; }
[^ \t\n]    { char_count++;
              if (!in_word) {
                  word_count++;
                  in_word = 1;
              }
            }

%%

int yywrap() { return 1; }

int main() {
    printf("Enter a line: ");
    yylex();
    printf("\nLines: %d\n", line_count);
    printf("Words: %d\n", word_count);
    printf("Characters: %d\n", char_count);
    return 0;
}
