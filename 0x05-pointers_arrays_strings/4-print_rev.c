#include "main.h"
#include <string.h>

/**
 * print_rev - print a chain caracter but reversed
 * @s: caracter chain
 * Return: no
 */
void print_rev(char *s)
{
	int j;

	j = strlen(s) - 1;

		while (j >= 0)
		{
			_putchar (s[j]);
			j--;
		}
	_putchar ('\n');
}
