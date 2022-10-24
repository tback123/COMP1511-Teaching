#include <stdio.h>

struct person {
    int num;
    char initial;
    double height;
};

void swap_numbers(struct person *member1, struct person *member2);

int main(void) {

    // Create 2 people
    struct person person1;
    person1.num = 1;
    person1.initial = 't';
    person1.height = 140.1;
    struct person *ptr_1 = &person1;

    struct person person2;
    person2.num = 2;
    person2.initial = 'c';
    person2.height = 165.3;
    struct person *ptr_2 = &person2;

    // Print numbers
    printf("Person1 Number: %d\n", person1.num);
    printf("Person2 Number: %d\n\n", person2.num);

    // Swap Numbers
    swap_numbers(ptr_1, ptr_2);

    // Print numbers again
    printf("Person1 Number: %d\n", person1.num);
    printf("Person2 Number: %d\n", person2.num);

    return 0;
}

// Swaps the numbers of each struct
void swap_numbers(struct person *member1, struct person *member2) {
    int temp_num = member1->num;

    member1->num = member2->num;
    member2->num = temp_num;
}