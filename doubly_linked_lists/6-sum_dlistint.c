#include "lists.h"
/**
 * sum_dlistint- get sum of all values in list
 * @head: linked list
 * Return: returns sum as int
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		}

	return (sum);
}
