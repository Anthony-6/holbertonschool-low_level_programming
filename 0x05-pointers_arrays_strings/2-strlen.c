#include "main.h"
#include <stdio.h>

/**
 * _strlen - Return
 *
 *
 */
int _strlen(char *s)
{
	int g;

	for (g = 0; *s != '\0'; s++)
	{
		g++;
	}
	return (g);
}
