#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten time
 *
 * Return :0
 */
void print_alphabet_x10(void)
{
	char h;
	int n = 0;

	while (n < 10)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar (h);
		}
		_putchar ('\n');
		n++;
	}
}
