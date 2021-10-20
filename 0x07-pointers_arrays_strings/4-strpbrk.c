#include "main.h"
#include <string.h>

/**
 * _strpbrk -  find the first occurence of a string
 * @s: source string
 * @accept: string
 * Return: strpbrk
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
