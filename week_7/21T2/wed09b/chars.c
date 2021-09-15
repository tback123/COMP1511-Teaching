// Example chars program

#include <stdio.h>

int main(void) {

    int my_num = 5;          // int = 4bytes <=> -2,147,483,647 
    char my_char = '6';       // Char = 1byte <=> -126 to +127 --> Usable range: 0 -> 127

    printf("The num was: %d\n", my_num);
    printf("The char was: %d\n", my_char);

    // Get the actual numerical value (only works for numerical chars)

    int result_num = my_char - '0';
    printf("The result num was: %d\n", result_num);


    return 0;
}