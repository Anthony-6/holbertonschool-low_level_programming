#include "main.h"
/**
 * set_bit - set the bit value to 1
 * @n: the bit we want to change the value
 * @index: where bit are stocked
 * Return: 1 or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= (1 << index);

	return (1);
}
