#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: pointer to head of list might need another for spaces
 * Return: returns number of nodes in list
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
	h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);

}