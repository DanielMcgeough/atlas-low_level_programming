#include "lists.h"

/**
 * listint_len- function to return number of elements
 * @h: list of elements.
 * Return: returns number
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
