/* C program to demonstrate the working of keyword long
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  int my_int;
  long my_long;
  long long my_long_long;

  printf("Size of int = %ld bytes \n", sizeof(my_int));
  printf("Size of long = %ld bytes \n", sizeof(my_long));
  printf("Size of long long = %ld bytes \n", sizeof(my_long_long));

  return 0;
}
