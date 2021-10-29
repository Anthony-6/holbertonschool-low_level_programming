#include "main.h"
#include <stdlib.h>

/**
 * array_range - store value of min and max
 * @min: min value
 * @max: max value
 */
int *array_range(int min, int max)
{
	int *ptr, count;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
        count = 0;
        while (min <= max)
		count++;
        ptr[count] = min++;
        return (ptr);
}
