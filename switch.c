#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 1;
    int num2 = 2;
    int *n = &num;
    int *n2 = &num2;
    int temp;



    printf("%d\n", *n);
    printf("%d\n", *n2);

    temp = *n;  // store in first position
    *n = *n2;
    *n2 = temp; // retrieve from first position
    printf("\n");
    printf("%d\n", *n);
    printf("%d\n", *n2);

    return 0;
}
