#include "lists.h"

/**
 * print_listint- a function that prints the elements of a list
 * @h: the list
 * Return: returns the elements
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		print("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
