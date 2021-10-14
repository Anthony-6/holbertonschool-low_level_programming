#include "main.h"

/**
 * string_toupper - make every character UPPER
 * @l: integer value
 * @str: value pointed
 * Return: str
 */
char *string_toupper(char *str)
{
	int l;

	l = 0;
	while ( str[l] != '\0')
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] = str[l] - 32;
		}
		l++;
	}
	return (str);
}
