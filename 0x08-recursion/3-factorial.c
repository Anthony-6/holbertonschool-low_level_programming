#include "main.h"

/**
 * factorial - give the factorial of a given number
 * @n: number given
 * Return: factorial number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
