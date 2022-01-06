#include "lists.h"
/**
 * print_dlistint - print list from main.c
 * @h: pointer
 * i: integer
 * Return: i
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
		}
		else
		{
			printf("%d\n", h->n);
		}
		i++;
		h = h->next;
	}
	return (i);
}
