#include "lists.h"

/**
 * *add_node_end- adds new node to end of list
 * @head: list of names
 * @str: new node
 * Return: address of new node or Null
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNode, *temp;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
