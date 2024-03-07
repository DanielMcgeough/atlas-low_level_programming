#include "lists.h"

/**
 * free_listint- function the frees a list
 * @head: linked list of nodes
 * Return: return is void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
