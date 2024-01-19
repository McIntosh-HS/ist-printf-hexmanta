#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("How much are your groceries?: ");
  scanf("%f", &subtotal);
  printf("How much is the tax?: %.2f\n");  // change this to ask for tax rate
  scanf("%f", &tax);		           // write a new scanf for tax
  printf("The final total is: %.2f\n", subtotal + subtotal*tax);
  return 0;
}
