#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero", n);
else if (n < 0)
printf("%d is negative", n);
  /* your code goes there */
return (0);
}
