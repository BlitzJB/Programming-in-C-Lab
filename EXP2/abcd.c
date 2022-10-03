/* // Get values for a, b, c and d from the user and evaluate the expression
// a*b+c^d

#include <stdio.h>

int a, b, c, d;

int main(void) {
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  printf("Enter c: ");
  scanf("%d", &c);
  printf("Enter d: ");
  scanf("%d", &d);
  printf("Evaluation of expression a*b+c^d: %d", a * b + c ^ d);
  return 0;
} */