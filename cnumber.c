#include <stdio.h>

int main() {
    char ch = 'C';
    short s = ch;
    printf("%d\n", s);

    double d = 3.14159;
    char pi = *(char*)&d;
    printf("%d\n", pi);

    return 0;
}