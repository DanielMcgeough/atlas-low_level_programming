#include "lists.h"
/**
 * free_dlistint - frees a list from mem
 * @head: pointer to list
 * Return: Return is void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
