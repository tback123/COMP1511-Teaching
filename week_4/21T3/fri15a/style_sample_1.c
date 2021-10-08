// Header comment!!!
// Short description of the program
// Who write it, when they wrote it

#include <stdio.h>

int main(void) {

    // Init some variables
    int primary_school = 7; 
    int high_school = 12; 
    int user_year;

    // Read in the year from the user
    printf("What year are you in? ");
    scanf("%d", &user_year);

    // Check if user in high school
    if (user_year >= primary_school ) {
        if (user_year <= high_school) {
            printf("You are in high school\n");
        }
    }

    // Check if not in high school
    if ( user_year < 7 || user_year > 12) {
      printf("You are not in high school\n");
    }
      
    return 0;

}