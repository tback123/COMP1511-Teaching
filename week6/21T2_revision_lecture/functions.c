// Sample program
// Written by Tom Killingback (9/7/21)

#include <stdio.h>

#define YEARS 20

void print_age(int age);

int main(void) {
      
    int toms_age = 20;
    print_age(toms_age);
    
    int alvins_age = 21;
    print_age(alvins_age);
    

    return 0;
    
}

void print_age(int age) {

    int curr_age = 1;
    while (curr_age <= age) {
        printf("The age is: %d\n", curr_age);
        curr_age++;
    }

}








