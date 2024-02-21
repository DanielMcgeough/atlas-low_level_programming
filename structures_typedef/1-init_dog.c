#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog- some information dispensed
 * @d: name of pupper struct
 * @name: name of pupper
 * @age: age of pupper
 * @owner: owner of pupper
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
