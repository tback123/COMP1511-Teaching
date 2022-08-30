// Example string program

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 10

int main(void) {

    char my_arr[MAX_STRING_LEN];
    
    //where to put, how much to read, where from
    fgets(my_arr, MAX_STRING_LEN, stdin); 
    
    printf("%s\n", my_arr);

    return 0;
}
