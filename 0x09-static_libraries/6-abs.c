#include <inttypes.h>

/**
 * _abs - compute absolute value of an integer
 * @n: value to check
 * Return: return to n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
