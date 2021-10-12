#include "main.h"
#include <string.h>

/**
 * puts_half - print the half part of a text
 * @str: caracter chain
 * i - value
 * Return: no
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
		for (i = len / 2 ; i < len ; i++)
		{
			_putchar (str[i]);
		}
	else
		for (i = len / 2 + 1 ; i < len ; i++)
		{
			_putchar (str[i]);
		}
}
