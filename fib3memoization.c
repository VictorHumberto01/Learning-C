#include <stdio.h>
#include <stdlib.h>

long long *fibonacciCache;

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    if (fibonacciCache[n] != 0) {
        return fibonacciCache[n];
    }

    fibonacciCache[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fibonacciCache[n];
}

int main() {
    int n;

    printf("Digite o índice do termo da sequência (limite === 92): ");
    scanf("%d", &n);

    fibonacciCache = (long long *)calloc(n + 1, sizeof(long long));
    if (!fibonacciCache) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        printf("%lld ", fibonacci(i));
    }

    printf("\n");

    free(fibonacciCache);
    return 0;
}
