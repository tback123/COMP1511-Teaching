#include <stdio.h>
#include <string.h>

#define MAX_LEN 1024

int main() {

    // Create an empty character array
    char line[MAX_LEN];

    // Read in an entire line and put it in
    // the array from above
    // returns NULL if read CTRL+D
    char *result = fgets(line, MAX_LEN, stdin);

    if (result == NULL) {
        printf("Got CTRL+D...\n");
    } else {
        // print out the line we read in
        printf("%s", line);
    }

    return 0;
}