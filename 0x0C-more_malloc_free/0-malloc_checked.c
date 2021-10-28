#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check if a everything is correctryl memory allocated
 * @b: memory byte
 * ptr: pointer that point to the allocated memory
 * Return: no
 */
void *malloc_checked(unsigned int b)
{
	int  *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
