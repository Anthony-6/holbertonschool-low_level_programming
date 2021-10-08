#include "main.h"

/**
 * print_line - print number of line given by 6-main.c
 * Return: no
 * @n: value of int
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}

}
