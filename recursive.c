#include <stdio.h>

int repeat(int count) {
    if (count > 100) {
        return 0;
    } else {
        printf("%d\n", count);
        return repeat(count + 1);
    }
}

int main() {
    int count = 99;
    repeat(count);
    return 0;
}