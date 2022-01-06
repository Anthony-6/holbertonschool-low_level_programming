#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at a given position
 * @h: point to the list
 * @index: position given by the main.c
 * delete_node: point the node to delete
 * counter: iterate the loop and pass through the list
 * Return: -1 if fail or 1 if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node;
	unsigned int counter = 0;
	
	if (head == NULL)
		return (-1);
	delete_node = *head;
	while (counter < index)
	{
		if (delete_node == NULL)
			return (-1);
		delete_node = delete_node->next;
	counter++;
	}
	if (delete_node == *head)
	{
		*head = (*head)->next;
		if (!*head)
			(*head)->prev = NULL;
	}
	else
	{
		delete_node->prev->next = delete_node->next;
		if (!delete_node->next)
			delete_node->next->prev = delete_node->prev;
	}
	free(delete_node);
	return(1);
}
