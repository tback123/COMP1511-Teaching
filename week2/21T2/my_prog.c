// Program to read in a number, 
// and check if its even or odd

// vars & constants
// Scanf

#include <stdio.h>

#define MY_NUMBER 55

int main(void) {
    
    int toms_age = 20;
    printf("Tom's age is: %d\n", toms_age);
    
    printf("Please enter a number: ");
    scanf("%d", &toms_age);
    
    printf("Tom's age is now: %d\n", toms_age);
    
    if ((toms_age % 2) == 0) {
        printf("Is Even\n");
    } else {
        printf("Is Odd\n");
    }
    

    return 0;
}



