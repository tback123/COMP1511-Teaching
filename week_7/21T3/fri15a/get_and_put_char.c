#include <stdio.h>

int main(void) {

    printf("Enter character: ");
    putchar('a');
    //scanf(" %c", &ch);
    
    // If CTRL+D is pressed => ch == EOF
    // get char returns an int
    int ch = getchar();

    if (ch == EOF) {
        printf("CTRL+D was pressed!\n");
    } else {
        printf("Scanned in '%c'\n", ch);
    }

    return 0;
}