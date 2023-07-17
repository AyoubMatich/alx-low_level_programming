#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: felse or true validation
 * Return: 0 (success)
*/

int main() {
   int n;
   srand(time(NULL));
   n = rand() - RAND_MAX / 2;

   if (n > 0) {
      printf("%i is positive\n", n);
   } else if (n < 0) {
      printf("%i is negative\n", n);
   } else {
      printf("%i is zero\n", n);
   }

   return 0;
}
