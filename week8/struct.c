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

void print_student(struct student a_student);
void change_mark(struct student a_student, int new_mark);

int main(void) {
    
    // Create a stuct student with name "Frankie"
    // with zID = z1234567 & ass1_mark of 76.23
    struct student my_student;

    my_student.zid = 1234567;
    my_student.ass1_mark = 45.2;
    strcpy(my_student.name, "Tom");

    print_student(my_student);

    change_mark(my_student, 82.4);

    print_student(my_student);
}

void print_student(struct student a_student){
    printf("%s with zID z%d has an assignment1 mark of %f\n", a_student.name, a_student.zid, a_student.ass1_mark);
}

void change_mark(struct student a_student, double new_mark) {

    a_student.ass1_mark = new_mark;

    return;

}