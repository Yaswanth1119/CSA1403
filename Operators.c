#include <stdio.h>

int main() {
    char str[100];
    printf("Enter expression: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i]; i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            printf("Operator: %c\n", str[i]);
    }
    return 0;
}
