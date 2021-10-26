#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concate two string
 * @s1: string one
 * @s2: string two
 * Return: s3 when sucess, null when not
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s3;

	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}

	if (s2 != NULL)
{
	while (s2[k])
		k++;
}

	l = k + i + 1;
	s3 = (char *)malloc(sizeof(char) * l);
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	k = 0;
	while (s2 && s2[k] != '\0')
	{
		s3[j] = s2[k];
		k++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
