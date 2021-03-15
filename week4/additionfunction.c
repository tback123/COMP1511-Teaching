
#include <stdio.h>

int hello(int a, int b);

int main(void) {

    int input1 = 0;
    int input2 = 0;

    printf("please enter num1: ");
    scanf("%d", &input1);

    printf("please enter num2: ");
    scanf("%d", &input2);

    printf("Num 1 was: %d\n", input1);
    printf("Num 2 was: %d\n", input2);

    int temp = hello(input1, input2);

    printf("the sum of the numbers were: %d\n", temp);

}

int hello(int a, int b) {

    int sum = a + b;

    return sum;    

}