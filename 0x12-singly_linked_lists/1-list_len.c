#include "lists.h"
#include <stdio.h>
/**
 * list_len - main function that return number of element of list_t list
 * @h: list value
 * count: incremante the loop
 * Return: count value
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
