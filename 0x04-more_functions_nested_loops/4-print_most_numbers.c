#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print all numbers, but not 2 and 4
 *
 * Return: no
 */
void print_most_numbers(void)
{
	int o;
for (o = 0; o <= 9; o++)
	if (o != 2 && o != 4)
	{
		_putchar(o + '0');
	}
_putchar('\n');
}
