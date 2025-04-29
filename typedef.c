#include <stdio.h>
#include <string.h>

typedef char string[25];


typedef struct User {
    string name;
    string password;
    int id;
} User;

int main(){
    // typedef = reserved keyword that gives an existing datatype a "nickname"


    User user1 = {"Bro", "123", 12312312};


    return 0;
}
