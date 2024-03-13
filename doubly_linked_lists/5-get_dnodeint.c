#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 * @head: linked list
 * @index: index of node to return
 * Return: returns the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int a = 0;

    if (head == NULL)
        return (NULL);
    
    while (head->prev != NULL)
        head = head->prev;

    while (head != NULL)
    {
        if (a == index)
			break;
		head = head->next;
		a++;
	}

	return (head);
}