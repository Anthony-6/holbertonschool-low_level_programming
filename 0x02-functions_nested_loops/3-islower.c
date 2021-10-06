#include <ctype.h>

/**
 * _islower - work fine
 *
 * Return: _islower always sucess (0)
 *
 * @c: integer values
 *
 */
int _islower(int (c))

{
	if (islower(c))
	return (1);
	else
		return (0);
}
