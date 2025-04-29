#include <stdio.h>


int fib(int n) {
    if (n <= 1){return n;}

    int a = 0, b = 1, temp;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;

};

int main() {

    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Fibonacci(%d) = %d\n", n, fib(n));




    return 0;
}
