#include <stdio.h>

int main(void) {
    // Naming variables
    int num1;   // num1 is the first number the user types in
    int num2;   // num2 is the second number the user types in
    int sum;    // sum is the result of adding the first and second number

    // Getting the numbers from the user
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Adding the two numbers together
    sum = num1 + num2;

    // Tell the user the result
    printf("Your numbers add up to %d\n", sum);

    // Check if its divisible by 2
    if (sum %2 != 0) {
    if(num1 %2 == 0) {
    printf("The first number you've typed was even and the second number was odd\n");
    } else if (num1 %2 != 0) {
    printf("The first number you've typed was odd and the second number was even\n");
    }
    } else if (sum %2 == 0) {
    if(num1 %2 == 0) {
    printf("Both the numbers you've typed were even\n"); 
    } else if (num1 %2 != 0) {
    printf("Both the numbers you've typed were odd\n");
    }
    }

    return 0;
}