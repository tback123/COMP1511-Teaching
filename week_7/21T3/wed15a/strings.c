// Example string program

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

int main(void) {

    char my_string[MAX_STRING_LEN] = "hello world";
    char my_other_string[MAX_STRING_LEN];

    // MUST use strcpy when copying strings to a new variable
    strcpy(my_other_string, my_string);

    printf("%s\n", my_other_string);

    return 0;
}