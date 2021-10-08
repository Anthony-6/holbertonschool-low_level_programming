#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal
 * @n: value given by main.c
 * Return: no
 */
void print_diagonal(int n)
{
	int k, h;
h = 1;

if (n <= 0)
	_putchar ('\n');
else
{
	while (h <= n)
	{
		if (h > 1)
			for (k = 0; k < h -1; k++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
		h++;
	}
}
}
