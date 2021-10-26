#include "main.h"
#include <stdlib.h>

/**
 * create_array - create a string
 * ar: pointer
 * n: unsigned int
 * @c: char
 * @size: unsigned int
 * Return: return 0 if null and 1 if true
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		return (0);
	}
	for (n = 0; n < size; n++)
	{
		ar[n] = c;
	}
	return (ar);
}
