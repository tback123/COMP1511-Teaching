// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct student {
    char name[MAX_LENGTH];
    int zid;
    double ass1_mark;
};

void print_student(struct student *a_student);
void change_mark(struct student *the_student, double new_mark);
void print_list(struct student* head);

int main(void) {
    

}

void print_student(struct student *a_student){
    printf("%s with zID z%d has an assignment1 mark of %f\n", a_student->name, a_student->zid, a_student->ass1_mark);

}

void change_mark(struct student the_student, double new_mark) {

    the_student.ass1_mark = new_mark;

}
