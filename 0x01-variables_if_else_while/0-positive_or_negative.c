#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* main - print a random number to N everytime
* Return : Always 0 (Sucess)
*/

/*
* main - print a random number to N everytime and say if it's
* positive, negative or equal to zero
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
return (0);
}
