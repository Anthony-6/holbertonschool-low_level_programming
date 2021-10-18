#include "main.h"
#include <string.h>

/**
 * print_chessboard - print a chessboard
 * @a: main board
 * c: column
 * l: lign
 * Return: no
 */
void print_chessboard(char (*a)[8])
{
	int c = 0;
	int l;

	while (c != 8)
	{
		l = 0;
		while (l != 8)
		{
			_putchar (a[c][l]);
			l++;
		}
		c++;
		_putchar ('\n');
	}
}
