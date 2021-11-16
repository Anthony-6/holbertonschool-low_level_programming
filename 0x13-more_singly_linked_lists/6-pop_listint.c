#include "lists.h"
/**
 * pop_listint - main function
 * @head: point to the list
 * delete: point to head
 * res: result of delete
 * Return: result or NULL if it fail
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int res = delete->n;

	if (*head == NULL)
	{
		return (0);
	}
    delete = *head;
	(*head) = (delete)->next;
	free(delete);
	return (res);
}
