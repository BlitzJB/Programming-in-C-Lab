#include <math.h>
#include <stdio.h>

/* Declarations */
int num1 = 0;
int num2 = 0;
int num3 = 0;

int min1 = 0;
int min2 = 0;

int min_final = 0;

int gingalala(void) {

  printf("Enter your number 1: ");
  scanf("%d", &num1);

  printf("Enter your number 2: ");
  scanf("%d", &num2);

  printf("Enter your number 3: ");
  scanf("%d", &num3);

  min1 = fmin(num1, num2);
  min2 = fmin(num2, num3);
  min_final = fmin(min1, min2);
  printf("Min number: %d", min_final);

  return 0;
}