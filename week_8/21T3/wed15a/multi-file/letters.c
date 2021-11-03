// Week 8 Tutorial: Letters
// letters.c
//
// You must change this file.
//
// Implements the functions required.
//

#include "letters.h"

int check_letter(char ch) {
    
    // if lower case letter, is a letter
    if (ch >= 'a' && ch <= 'z') {
        // Is lower, return 1
        return 1;
    }

    // if upper, is a letter
    if (ch >= 'A' && ch <= 'Z') {
        // Is upper, return 1
        return 1;
    }

    return 0;

}