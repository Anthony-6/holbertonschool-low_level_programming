#include "main.h"

/**
 * print_line - print number of line given by 6-main.c
 * Return: no
 */
void print_line(int n)

{
	int m;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
		for (m = 0;(m = n); m++);
	{
		_putchar ('_');
	}
}
