#include "function_pointers.h"
/**
 * int_index - return the index of the first element
 * @cmp: pointer to compare values
 * @size: number of element of the array
 * @array: array
 * Return: value of K
 * k: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == 0 || size == 0 || cmp == 0)
		return (-1);

	if (size <= 0)
		return (-1);

	for (k = 0; k < size; k++)
	{
		cmp(array[k]);
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
