#include <stdio.h>

void printAge(int *pAge){
    printf("You are %d years old\n", *pAge);
};

int main() {
    // pointer = a variable-like reference that holds a memory address to another variable,
    //           allowing indirect access to the value it points to.
    //           * = indirection operator (value at address)

    int age = 21;
    int *pAge = &age;

    //printf("Address of age: %p\n", &age);
    //printf("Value of pAge: %p\n", pAge);

    //printf("size of age: %zu bytes\n", sizeof(age));

    //printf("Value of age: %d\n", age);
    //printf("value stored at address: %d\n", *pAge);
    printAge(pAge);
    return 0;
}
