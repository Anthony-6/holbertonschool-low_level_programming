#include "search_algos.h"

/**
 * linear_search - search algorithm
 * @array: sorted of integer
 * @size: size of the array
 * @value: value to find in the array
 * Return: the index if found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
