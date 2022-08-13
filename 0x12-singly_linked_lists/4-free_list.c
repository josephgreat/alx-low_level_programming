#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list space
 * @head: first node inthe linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
