#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print number from 0 to 14
 * Return: no
 */
void more_numbers(void)
{
	int c;
	int n = 0;
	char str[25] = "01234567891011121314";

	while (n < 10)
	{
		for (c = 0; (str[c]) != '\0'; c++)
		{
			_putchar (str[c]);
		}
		_putchar ('\n');
		n++;
	}
}
