#include "lists.h"
/**
 * add_dnodeint - main function
 * add_dnodeint:  add new node to the list
 * @head: pointer
 * @newnode - create a newnode to add
 * @n: main value
 * Return: number of element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
}
