#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int next;
} list_t;
size_t print_list(const list_t *h);
#endif
