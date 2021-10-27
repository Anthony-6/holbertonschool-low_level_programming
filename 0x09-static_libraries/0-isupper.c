#include <ctype.h>
#include "main.h"

/**
 * _isupper - check character
 * @c: integer value
 * Return: always sucess(0)
 */
int _isupper(int c)

{
	if (isupper(c))
	return (1);
	else
		return (0);
}
