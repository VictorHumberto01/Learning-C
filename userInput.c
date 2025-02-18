#include <stdio.h>
#include <string.h>

int main() {

    char name[25]; //bytes
    int age;

    printf("What's your name?: ");
    //scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("Hello %s\n", name); // \n = new line (enter

    printf("You are %d years old", age);
    
    if (age >= 18) {
        printf("\nIn Brazil you're considered an adult");
    } else {
        printf("\nIn Brazil you're considered a child");
    };
    return 0;
}