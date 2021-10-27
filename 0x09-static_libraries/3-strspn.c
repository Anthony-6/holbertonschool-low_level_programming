#include "main.h"
#include <string.h>

/**
 * _strspn - compare two string
 *
 * @s: string
 * @accept: compare I think
 * Return: strspn
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	int c = 0;
	int t = 0;

	while (s[c] != '\0')
	{
		int v = 0;
		t = 0;
		while (accept[v] != '\0')
		{
			if (s[c] == accept[v])
			{
				sum = sum + 1;
				t = 1;
				break;
			}
			v++;
		}
		c++;
		if (t == 0)
			return (sum);
	}
	return (sum);
}
