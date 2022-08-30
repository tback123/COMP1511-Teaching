#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 1024

struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LEN];
};

int main(void) {

    struct student person_1;
    person_1.zID = 1234567;
    person_1.wam = 50.1;
    // (dest, src)
    strcpy(person_1.name, "Tom");
    
    printf("%d\n", person_1.zID);
    printf("%lf\n", person_1.wam);
    printf("%s\n", person_1.name);
    

    
    struct student *my_ptr = &person_1;

        // NO LONGER HAVE ACCESS TO person_1 //
    
    my_ptr->wam = 91.2;
    
    printf("%lf\n", my_ptr->wam);


    return 0;
}
