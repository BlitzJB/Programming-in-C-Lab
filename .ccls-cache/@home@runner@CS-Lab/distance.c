#include <math.h>
#include <stdio.h>

/* Declarations */
int x1, x2, yone, y2;
float distance;

int wow(void) {

  printf("Enter x1: ");
  scanf("%d", &x1);

  printf("Enter x2: ");
  scanf("%d", &x2);

  printf("Enter y1: ");
  scanf("%d", &yone);

  printf("Enter y2: ");
  scanf("%d", &y2);

  distance = pow(pow(x1 - x2, 2) + pow(yone - y2, 2), 0.5);

  printf("Distance: %.2f\n", distance);

  return 0;
}