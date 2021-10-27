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

    struct student *ptr_to_tom = &tom;

    ptr_to_tom->zID = 1234567;
    ptr_to_tom->wam = 51.9;
    strcpy(ptr_to_tom->name, "Tom");

    printf("%d\n", ptr_to_tom->zID);
    printf("%f\n", ptr_to_tom->wam);
    printf("%s\n", ptr_to_tom->name);

    return 0;
}