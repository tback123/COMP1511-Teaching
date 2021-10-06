// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

// Definition
struct person {
    char name;
    int age;
    double height;
};

int main(void) {
  
    struct person tom = {};
    
    tom.name = 't';
    tom.age = 21;
    tom.height = 184.5;
    

    // TODO: Print the info from the struct
    printf("The name is: %c\n", tom.name);
    printf("The age is: %d\n", tom.age);
    printf("The height is: %lf\n", tom.height);


    return 0;
}
