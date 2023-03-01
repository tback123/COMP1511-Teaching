// Example program

#include <stdio.h>

int main(void) {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("a < b!\n");
    } 
    
    if (b == 0) {
        printf("b == 0!\n");
    } 
    
    if (a > b) {
        printf("%d\n", a / b);
        printf("%lf\n", (a * 1.0) / (b * 1.0));
    } else {
        printf("Else!!\n");
    }


    return 0;
}