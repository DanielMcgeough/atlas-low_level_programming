#include "lists.h"

/**
 * sum_listint- adds all of the data form a linked list.
 * @head: pointer to head of list.
 * Return: returns an int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
