#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog's basic information.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Name of the owner (string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
