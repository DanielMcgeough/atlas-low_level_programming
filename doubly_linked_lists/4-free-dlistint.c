#include "lists.h"
/**
 * free_dlistint - frees a list from mem
 * @head: pointer to list
 * Return: Return is void
*/
void free_dlistint(dlintint_t *head)
{
	dlistint_t *temp;
	
	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp);
		}
}
