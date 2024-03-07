#include "lists.h"

/**
 * free_list- frees a list
 * @head: list
 * Return: return is void
 */
void free_list(list_t *head)
{
	list_t *whatsasm;

	while (head != NULL)
	{
		whatsasm = head;
		head = head->next;
		free(whatsasm->str);
		free(whatsasm);
	}
}
