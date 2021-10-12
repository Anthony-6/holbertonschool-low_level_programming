#include "main.h"
#include <string.h>

/**
 * rev_string - string but reversed
 * Return: no
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int i, len = strlen(s);
	char ch;

	for (i = 0 ; i < len / 2; i++)
	ch = s[i];

	s[i] = s[len - i - 1];
	s[len - i - 1] = ch;
}
