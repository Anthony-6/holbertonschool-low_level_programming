#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *newnode;
	dlistint_t *temp;

	if (h == NULL)
	{
		return(NULL);
	}
	if (idx == 0)
	{
		return(add_dnodeint(h, n));
	}
	if (*h == 0)
	{
		return(add_dnodeint(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return(NULL);
	}
	temp = *h;
	while (counter < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return(NULL);
		}
	}
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
	return(newnode);
}
