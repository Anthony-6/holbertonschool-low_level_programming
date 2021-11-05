#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string with commas betwin
 * @separator: point to defined commas
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pointer, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		va_end(pointer);
	}
	printf("\n");
}
