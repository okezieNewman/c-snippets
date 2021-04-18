/* C program to find all roots of a quadratic equation
*
* By Okezie Afoma Newman (OAN)
*/

/* Please find the file rootsOfQuadratic.txt to get the formula used */

#include <stdio.h>
#include <math.h>     // for sqrt function

int main(){
  double a, b, c;
  double root1, root2, discriminant;

  // Get value for a, b, c
  printf("Enter values for a, b and c ");
  scanf("%lf %lf %lf", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

  // Roots if discriminant is greater than zero
  if(discriminant > 0){
    root1 = (-b + sqrt(discriminant) / (2 * a));
    root2 = (-b - sqrt(discriminant) / (2 * a));
    printf("discriminant greater than zero\n");
    printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
  }

  // Roots if discriminant is equal to zero
  else if(discriminant == 0){
    root1 = root2 = -b / (2 * a);
    printf("discriminant equal to zero\n");
    printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
  }

  // Roots if discriminant is less than zero
  else{
    root1 = (-b / 2 * a + (-discriminant / (2 * a)));
    root2 = (-b / 2 * a - (-discriminant / (2 * a)));
    printf("discriminant less than zero\n");
    printf("root1 = %.2lf and root2 = %.2lf\n", root1, root2);
  }

  return 0;
}
