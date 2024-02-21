#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print info about the pupper.
 * @d: pulling in the struct for stuff
 * Return: return is a void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %d\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
