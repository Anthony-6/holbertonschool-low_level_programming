#include "main.h"

/**
 * puts2 - print base 10
 * Return: no
 * @str: carater chain
 */
void puts2(char *str)
{
	int c = 0;

for (c = 0; str[c] != '\0'; c += 2)
{
	_putchar (c);
}
_putchar ('\n');
}
