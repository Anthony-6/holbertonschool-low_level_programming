#include "lists.h"
/**
 * add_nodeint_end - main function
 * add_nodeint_end: add a new node at the end of the list
 * @head: point to the list
 * @n: point to the node
 * Return: number of element or null if it fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *lastnode;

		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = newnode;
	}
	return (0);
}
