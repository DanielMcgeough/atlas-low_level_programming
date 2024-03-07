#include "lists.h"

/**
 * *add_nodeint- adds a new node at beg of list
 * @**head: list of nodes
 * @*head: don't know why I need this
 * @n: int of number
 * Return: return address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
