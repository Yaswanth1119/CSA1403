#include <stdio.h>
#include <string.h>

int main() {
    char a[10], b[10];

    printf("Grammar: S → AaAb | BbBa\nA → ε\nB → ε\n");

    printf("Enter terminal after A in AaAb: ");
    scanf("%s", a);
    printf("Enter terminal after B in BbBa: ");
    scanf("%s", b);

    printf("\nFOLLOW(S) = { $ }\n");
    printf("FOLLOW(A) = { %c, %c }\n", a[0], b[0]);
    printf("FOLLOW(B) = { %c }\n", b[0]);

    return 0;
}
