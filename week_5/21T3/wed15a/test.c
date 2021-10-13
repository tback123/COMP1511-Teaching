#include <stdio.h>

struct person {
    int age;
    double height;
    char initial;
};

int subtract(int num1, int num2);

int main(void) {

    int distance1 = 500;
    int distance2 = 200;

    int subtraction;
    subtraction = subtract(distance2, distance1);

    printf("%d", subtraction);

    return 0;
}

int subtract(int num1, int num2) {

    int result = num1 - num2;
    return result;
}