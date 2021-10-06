// Test program

#include <stdio.h>

struct letters {
    char my_letter;
    char my_other_letter;
}

int main(void) {
    
    char my_letter = 't';
    char my_other_letter = 'c';
    
    struct letters group1 = {};
    group1.my_letter = 'a';
    group1.my_other_letter = 'b';
    
    struct letters group2 = {};
    group2.my_letter = 'x';
    group2.my_other_letter = 'y';
    
    my_letter = 'y';
    

    printf("my_letter: %c\n", my_letter);
    printf("my_other_letter: %c\n", my_other_letter);
        
    return 0;
}
