/* C program to swap two numberss
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  int num1, num2, swap;

  printf("Enter two numbers ");
  scanf("%d %d",&num1, &num2);

  swap = num1;
  num1 = num2;
  num2 = swap;

  printf("%d %d\n", num1, num2);

  return 0;
}
