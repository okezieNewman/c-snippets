/* C program to multiply two floating-point numbers
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  float num1, num2, product;

  printf("Enter two floating point numbers seperated by spaces ");
  scanf("%f %f", &num1, &num2);

  printf("%f * %f = %f\n", num1, num2, (num1 * num2));

  return 0;
}
