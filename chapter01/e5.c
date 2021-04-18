/* C program to find ASCII value of a character entered by the user
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  char my_c;

  printf("Enter a character to get the ASCII value ");
  scanf("%c", &my_c);

  printf("ASCII value of %c is %d\n", my_c, my_c);

  return 0;
}
