#include "dog.h"
#include <strlib.h>
#include <stdio.h>

/**
 * free_dog - free the dogs
 * @d: pointer to some pupper info
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
