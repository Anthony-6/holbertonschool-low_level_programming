#include "lists.h"
/**
 * dlistint_len - return number of element
 * @h: pointer
 * count: count the element
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
