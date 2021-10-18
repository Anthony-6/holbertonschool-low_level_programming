#include "main.h"
#include <string.h>

/**
 * _strstr - find substring
 * @haystack: main string
 * @needle: substring
 * Return: _strstr
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
