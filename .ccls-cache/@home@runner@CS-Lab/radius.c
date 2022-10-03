#include <stdio.h>

/* Declarations */
float radius = 0;
float circumfrence = 0;
float area = 0;

int somethong(void) {

  printf("Enter your Radius: ");
  scanf("%f", &radius);

  circumfrence = 2 * 3.14 * radius;
  area = 3.14 * radius * radius;

  printf("Area: %.2f\n", area);
  printf("Circumfrence: %.2f\n", circumfrence);

  return 0;
}