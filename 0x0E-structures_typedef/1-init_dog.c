#include "dog.h"
/**
 * init_dog - nslls
 * @d: struct
 * @name: name
 * @age: dff
 * @owner: dfn
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
