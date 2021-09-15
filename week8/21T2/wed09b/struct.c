// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct student {
    int age; 
    int zid;
    int assign1;
    char *name;
};

void print_student(struct student a_student);
void change_mark(struct student the_student, int new_mark);

int main(void) {

    // int toms_age;

    struct student student1;

    student1.age = 20;
    student1.zid = 5256086;
    student1.assign1 = 0;
    student1.name = "Tom";
    
    printf("Before new mark:\n");
    // print_student(student1);

    change_mark(student1, 80);

    printf("After new mark:\n");
    print_student(student1);

    return 0;
}

void change_mark(struct student the_student, int new_mark) {
    the_student.assign1 = new_mark;
}


void print_student(struct student a_student) {

    printf("###########################\n");
    printf("The name was: %s\n", a_student.name);
    printf("The age was: %d\n", a_student.age);
    printf("The zid was: %d\n", a_student.zid);
    printf("The assign1 was: %d\n", a_student.assign1);
    
}


































// void print_student(struct student a_student){
//     printf("%s with zID z%d has an assignment1 mark of %f\n", a_student.name, a_student.zid, a_student.ass1_mark);
// }
