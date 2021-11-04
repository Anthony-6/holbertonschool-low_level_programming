#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string with commas betwin
 * @separator: point to defined commas
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);

	if (separator == NULL)
		return;

	if (n == 0)
		printf("(nil)");

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(pointer, const char*);

		printf("%s", str);
		if (i != n - 1 && pointer != 0)
		{
			printf("%s", separator);
		}
		va_end(pointer);
	}
	printf("\n");
}
