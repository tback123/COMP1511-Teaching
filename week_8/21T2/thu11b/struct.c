// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct student {
    char name[MAX_LENGTH];
    int zid;
    int assign1;
};

void change_mark(struct student the_student, int new_mark);
void print_student(struct student a_student);

int main(void) {

    struct student student1;
    student1.zid = 5256086;
    student1.assign1 = 41;
    strcpy(student1.name, "Tom");

    printf("Before updating mark:");
    print_student(student1);

    change_mark(student1, 82);
    print_student(student1);

}

void change_mark(struct student the_student, int new_mark) {
    the_student.assign1 = new_mark;
}

void print_student(struct student a_student) {

    printf("The student has:\n");
    printf("zID: %d\n", a_student.zid);
    printf("assign1: %d\n", a_student.assign1);
    printf("name: %s\n\n", a_student.name);

}
































