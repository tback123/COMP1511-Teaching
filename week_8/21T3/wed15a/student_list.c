// An example linked list program
// Written by Tom's COMP1511 class

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define MAX_NAME_LENGTH 1024

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next;
};

struct student *create_student(int zID, double mark, char *name);



int main(void) {

    struct student *stu1 = create_student(1234567, 99.95, "Sasha");
    struct student *stu2 = create_student(7777777, 51.1, "Tom");


    stu1->next = stu2;

    printf("Stu2 zid is: %d\n", stu1->next->zID);

    stu1->next->next = create_student(5555123, 82.1, "Alan");

    return 0;
}

















struct student *create_student(int zID, double mark, char *name) {
    
    // Create the space for the studnet
    struct student *new_student = malloc(sizeof(struct student));

    // Fill the struct with some information
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    new_student->next = NULL;

    // Return where that studnet is stored
    return new_student;

}