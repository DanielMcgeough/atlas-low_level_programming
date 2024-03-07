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
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
