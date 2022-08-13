#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list space
 * @head - first node inthe linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			tmp = head;
			free(head);
		}
		free(tmp);
	}
}
