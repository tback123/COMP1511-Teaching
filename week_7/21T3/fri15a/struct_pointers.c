#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 1024

struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LEN];
};

int main(void) {

    struct student tom;

    struct student *tom_ptr = &tom;

    //(*tom_ptr).zID = 1234567;
    tom_ptr->zID = 1234567;

    printf("zid was: %d\n", tom_ptr->zID);

    return 0;
}