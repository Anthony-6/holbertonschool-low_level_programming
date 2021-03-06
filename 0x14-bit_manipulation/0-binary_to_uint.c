#include "main.h"
/**
 * binary_to_uint - convert binary into decimal
 * @b: character chain that contain binary number
 * result: store the result of the convertion
 * len: calcul the lenght of the string then reverse it
 * power: multiplie the number by and 2 and exposant is place in the chain
 * Return: result or 0 if the string is empty
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, power = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		result += (b[len] - '0') * power;
		power *= 2;
		len--;
	}
	return (result);
}


/**
 * _strlen - returns the length of a string
 * @s: pointer to int b
 * Return: The length of the string c
 */

int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
