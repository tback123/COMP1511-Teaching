// An example of using fgets to echo each line.

#include <stdio.h>

#define MAX_LINE 4096

int main(void) {

    char line[MAX_LINE];

    // Arguments :
    //      Destination Array (where to put the line)
    //      Destination Array Size ()
    //      Where to read in from (the terminal): stdin
    while(fgets(line, MAX_LINE, stdin) != NULL) {
        printf("Line was: %s", line);
        printf("Line was: %s", line);
    }

    return 0;
}