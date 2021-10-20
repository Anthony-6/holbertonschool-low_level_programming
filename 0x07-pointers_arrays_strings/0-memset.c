#include "main.h"
#include <string.h>

/**
 * _memset - fill memory with constant byte
 * Return: to memset
 * @s: pointer
 * @n: unsigner int
 * @b: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
