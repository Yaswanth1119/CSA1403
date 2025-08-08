#include <stdio.h>

int main() {
    char str[500];
    int space = 0, newline = 0;

    printf("Enter your input (end with ~):\n");
    char ch;
    while ((ch = getchar()) != '~') {
        if (ch == ' ')
            space++;
        else if (ch == '\n')
            newline++;
    }

    printf("Whitespace count: %d\n", space);
    printf("Newline count: %d\n", newline);
    return 0;
}
