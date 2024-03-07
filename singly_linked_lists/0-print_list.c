#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list- function the prints elements of list
 * @h: pointer to list of elements
 * Return: returns a size
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	if (str == NULL)
	{
		printf("[0] (nil)")
	}
	
	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
