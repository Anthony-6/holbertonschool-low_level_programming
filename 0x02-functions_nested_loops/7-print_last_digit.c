#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of each number
 * @i: value given by the main to take it's last number
 * Return: value of each last digit (i)
 */
int print_last_digit(int i)
{
	i = i % 10;
	i = abs(i);
	_putchar(i + '0');
	return (i);
}
