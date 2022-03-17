#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct list - linked list
 *  @str: string pointer
 * @len: string lenght
 * @next: pointer to the next node
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *str);
#endif
