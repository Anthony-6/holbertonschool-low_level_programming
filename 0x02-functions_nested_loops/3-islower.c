#include <ctype.h>

/**
 * _islower - check if a character is lower than an other one
 *
 * Return: _islower always sucess (0)
 * @c is the value for _islower
 */
int _islower(int (c))

{
	if (islower(c))
	return (1);
	else
		return (0);
}
