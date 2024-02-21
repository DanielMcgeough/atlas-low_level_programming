#ifndef DOG_H
#define DOG_H

/**
 * struct dog - talk about the goodest boy/girl.
 * @name: The name of the puppers.
 * @age: The age of the puppers
 * @owner: the owner of the puppers.
 *
 * Description: The info of the puppers.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
