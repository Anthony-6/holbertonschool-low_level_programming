#include "dog.h"
/**
 * init_dog - prototype
 * @d: structur pointer (dog)
 * @name: pointer of type char
 * @age: float type
 * @owner: char pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
