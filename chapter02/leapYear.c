/* C program to check whether the entered year is a leap year or not
*
* By Okezie Afoma Newman (OAN)
*/

/* A leap year is a year that is evenly divisible by 4 and
* not evenly divisible by 100
* if the year is evenly divisible by 4 and 100, then it should also be
* divisible by 400 for it to be a valid leap year
*/

#include <stdio.h>

int main(){
  int year;
  printf("This program checks if a year is a leap year or not\n");

  printf("Enter year to check ");
  scanf("%d", &year);

  if(year % 4 == 0 && year % 100 != 0){
    printf("%d is a leap year\n", year);
  }

  else if(year % 4 == 0 && year % 100 == 0){
    if(year % 400 == 0){
      printf("%d is a leap year\n", year);
    }
    else{
      printf("%d is not a leap year\n", year);
    }
  }
  else{
    printf("%d is not a leap year\n", year);
  }

  return 0;
}
