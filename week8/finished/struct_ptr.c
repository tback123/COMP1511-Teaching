// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct student {
    char name[MAX_LENGTH];
    int zid;
    double ass1_mark;
    struct student *next_student;
};

void print_student(struct student *a_student);
void change_mark(struct student *the_student, double new_mark);
struct student *create_student(char *name, int zid, double mark);
void print_list(struct student* head);

int main(void) {
    
    // Create a stuct student with name "Tom"
    // with zID = 7654321 & ass1_mark of 48

    struct student *student1 = create_student("Tom", 1234567, 34.6);
    struct student *student2 = create_student("Alvin", 2347862, 34.6);
    struct student *student3 = create_student("Liz", 2347892, 100);

    student1->next_student = student2;
    student2->next_student = student3;

    print_list(student1);

    change_mark(student1, 71.3);

    print_student(student1);

    free(student1);
    free(student2);
    free(student3);

}

void print_student(struct student *a_student){
    printf("%s with zID z%d has an assignment1 mark of %f\n", a_student->name, a_student->zid, a_student->ass1_mark);

}

void change_mark(struct student *the_student, double new_mark) {

    the_student->ass1_mark = new_mark;

}

struct student *create_student(char *name, int zid, double mark) {

    struct student *new_student = malloc(sizeof(struct student));

    new_student->zid = zid;
    new_student->ass1_mark = mark;
    strcpy(new_student->name, name );
    new_student->next_student = NULL;

    return new_student;

}

void print_list(struct student* head) {

    struct student *curr = head;

    while ( curr != NULL ) {
        print_student(curr);
        curr = curr->next_student;
    }

}