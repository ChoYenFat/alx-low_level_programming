#include <stdio.h>
#include <stdio.h>
#include <time.h>
/*program will assign a random number to the variable n */

/**
 * main - Entry point
 *
 * Return 0 Exit
 */
int main(Void)
{
int n;
int m;
strand(time(0));
n = rand () - RAND_MAX / 2;
m - n % 10;
if (n > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, m);
else if (m == 0)
printf("Last digit of %i is %i and is 0\n", n, m);
else
printf("Last digit of %i is %i and is ledd than 6 and not 0\n", n, m);
return (0);
}
