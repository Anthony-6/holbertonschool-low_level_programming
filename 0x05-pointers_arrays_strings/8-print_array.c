#include "main.h"
#include <stdio.h>

/**
 * print_array - print array from 8-main.c
 * l - value for print everything
 * Return: no
 * @a: pointer array value
 * @n: integers
 */
void print_array(int *a, int n)
{
	int l;

	l = 0;

	while (l < n)
	{
		printf("%d", a[l]);
		l++;
		if (l < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
