#include "lists.h"
/**
 * sum_dlistint - all node and store the result in 'sum'
 * @head: point to the linked list
 * sum_of_node - store the result of all adds node
 * Return: return  if fail or sum_of_node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_of_node = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum_of_node = sum_of_node + head->n;
		head = head->next;
	}
	return (sum_of_node);
}
