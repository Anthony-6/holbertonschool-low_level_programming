#include "lists.h"
/**
 * sum_listint - give the sum of the linked list
 * @head: pointer to the list
 * count: count the list
 * tmp: store all value
 * Return: count
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int count = 0;

	if (!head)
		return (0);
	tmp = head;
	while (tmp)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
