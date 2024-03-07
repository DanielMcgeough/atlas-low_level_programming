#include "lists.h"

/**
 * list_len- a function that tells you the number of elements
 * @h: number of elements
 * Return: returns size
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
