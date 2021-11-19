#include "main.h"
/**
 * print_binary - main function
 * @n: decimal to convert into binary
 * _putchar - print the result
 * Return: no
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar ((n & 1) + 48);
}
