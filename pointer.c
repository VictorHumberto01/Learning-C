#include <stdio.h>

int main() {

    int a = 10;
    int *p = &a;

    printf("%d\n", a);
    printf("\nChanging a with the pointer\n");

    *p = 11;

    printf("%d\n", a);

    int *x;
    printf("%d\n", *x);
    return 0;
}
