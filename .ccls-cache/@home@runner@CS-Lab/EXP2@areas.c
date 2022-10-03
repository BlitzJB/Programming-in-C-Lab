/* #include <math.h>
#include <stdio.h>
#include <string.h>

char shape[];
float val1, val2;
float area;

int main(void) {
  printf("Enter your shape [rectangle, triangle, circle]: ");
  scanf("%s", shape);

  if (strcmp(shape, "rectangle") == 0) {
    printf("Enter width: ");
    scanf("%f", &val1);
    printf("Enter breath: ");
    scanf("%f", &val2);
    printf("Area is %.2f", val1 * val2);
  } else if (strcmp(shape, "triangle") == 0) {
    printf("Enter height: ");
    scanf("%f", &val1);
    printf("Enter base: ");
    scanf("%f", &val2);
    printf("Area is %.2f", 0.5 * val1 * val2);
  } else if (strcmp(shape, "circle") == 0) {
    printf("Enter radius: ");
    scanf("%f", &val1);
    printf("Area is %.2f", 3.14159 * pow(val1, 2));
  } else
    printf("Unidentified Shape");
  return 0;
} */