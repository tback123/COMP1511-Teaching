// Example string program

#include <stdio.h>
#include <string.h>


#define MAX_STRING_LEN 10

int main(void) {

    char my_array[MAX_STRING_LEN];
    char other_array[] = "hi";
    
    // destination, source
    strcpy(my_array, other_array);


    printf("String: %s\n", my_array);

    return 0;
}
