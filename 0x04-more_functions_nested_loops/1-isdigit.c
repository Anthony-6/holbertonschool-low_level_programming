#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check the value
 * @c: integer value
 * Return: always sucess(0)
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	return (1);
	else
		return (0);
}
