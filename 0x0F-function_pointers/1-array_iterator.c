#include "function_pointers.h"
/**
 * array_iterator - itarate an array
 * @array: pointer to array
 * @size: pointer to the size of the array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;

	if (array != 0 && size != 0 && action != 0)
		for (p = 0; p < size; p++)
			action(array[p]);
}
