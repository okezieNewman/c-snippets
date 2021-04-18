/* C program to check whether an alphabet is a vowel or consonant
*
* By Okezie Afoma Newman (OAN)
*/

#include <stdio.h>

int main(){
  char my_char;

  // Get character from user
  printf("Enter an alphabet to check if its a vowel or consonant ");
  scanf("%c",&my_char);

  // Check if character is vowel or consonant
  if ((my_char == 'a') || (my_char == 'e') || (my_char == 'i') || (my_char == 'o') || (my_char == 'u') ){
      printf("%c is a vowel\n", my_char);
    }
  else if((my_char == 'A') || (my_char == 'E') || (my_char == 'I') || (my_char == 'O') || (my_char == 'U') ){
      printf("%c is a vowel\n", my_char);
    }
  else
    printf("%c is a consonant\n", my_char);

  return 0;
}
