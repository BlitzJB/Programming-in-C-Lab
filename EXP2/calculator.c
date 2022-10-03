/* #include <stdio.h>
#include <string.h>

char choice[];
float num1;
float num2;

int main() {

  printf("What operation would you like to execute? [add, sub, multiply, "
         "divide]: ");
  scanf("%s", &choice);

  printf("Enter num1: ");
  scanf("%f", &num1);
  printf("Enter num2: ");
  scanf("%f", &num2);

  // using if clause as Switch in C doesnt support strings
  if (strcmp(choice, "add") == 0) {
    printf("Sum: %.2f", num1 + num2);
  } else if (strcmp(choice, "sub") == 0) {
    printf("Result: %.2f", num1 - num2);
  } else if (strcmp(choice, "multiply") == 0) {
    printf("Product: %.2f", num1 * num2);
  } else if (strcmp(choice, "divide") == 0) {
    printf("Quotient: %.2f", num1 / num2);
  } else
    printf("Operation Not Identified");

  return 0;
}
 */