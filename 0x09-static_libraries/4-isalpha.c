#include <ctype.h>

/**
 * _isalpha - check character
 * @c: integer value
 * Return: always sucess(0)
 */
int _isalpha(int c)

{
	if (isalpha(c))
	return (1);
	else
		return (0);
}
