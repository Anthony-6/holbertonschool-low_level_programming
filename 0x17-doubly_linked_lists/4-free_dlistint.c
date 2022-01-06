#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: pointer to the list
 * memory_free: point the the list then free it
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *memory_free;

	while (head != NULL)
	{
		memory_free = head;
		head = head->next;
		free(memory_free);
	}
}
