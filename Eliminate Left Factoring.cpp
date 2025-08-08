#include <stdio.h>
#include <string.h>

int main() {
    char common[20], firstSuffix[20], secondSuffix[20];
    printf("Enter common prefix: ");
    scanf("%s", common);

    printf("Enter first suffix: ");
    scanf("%s", firstSuffix);

    printf("Enter second suffix: ");
    scanf("%s", secondSuffix);

    printf("\nAfter Left Factoring:\n");
    printf("S → %sX\n", common);
    printf("X → %s | %s\n", firstSuffix, secondSuffix);

    return 0;
}
