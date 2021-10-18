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
	return (memset(s, b, n));
}
