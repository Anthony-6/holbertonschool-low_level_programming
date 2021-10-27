#include "main.h"

/**
 * _puts - print caracter chains of main.c
 * Return: no
 * @str: chain of caracter
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar (str[j]);
		j++;
	}
	_putchar ('\n');
}
