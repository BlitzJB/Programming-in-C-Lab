/* #include <math.h>
#include <stdio.h>

int number1 = 0;
int number2 = 0;
int temp = 0;

int main(void) {

  printf("Enter your number 1: ");
  scanf("%d", &number1);

  printf("Enter your number 2: ");
  scanf("%d", &number2);

  temp = number2;
  number2 = number1;
  number1 = temp;

  printf("By Using Third Variable\n");
  printf("Num1: %d, Num2: %d\n", number1, number2);

  // number1, number2 = number2, number1 --> is what i thought, but looks like C
  // is stuck in old times

  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;

  printf("Without Using Third Variable (Swapping back)\n");
  printf("Num1: %d, Num2: %d\n", number1, number2);

  return 0;
} */