// Example string program

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1000

int main(void) {

    char my_array[MAX_STRING_LEN];
    
    // where to put, how much to get, from where
    fgets(my_array, MAX_STRING_LEN, stdin);


    printf("String: %s\n", my_array);

    return 0;
}
