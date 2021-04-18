/* C program to add two integers entered by the user
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  int firstNumber, secondNumber, total;

  // Collect numbers from users and store them
  printf("Enter first number ");
  scanf("%d", &firstNumber);

  printf("Enter second number ");
  scanf("%d", &secondNumber);

  // Calculate sum of two numbers and output the result
  total = firstNumber + secondNumber;
  printf("%d + %d = %d\n", firstNumber, secondNumber, total);

  return 0;
}
