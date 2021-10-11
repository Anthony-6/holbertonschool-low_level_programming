#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap value of two int
 * @a: one int
 * @b: second int
 * Return: no
 */
void swap_int(int *a, int *b)
{
	int swapme;

	swapme = *a;
	*a = *b;
	*b = swapme;
}
