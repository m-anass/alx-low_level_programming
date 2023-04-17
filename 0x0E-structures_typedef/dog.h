#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Discription
 * @name: joo
 * @age: jl
 * @owner: oo
 * Return: void
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
