#include "lists.h"
/**
 * add_nodeint - main function
 * add_nodeint:  add new node to the list
 * @head: pointer
 * @newnode - create a newnode to add
 * @n: main value
 * Return: number of element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
}
