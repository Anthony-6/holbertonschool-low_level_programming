#include <stdio.h>

/**
 * main - print number from 0 to 9 on base 10
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
    putchar(n);
}
putchar('\n');
return (0);
}
