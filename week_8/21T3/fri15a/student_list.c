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


    struct student *stu1 = create_student(1234567, 79, "Tom");
    stu1->next = create_student(7777777, 95, "Sasha");
    stu1->next->next = create_student(7654321, 64, "Ben");

    struct student *curr = stu1;
    while (curr != NULL) {
        printf("Name: %s Mark: %f\n", curr->name, curr->mark);
        curr = curr->next;
    }

    printf("That's all!\n");

    return 0;
}

struct student *create_student(int zID, double mark, char *name) {

    struct student *student1 = malloc(sizeof(struct student));
    student1->zID = zID;
    student1->mark = mark;
    student1->next = NULL;
    strcpy(student1->name, name);

    return student1;

}