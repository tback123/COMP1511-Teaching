// An example of using functions to calculate triangle number
// Written by Tom's comp1511 tutorial

#include <stdio.h>

int triangle(int triangle_num);

int main() {

    // Get the 15th triangle number
    int result = triangle(15);
    printf("Total: %d\n", result);

    // Get the 72nd triangle number
    result = triangle(72);
    printf("Total: %d\n", result);

    // Get the 72nd triangle number
    result = triangle(1000);
    printf("Total: %d\n", result);

    return 0;
}

int triangle(int triangle_num) {

    int total = 0;
    while (triangle_num >= 1) {
        total += triangle_num;
        triangle_num--;
    }

    return total;

}