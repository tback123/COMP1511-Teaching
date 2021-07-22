// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 101

struct student {
    char name[MAX_LENGTH];
    int zid;
    int assign1;
    struct student *next_stu;
};

struct student *create_student(int zid, int assign1_mark, char name[MAX_LENGTH]);
void print_list(struct student *first_student);
void change_mark(struct student *the_student, int new_mark);
void print_student(struct student *a_student);

int main(void) {

    struct student *stu1 = create_student(5256086, 41, "Tom");
    struct student *stu2 = create_student(5125843, 98, "Lucca");
    struct student *stu3 = create_student(1234567, 100, "Cat");

    stu1->next_stu = stu2;
    stu2->next_stu = stu3;

    print_list(stu1);

    return 0;

}

void print_list(struct student *first_student) {

    struct student *curr_student = first_student;
    while (curr_student != NULL) {

        // Do some code with the current studnet
        print_student(curr_student);

        // Move to the next student
        curr_student = curr_student->next_stu;

    }

}


struct student *create_student(int zid, int assign1_mark, char name[MAX_LENGTH]) {

    struct student *new_student = malloc(sizeof(struct student));
    new_student->zid = zid;
    new_student->assign1 = assign1_mark;
    strcpy(new_student->name, name);
    new_student->next_stu = NULL;

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
































