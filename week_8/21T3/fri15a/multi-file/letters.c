// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"

int check_letter(char ch) {
    
    // Check if its an uppercase
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    }

    // check if its a lowercase
    if (ch >= 'a' && ch <= 'z') {
        return 1;
    }

    // if neither, the must not be a letter!
    return 0;

}