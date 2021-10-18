#include "main.h"
#include <string.h>

/**
 * _memcpy - copy byte from an area to move it
 * @dest: destination from where the byte gonna be moved
 * @src: from where the byte is copied
 * @n: unsigned byte
 * Return: memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
