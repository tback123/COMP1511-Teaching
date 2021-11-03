// Example string program

#include <stdio.h>
#include <string.h>

#define MAX_STRING_LEN 1024

int main(void) {

    char string1[MAX_STRING_LEN] = "hello";

    printf("%s", string1);

    // String Copy
    //    (dest   ,  src)
    strcpy(string1, "Tom");

    printf("%s", string1);

    return 0;
}