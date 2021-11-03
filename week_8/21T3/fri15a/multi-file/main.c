//
// DO NOT CHANGE THIS FILE
//
// You do not submit this file. This file is not marked.
// If you think you need to change this file you have
// misunderstood the exercise - ask in the course forum.
//
// Week 8 Tutorial: Letters
// main.c
//
// You must not change this file.
// 
// Uses the implementation of letters.h.
//

#include <stdio.h>

#include "letters.h"

int main(void) {

    char input;
    printf("Enter letter: ");
    while (scanf(" %c", &input) == 1) {
        if (check_letter(input) == 1) {
            printf("It's a letter!\n");
        } else {
            printf("It's not a letter!\n");
        }

        printf("Enter letter: ");
    }

    return 0;
}