#include <stdio.h>

int main(void) {

    printf("Enter character: ");

    // Returns EOF on ctrl+d
    // EOF == -1
    int ch = getchar();

    if (ch == EOF) {
        printf("Got CTRL+D\n");
    } else {
        printf("Scanned in '%c'\n", ch);
    }

    return 0;
}