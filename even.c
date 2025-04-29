#include <stdio.h>
#include <stdbool.h>

bool iseven(int num) {
    return num % 2 == 0;
}

int main(void) {
    int num = 11;
    if (iseven(num)) {
        printf("True");
    } else {
        printf("false");
    }
    return 0;
}