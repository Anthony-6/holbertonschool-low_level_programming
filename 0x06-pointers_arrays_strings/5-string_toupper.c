#include "main.h"

/**
 * string_toupper - make every character UPPER
 * l: int value
 * @str: value pointed
 * Return: str
 */
char *string_toupper(char *str)
{
	int l;

	while (str[l] != '\0')
		l = 0;
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] = str[l] - 32;
		}
		l++;
	}
	return (str);
}
