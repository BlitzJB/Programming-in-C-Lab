#include <stdio.h>

/* Declarations */
char name[];
int rollnumber;
int mark1;
int mark2;
int mark3;

int total = 0;
float avg = 0;

int something(void) {

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Enter your rollnumber: ");
  scanf("%d", &rollnumber);
  printf("Enter your marks1: ");
  scanf("%d", &mark1);
  printf("Enter your marks2: ");
  scanf("%d", &mark2);
  printf("Enter your marks3: ");
  scanf("%d", &mark3);

  total = mark1 + mark2 + mark3;
  avg = total / 3;

  printf("Student Name %s\n", name);
  printf("Rollnumber: %d\n\n", rollnumber);
  printf("Result in test 1: %d\n", mark1);
  printf("Result in test 2: %d\n", mark2);
  printf("Result in test 3: %d\n", mark3);
  printf("Total Marks: %d\n", total);
  printf("Avg Marks: %.2f\n", avg);

  return 0;
}