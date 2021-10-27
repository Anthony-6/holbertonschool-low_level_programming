#include "main.h"
#include <string.h>

/**
 * _strcat - pointer for the string to print
 * @dest:  destination pointer
 * @src: pointer
 * Return: strcat
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
