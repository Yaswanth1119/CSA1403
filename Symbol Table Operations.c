#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[20];
    char type[10];
    int address;
} table[100];

int count = 0;

void insert() {
    printf("Enter name: ");
    scanf("%s", table[count].name);
    printf("Enter type: ");
    scanf("%s", table[count].type);
    printf("Enter address: ");
    scanf("%d", &table[count].address);
    count++;
}

void display() {
    printf("\n%-10s %-10s %-10s\n", "NAME", "TYPE", "ADDRESS");
    for (int i = 0; i < count; i++) {
        printf("%-10s %-10s %-10d\n", table[i].name, table[i].type, table[i].address);
    }
}

int main() {
    int choice;
    do {
        printf("\n1.Insert\n2.Display\n3.Exit\nChoice: ");
        scanf("%d", &choice);
        if (choice == 1)
            insert();
        else if (choice == 2)
            display();
    } while (choice != 3);

    return 0;
}
