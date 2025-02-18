#include <stdio.h>

int main() {
    char animal[3];
    printf("Type cat or dog: ");
    scanf("%s", &animal[0]);

    if (animal[0] == 'c') {
        printf("Meow!\n");
    } else if (animal[0] == 'd') {
        printf("Woof!\n");
    } else {
        printf("Not cat or dog!\n");
    }
    return 0;
};