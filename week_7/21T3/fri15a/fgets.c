#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1024

int main(int argc, char *argv[]) {

    // Create empy array for the line to be put into
    char dest_array[MAX_SIZE];

    // Reads an entire line
    // dest_array - where the line is put
    // MAX_SIZE - Max line length
    // stdin - 'read from the command line'
    // When reads CTRL+D => Returns NULL
    char *result = fgets(dest_array, MAX_SIZE, stdin);

    if (result == NULL) {
        printf("Got CTRL+D!\n");
    } else {
        printf("%s", dest_array);
    }

    return 0;
}