#include "lists.h"
/**
 * get_dnodeint_at_index - check node then count them
 * @head: point to the linked list
 * @index: the node
 * get_node: get the node out of head
 * counter: count node
 * Return: getnode or null if it fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get_node = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (get_node)
	{
		if (counter == index)
			return (get_node);
		counter++;
		get_node = get_node->next;
	}
	return (0);
}
