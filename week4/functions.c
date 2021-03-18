#include <stdio.h>

int my_product(int num_1, int num_2);

int main(void) {

    int a = 10;
    int b = 5;
    int num_1 = 11;
    int num_2 = 72;
    
    int result1 = my_product(a, b);
    int result2 = my_product(num_1, num_2);

    printf("result 1 was: %d\n", result1);
    printf("result 2 was: %d\n", result2);

    return 0;
}

int my_product(int num_1, int num_2) {

    int product = num_1 * num_2;

    return product;

}