#include "main.h"
#include <string.h>

/**
 * _strchr - start at the first occurence of the char c
 *
 * @s: start string
 * @c: character selected for to serve of first occurence
 * Return: strchr
 */
char *_strchr(char *s, char c)
{
	int i, j = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
}
