#include "lists.h"
#include <stdio.h>
/**
 * print_list - print node number in a list
 * @h: list value
 * Return: h value
 */
size_t print_list(const list_t *h)
{
	size_t j;

	for (j = 0; h; j++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (j);
}
