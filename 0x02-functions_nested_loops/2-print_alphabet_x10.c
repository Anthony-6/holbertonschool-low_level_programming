#include "main.h"

/**
 * print_alphabet - but ten time
 * Return: no
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
