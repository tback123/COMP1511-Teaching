// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 101

struct student {
    char name[MAX_LENGTH];
    int zid;
    int assign1;
};

struct student *create_student(int zid, int assign1_mark, char name[MAX_LENGTH]);

void change_mark(struct student *the_student, int new_mark);
void print_student(struct student *a_student);

int main(void) {

    struct student *stu1 = create_student(5256086, 41, "Tom");
    struct student *stu2 = create_student(5125843, 98, "Lucca");

    printf("Before updating mark:");
    print_student(stu1);
    print_student(stu2);

    printf("########\n");

    change_mark(stu1, 82);
    print_student(stu1);
    print_student(stu2);

    return 0;

}

struct student *create_student(int zid, int assign1_mark, char name[MAX_LENGTH]) {

    struct student *new_student = malloc(sizeof(struct student));
    new_student->zid = zid;
    new_student->assign1 = assign1_mark;
    strcpy(new_student->name, name);

    return new_student;
}


void change_mark(struct student *the_student, int new_mark) {
    the_student->assign1 = new_mark;
}

void print_student(struct student *a_student) {

    printf("The student has:\n");
    printf("zID: %d\n", a_student->zid);
    printf("assign1: %d\n", a_student->assign1);
    printf("name: %s\n\n", a_student->name);

}
































