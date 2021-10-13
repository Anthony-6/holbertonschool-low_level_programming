#include "main.h"
#include <string.h>

/**
 * _strncat - pointer that print hello wworld
 * @dest: pointer destination
 * @src: source pointer
 * @n: copy byte
 * Return: strncat
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (strncat(dest, src, n));
}
