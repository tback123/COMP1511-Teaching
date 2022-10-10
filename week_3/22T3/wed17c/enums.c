// structs.c
// A program written by Tom's class

#include <stdio.h>

enum opal_card {
    ADULT,          // 0
    STUDENT,        // 1
    CONCESSION      // 2
};

int main(void) {

    enum opal_card card_type = ADULT;

    printf("Card type: %d\n", card_type);

    return 0;
}
