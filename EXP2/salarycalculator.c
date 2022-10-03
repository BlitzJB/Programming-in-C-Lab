#include <stdio.h>

float BP, DA, HRA, CCA, insurance, PF, gross_pay, deductions, net_pay;

int main(void) {
  printf("Enter BP: ");
  scanf("%f", &BP);
  DA = 0.88*BP;
  HRA = 0.08*BP;
  CCA = 1000;
  insurance = 2000;
  PF = 0.1*BP;
  gross_pay = BP + DA + HRA + CCA;
  deductions = insurance + PF;
  net_pay = gross_pay - deductions;
  printf("Net Pay: %.2f", net_pay);
  return 0;
}