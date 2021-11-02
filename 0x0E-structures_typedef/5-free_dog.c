#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - clear memory of name, owner and age
 * @d: pointer
 */
void free_dog(dog_t *d)
{
if (d != 0)
{
	free(d->name);
	free(d);
	free(d->owner);
}
}
