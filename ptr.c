#include <stdio.h>

int main() {

    int a = 10;
    int *p = &a;    // Makes p point to the variable a
    int **pp = &p;

    printf("Value of a is %d\n", a);   // Will print "Value of a is 10\n"
    printf("Value of *p is %d\n", *p);   // Will print "Value of *p is 10\n"
    printf("Value of **pp is %d\n", **pp);   // Will print "Value of **pp is 10\n"

    return 0;
}