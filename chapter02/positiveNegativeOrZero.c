/* C program to check whether a number is positive or negative or zero
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  printf("Program to check if a number is negative, positive or zero\n");
  printf("\n");

  double number;
  printf("Enter a number ");
  scanf("%lf", &number);

  if(number > 0)
    printf("%.2lf is a positive number\n", number);
  else if(number < 0)
    printf("%.2lf is a negative number\n", number);
  else
    printf("%.2lf is zero\n", number);

  return 0;
}
