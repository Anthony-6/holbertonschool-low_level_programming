#include "main.h"

/**
 * prime_check - check if a number is a prime number or not
 * is_prime_number - return value of prime check
 * @g: value to check
 * @num: checker
 * Return: prime check
 */
int prime_check(int g, int num)
{
	if (num % g == 0)
	{
		return (0);
	}
	if (g == num / 2)
	{
		return (1);
	}
	if (num < 2)
	{
		return (0);
	}
	if (num == 2)
	{
		return (1);
	}
	return (prime_check(g + 1, num));
}
/**
 * is_prime_number - add the value to check
 * Return: prime checker
 * @n: value that change the value of G
 */
int is_prime_number(int n)
{
	return (prime_check(2, n));
}
