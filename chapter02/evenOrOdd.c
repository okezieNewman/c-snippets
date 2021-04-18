/* C program to check whether a number is even or odd
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  int number;

  // Get number from user
  printf("Enter number to check >>> ");
  scanf("%d",&number);

  // Check if number is divisible by 2
  if(number % 2 == 0){
    printf("%d is an even number\n", number);
  }else{
    printf("%d is an odd number\n", number);
  }

  return 0;
}
