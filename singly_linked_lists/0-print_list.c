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
	int i = 0;
	
	if (h == NULL)
		return (0);

	while (h)
	{
		printf("[%d] ", h->len);
		if (h->str)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
