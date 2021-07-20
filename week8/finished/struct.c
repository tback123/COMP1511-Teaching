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
void change_mark(struct student the_student, double new_mark);

int main(void) {
    
    // Create a stuct student with name "Frankie"
    // with zID = z1234567 & ass1_mark of 76.23
    struct student      student1;

    student1.zid = 1234567;
    student1.ass1_mark = 46.2;
    strcpy(student1.name, "Tom");

    // Print the student
    print_student(student1);
    

    // Change the mark
    change_mark(student1, 99.81);

    // Print it again
    print_student(student1);

}

void print_student(struct student a_student){
    printf("%s with zID z%d has an assignment1 mark of %f\n", a_student.name, a_student.zid, a_student.ass1_mark);
}

void change_mark(struct student the_student, double new_mark) {

    the_student.ass1_mark = new_mark;

}
