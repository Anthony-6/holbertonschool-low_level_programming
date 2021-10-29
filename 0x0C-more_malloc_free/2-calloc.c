#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _memset - fill memory with constant value
 * @s: pointer
 * @b: char
 * @n: unsigned int
 * Return: to the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
/**
 * _calloc - allocate memory
 * @size: size of byte of the element given
 * @nmemb: number of element given
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = nmemb * size;

	ptr = malloc(m);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, m);
	return (ptr);
}
