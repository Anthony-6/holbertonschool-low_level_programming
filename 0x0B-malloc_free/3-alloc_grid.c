#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for the grid
 * ar: array of pointer
 * @width: width of the grid
 * @height: height of the grid
 * Return: ar if sucess, null if not
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i--]);
			}
			free(ar);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			ar[i][k] = 0;
		}
	}
	return (ar);
}
