// An example of using fgets to echo each line.
// Echo each line of input, 2 times

#include <stdio.h>

#define MAX_LINE 4096

int main(void) {

    char line[MAX_LINE];   

    // Arguements: Destination array (where to put read in line)
    //             Destination array length (the max number of chars to read in per line)
    //             "Stream" - stdin (Where to read the line of input from)
    while (fgets(line, MAX_LINE, stdin) != NULL) {

        printf("The line was: %s", line);
        printf("The line was: %s", line);

    }

    return 0;
}