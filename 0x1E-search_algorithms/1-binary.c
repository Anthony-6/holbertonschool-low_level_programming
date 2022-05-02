#include "search_algos.h"

/**
 * binary_search - search algorithm
 * @array: array of sorted integer
 * @size: size of the array
 * @value: value to find in the array
 * Return: the index if found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int lower_side = 0;
	unsigned long int higher_side = size - 1;
	unsigned long int i;


	while (lower_side <= higher_side)
	{
		int mid_array = (lower_side + higher_side) / 2;

		printf("Searching in array: ");
		for (i = lower_side; i <= higher_side - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[higher_side]);
		printf("\n");
		if (value == array[mid_array])
		{
			return (mid_array);
		}
		else if (value < array[mid_array])
			higher_side = mid_array - 1;
		else
			lower_side = mid_array + 1;

	}
	return (-1);
}
