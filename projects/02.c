/* Write a program that asks the user to enter two integers, then calculates and displays their greatest
 * common divisor(GCD):
 */

#include <stdio.h>


int main()
{

/* MIA SOLUZIONE BRUTTA


    int a, b, r, mcd;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

     do {
        r = a % b;
        if (b == 0) {
            mcd = a;
            printf("Greatest common divisor: %d\n", mcd);
            break;
        } else if (a % b == 0){
            mcd = b;
            printf("Greatest common divisor: %d\n", mcd);
            break;
        } else {
            a = b;
            b = r;
            continue;
        }
    } while (a > 0);
*/

    // SOLUZIONE DEL LIBRO
  int m, n, remainder;

  printf("Enter two integers: ");
  scanf("%d%d", &m, &n);

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("Greatest common divisor: %d\n", m);





     return 0;
}
