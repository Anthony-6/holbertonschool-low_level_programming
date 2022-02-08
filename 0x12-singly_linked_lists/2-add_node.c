#include "lists.h"

/**
 * add_node - add a node at the begining of the linked list
 * @head: list value
 * @str: string value
 * Return: return the adress of the newNode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(newNode));

	if (head == NULL || str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
	{
		count++;
	}
	return (count);
}
