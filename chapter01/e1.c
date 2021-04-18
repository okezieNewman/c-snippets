/* C program to print an integer entered by the user
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main()
{
  int my_int;

  printf("Enter an Integer >>> ");
  scanf("%d",&my_int);

  printf("You entered %d\n", my_int);
  return 0;
}
