#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate a array
 * @str: string to duplicate
 * Return: duplicate if it's work, return NULL if not
 */
char *_strdup(char *str)

{
	int i = 0;
	int j = 0;
	char *scd;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	scd = malloc(sizeof(char) * (i + 1));
	if (scd == NULL)
	{
		return (NULL);
	}
	while ((scd[j] = str[j]) != '\0')
	{
		j++;
	}
	return (scd);
}
