#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers with commas
 * @separator: point to the defined separator
 * @n: passed integer
 * ap: valist
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i != n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
		va_end(ap);
	}
	printf("\n");
}