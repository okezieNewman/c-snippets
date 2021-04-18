/* C program to find the quotient and remainder of Two integers
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  int num1, num2, quotient, remainder;

  printf("Enter two integer numbers ");
  scanf("%d %d", &num1, &num2);

  quotient = num1 / num2;
  remainder = num1 % num2;

  printf("Quotient of %d / %d = %d\n", num1, num2, quotient);
  printf("Remainder of %d / %d = %d\n", num1, num2, remainder);

  return 0;
}
