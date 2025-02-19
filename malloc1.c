#include <stdio.h>
#include <stdlib.h>

int main() {

    void *x;

    x = malloc(sizeof(int));    
    if (x == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    } else {
        printf("Memory allocated at: %p\n", x);
    }
    

    *(int*)x = 10;

    return 0;
}
