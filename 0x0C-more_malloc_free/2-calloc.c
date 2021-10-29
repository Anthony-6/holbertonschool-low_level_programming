#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory
 * @size: size of byte of the element given
 * @nmemb: number of element given
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
