// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct student {
    char name[MAX_LENGTH];
    int zid;
    double ass1_mark;
    struct student *next;
};

void print_student(struct student *a_student);
void change_mark(struct student *the_student, double new_mark);

struct student *create_student(char name[], int zid, double ass1_mark);

int main(void) {
    
    // Create a stuct student with name "Tom"
    // with zID = 7654321 & ass1_mark of 48

    struct student *student1 = create_student("Tom", 1234567, 92.9);
    struct student *student2 = create_student("Liz", 9812342, 100);
    struct student *student3 = create_student("Ben", 1234567, 99.9);

    student1->next = student2;
    student2->next = student3;


    struct student *head = student1;
    struct student *curr = head;
    
    while (curr != NULL) {
        print_student(curr);
        curr = curr->next;
    }


}

void print_student(struct student *a_student){
    printf("%s with zID z%d has an assignment1 mark of %f\n", a_student->name, a_student->zid, a_student->ass1_mark);

}
void change_mark(struct student *the_student, double new_mark) {

    the_student->ass1_mark = new_mark;

}

struct student *create_student(char name[], int zid, double ass1_mark) {

    struct student *new_student = malloc(sizeof(struct student));
    new_student->ass1_mark = ass1_mark;
    new_student->zid = zid;
    strcpy(new_student->name, name);
    new_student->next = NULL;

    return new_student;

}
