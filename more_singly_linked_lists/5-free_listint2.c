#include "lists.h"

/**
 *free_listint2- a differente function that frees a list
 *@head: linked list of nodes
 *Return: returns a void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
