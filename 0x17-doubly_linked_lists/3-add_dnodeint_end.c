#include "lists.h"
/**
 * add_dnodeint_end - main function
 * add_dnodeint_end: add a new node at the end of the list
 * @head: point to the list
 * @n: point to the node
 * Return: number of element or null if it fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (newnode);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}

	if (*head == NULL)
	{
		*head = newnode;
	}

	else
	{
		dlistint_t *lastnode;

		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	return (newnode);
}
