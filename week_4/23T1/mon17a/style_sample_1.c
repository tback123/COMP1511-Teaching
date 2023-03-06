// Program written by M17A
// Written on 6/3/23

#include <stdio.h>

#define PRIMARY 7
#define SECONDARY 12

void my_print();

int main(void) {
  int input = 20;

  // Read an input
  printf("What year are you in? ");
  scanf("%d", &input);

  // Calculate year
  if (input >= PRIMARY && input <= SECONDARY) {
      printf("You are in high school\n");
  } else {
    printf("You are not in high school\n");
  }

  my_print();

  return 0;
}