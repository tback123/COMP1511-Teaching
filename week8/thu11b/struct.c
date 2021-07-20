// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void print_student(struct student a_student);
void change_mark(struct student the_student, double new_mark);

int main(void) {
    

}


































void print_student(struct student a_student){
    printf("%s with zID z%d has an assignment1 mark of %f\n", a_student.name, a_student.zid, a_student.ass1_mark);
}
