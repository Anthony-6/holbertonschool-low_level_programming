#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_listint - print list from main.c
 * @h: pointer
 * i: integer
 * Return: i
 */
size_t print_listint(const listint_t *h)
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
