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
    tom.zID = 1234567;
    tom.wam = 50.2;
    strcpy(tom.name, "Tom");
    
    printf("name: %s\n", tom.name);
    printf("zID: %d\n", tom.zID);
    printf("wam: %lf\n", tom.wam);
    
    struct student *my_ptr = &tom;
    
    my_ptr->zID = 9513578;
    
    printf("zID: %d\n", tom.zID);

    return 0;
}
