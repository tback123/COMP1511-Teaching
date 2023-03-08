#include <stdio.h>

#define PRIMARY 7
#define SECONDARY 12

int main(void) {
  // Init variables
  int grade = -1;

  // Read input
  printf("What year are you in? ");
  scanf("%d", &grade);

  // Check year
  if (grade >= PRIMARY && grade <= SECONDARY){
    printf("You are in high school\n");
  } else if ( grade < PRIMARY || grade > SECONDARY) {
    printf("You are in primary school\n");
  }
  
  return 0;
}