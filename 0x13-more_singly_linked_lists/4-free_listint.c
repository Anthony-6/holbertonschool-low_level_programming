#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer to the list
 * memfree: point the the list then free it
 */
void free_listint(listint_t *head)
{
	listint_t *memfree;

	while (head != NULL)
	{
		memfree = head;
		head = head->next;
		free(memfree);
	}
}
