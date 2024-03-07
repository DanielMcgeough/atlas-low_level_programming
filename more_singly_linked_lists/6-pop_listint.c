#include "lists.h"

/**
 * pop_listint- delete head and take its data
 * @head: linked list of nodes
 * Return: returns an int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
