#include <stdio.h>

int main() {

    int n, i;
    long long num1 = 0, num2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer\n");
        return 1;
    }

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        printf("%lld, ", num1);
        next = num1 + num2;
        num1 = num2;
        num2 = next;

    }
    
    printf("\n");
    
    return 0;
}