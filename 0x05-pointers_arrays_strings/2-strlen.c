#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: no
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
