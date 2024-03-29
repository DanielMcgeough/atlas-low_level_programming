#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets length of a string
 * @s: pointer to string
 * Return: returns and int of length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strcpy - I dont want to copy a string
 * @dest: destination
 * @src: source
 * Return: returns copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - making a new entry for the diff pupper
 * @name: name of pupper
 * @age: age of pupper
 * @owner: name of owner
 * Return: returns new pupper info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mooshu_dog;
	int namey = 0, ownery = 0;

	if (name != NULL && owner != NULL)
	{
		namey = _strlen(name) + 1;
		ownery = _strlen(owner) + 1;
		mooshu_dog = malloc(sizeof(dog_t));

		if (mooshu_dog == NULL)
			return (NULL);

		mooshu_dog->name = malloc(sizeof(char) * namey);

		if (mooshu_dog->name == NULL)
		{
			free(mooshu_dog);
			return (NULL);
		}

		mooshu_dog->owner = malloc(sizeof(char) * ownery);

		if (mooshu_dog->owner == NULL)
		{
			free(mooshu_dog->name);
			free(mooshu_dog);
			return (NULL);
		}

		mooshu_dog->name = _strcpy(mooshu_dog->name, name);
		mooshu_dog->owner = _strcpy(mooshu_dog->owner, owner);
		mooshu_dog->age = age;
	}
	return (mooshu_dog);
}
