#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: pointer to the list
 * memfree: point the the list then free it
 */
void free_listint2(listint_t **head)
{
	listint_t *memfree;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		memfree = *head;
		*head = (*head)->next;
		free(memfree);
	}
	head = NULL;
}
