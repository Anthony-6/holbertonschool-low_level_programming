#include "main.h"
/**
 * flip_bits - give the number of bit needed to flip from one number to another
 * @n: the number
 * @m: the other number that we need to flip to with n
 * Return: the number of bit needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while (i > 0)
	{
		count += (i & 1);
		i = i >> 1;
	}
	return (count);
}
