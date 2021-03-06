#include "main.h"
/**
 * sqrt_check - check for the square root of an integer
 * @g: guess the sqrt
 * @c: number to find sqrt of
 * Return: sqrt of c
 */
int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - returns the natural square of a root number
 * @n: value to find sqrt of
 * Return: square of root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
