#include "lists.h"

/**
 * *get_nodeint_at_index- return a certain node at a certain position
 * @head: linked list of nodes
 * @index: selects node to pull data from
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
