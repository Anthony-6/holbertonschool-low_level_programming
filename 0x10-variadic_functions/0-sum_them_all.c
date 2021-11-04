#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of integers passed to the function
 * sum: sum of parameters
 * inc: increment the loop
 * Return: sum of parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ap;
	unsigned int inc;

	va_start(ap, n);
	for (inc = 0; inc < n; inc++)
		sum += va_arg(ap, int);

	if (n == 0)
		return (0);

	va_end(ap);
	return (sum);
}
