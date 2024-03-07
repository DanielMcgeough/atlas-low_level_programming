#include "lists.h"

/**
 * *add_node- adds new node at beg of list
 * @head: array of names
 * @str: new node to add
 * Return: return address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i = 0;

	while (str(i))
		i++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->i = i;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
