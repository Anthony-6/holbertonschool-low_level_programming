#include "dog.h"
#include <stdio.h>

/**
 * print_dog - main function and print dog information
 * name: print dog name
 * age: print dog age
 * owner: print dog owner
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %s\n", d->age);
		if (d->owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
