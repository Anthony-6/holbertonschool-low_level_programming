#include "lists.h"
#include <stdio.h>
/**
 * print_list - print node number in a list
 * @h: list value
 * Return: h value
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	h++;
	return (j);
}
