// A program to show the use case of a struct
// Written by Tom's COMP1511 Tutorial

#include <stdio.h>

// TODO: Define a struct
struct time {
    int hour;
    int minute;
    char meridiem;
};

int main(void) {

    // TODO: Build a strucut   
    struct time current_time;
    
    current_time.hour = 3;
    current_time.minute = 48;
    current_time.meridiem = 'p';
  

    // TODO: Print the info from the struct
    printf("The hour is: %d\n", current_time.hour);
    printf("The minute is: %d\n", current_time.minute);
    printf("The meridiem is: %c\n", current_time.meridiem);


    return 0;
}
