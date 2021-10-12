#include "main.h"
#include <string.h>

/**
 * puts2 - print base 10
 * Return: no
 * @str: carater chain
 */
void puts2(char *str)
{
	int c, n = strlen(str);

for (c = 0; c < n ; c += 2)
{
	_putchar (str[c]);
}
_putchar ('\n');
}
