#ifndef DEF_DOG
#define DEF_DOG
/**
 * struct dog - define structure for dog.h
 * @name: pointer of char type
 * @age: float
 * @owner: pointer of char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
