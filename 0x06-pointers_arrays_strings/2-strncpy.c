#include "main.h"
#include <string.h>

/**
 * _strncpy - pointer that copy a string
 * @dest: pointer destination
 * @src: source pointer
 * @n: integer value
 * Return: strncpy
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (strncpy(dest, src, n));
}
