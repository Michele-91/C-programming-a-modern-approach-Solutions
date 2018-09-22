/* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:
 */

#include <stdio.h>


int main()
{

  int m, n, remainder, num, denom;

  printf("Enter a fraction: ");
  scanf("%d/%d", &m, &n);

  while (n != 0) {
    num = n; denom = m;
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest terms: %d/%d\n", num / m, denom / m);





     return 0;
}
