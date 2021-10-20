#include "main.h"
#include <string.h>

/**
 * _strstr - find substring
 * @haystack: main string
 * @needle: substring
 * Return: _strstr
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack; haystack++)
	{
		for (i = 0; needle[i] == haystack[i]; i++)
		{
			if (needle[i + 1] == '\0')
				return (haystack);
		}
	}
	return ('\0');
}
