// Example string program

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

int main(void) {

    char my_arr[MAX_STRING_LEN];
      
    // destination, source
    strcpy(my_arr, "hi there");
    
    printf("%s\n", my_arr); 
    
    strcpy(my_arr, "hello");
    
    printf("%s\n", my_arr);  
 

    return 0;
}
