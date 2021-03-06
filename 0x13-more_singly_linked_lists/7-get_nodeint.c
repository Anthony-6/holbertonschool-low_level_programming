#include "lists.h"
/**
 * get_nodeint_at_index - check node then count them
 * @head: point to the linked list
 * @index: the node
 * getnode: get the node out of head
 * count: count node
 * Return: getnode or null if it fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *getnode = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (getnode)
	{
		if (count == index)
			return (getnode);
		count++;
		getnode = getnode->next;
	}
	return (0);
}
