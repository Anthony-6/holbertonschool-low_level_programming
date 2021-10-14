#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse array
 * @n: integer value
 * @i: integer value
 * @a: integer value
 * Return: no
 */
void reverse_array(int *a, int n)
{
	int h;
	int i;
	
	i = 0;
	while (i < n / 2)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
		i++;
	}
}
