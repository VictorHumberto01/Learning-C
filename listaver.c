#include <stdio.h>

int main() {

   int n = 1, soma;

    while (n != 0) {
        printf("Enter a number: ");
        scanf("%d", &n);

        soma += n;
    }

    printf("Soma: %d\n", soma);

    return 0;
}
