#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * listint_len - return number of element
 * @h: pointer
 * count: count the element
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
