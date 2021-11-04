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
	va_list ap;
	int sum;
	unsigned int inc;

	va_start(ap, n);

	if (n == 0)
		return (0);
	
	sum = 0;
	for (inc = 0; inc < n; inc++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
