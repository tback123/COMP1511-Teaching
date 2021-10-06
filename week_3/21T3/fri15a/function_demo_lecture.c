// Demonstrating the use of functions with code
// from last week (example is using Week02/if_logic.c)
// The original program took in two numbers from the user, added those together
// and then decided how many digits the sum has.
// Sasha Vassar, Week 3 Lecture 5

// Functions that you have used already are printf and scanf 
// scanf - returns something to us - ho wmany things it has scanned in

#include <stdio.h>

//1. Scan in numbers
//2. Check for errors on scanning
//3. Add the numbers
//4. Compare to the sum for number of digits

//Prototype functions to let C know what functions are coming

int sum (int number_one, int number_two);
void comparison (int sum);

// Main function which will call our helper functions as needed 
int main (void) {

    int result;
    int number_one;
    int number_two;
    int scanf_return;
    //1. Scan in numbers 
    printf("Please enter two numbers: ");
    
    //2. Error check
    if (scanf("%d %d", &number_one, &number_two) != 2) {
        printf("Error, a number was not scanned in\n");
        return 1;
    }
    //3. Add the numbers
    result = sum(number_one, number_two); // sum(3, 4)
    
    //4. Perform the comparison for number of digits
    comparison(result); //comparison(7)
    
    return 0;
}

// Taking out the sum as a functions
// Function adds two numbers
// Input: int number_one, int number_two
// Output: int sum 

int sum (int number_one, double number_two) {
    //int result = number_one + number_two; //7
    return number_one + number_two;    //return 7
    
}

// Taking out the comparison as a functions
// Function compares teh sum for number of digits
// Input: int sum
// Output: void

void comparison (int sum) {
    if (-10 < sum && sum < 10) {
        printf("%d has 1 digit\n", sum);
    } else if ((10 <= sum && sum < 100) || (-10 >= sum && sum > -100)) {
        printf("%d has 2 digits.\n", sum);
    } else if (sum >= 100 || sum <= -100) {
        printf("%d has more than 2 digits.\n", sum);
    }
} 
