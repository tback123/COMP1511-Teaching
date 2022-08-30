#include <stdio.h>

int main(void) {
    char string* = "";
    char c;
    scanf("%c", &c);
    int chars_read = 0;
    while (c != eof) {
        string[chars_read] = c;
        scanf("%c", &c);
    }
    printf("Read in %d chars for the string: %s", chars_read, string);
    return 0;
}
