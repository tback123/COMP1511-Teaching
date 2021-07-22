// Struct demonstration

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

struct student {
    int age; 
    int zid;
    int assign1;
    char name[MAX_LENGTH];
    struct student *next_student;
};

void print_student(struct student *a_student);
void change_mark(struct student *the_student, int new_mark);
struct student *create_student(int age, int zid, int assign1_mark, char *name);

void print_list(struct student *head);

int main(void) {

    // int toms_age;

    // Creating 3 students
    struct student *student1 = create_student(20, 5256086, 75, "Tom");
    struct student *student2 = create_student(20, 5252521, 98, "Catherine");
    struct student *student3 = create_student(20, 5252521, 52, "Ben");
    
    // Linking the students together
    student1->next_student = student2;
    student2->next_student = student3;

    // Print all students
    print_list(student1);

    // change_mark(student1, 80);


    return 0;
}

void print_list(struct student *head) {

    struct student *curr = head;
    while (curr != NULL) {

        print_student(curr);

        curr = curr->next_student;
    }
    

}


struct student *create_student(int age, int zid, int assign1_mark, char *name) {

    struct student *new_student = malloc(sizeof(struct student));
    new_student->age = age;
    new_student->zid = zid;
    new_student->assign1 = assign1_mark;
    new_student->next_student = NULL;
    //       destination, source
    strcpy(new_student->name, name);

    return new_student;

}


void change_mark(struct student *the_student, int new_mark) {
    the_student->assign1 = new_mark;
}

void print_student(struct student *a_student) {

    printf("###########################\n");
    printf("The name was: %s\n", a_student->name);
    printf("The age was: %d\n", a_student->age);
    printf("The zid was: %d\n", a_student->zid);
    printf("The assign1 was: %d\n", a_student->assign1);
    
}




































// void print_student(struct student a_student){
//     printf("%s with zID z%d has an assignment1 mark of %f\n", a_student.name, a_student.zid, a_student.ass1_mark);
// }
