#include <ctype.h>

/**
 * _islower - check character
 * @c: integer value
 * Return: always sucess(0)
 */
int _islower(int c)

{
	if (islower(c))
	return (1);
	else
		return (0);
}
