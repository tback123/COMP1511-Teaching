#include <stdio.h>

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {

    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }

    printf("\n");
}

int main (void) {
    //   0    1     2
    // {'H', 'i', '\0'};
    char my_string[] = "Hi";

    print_string(my_string);
    return 0;
}