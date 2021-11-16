#include "lists.h"
/**
 * sum_listint - give the sum of the linked list
 * @head: pointer to the list
 * count: count the list
 * Return: count
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		count += head->n;
		head = head->next;
	}
	count = head->n;
	return (count);
}
