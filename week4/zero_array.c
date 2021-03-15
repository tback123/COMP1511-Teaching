// Tom Killingback
// Zeros array and then sums two elements

#include <stdio.h>

int add(int num1, int num2);

int main(void) {

    int zeros[7] = {0};

    int result = add(3, 4);

    return 0;

}

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}
