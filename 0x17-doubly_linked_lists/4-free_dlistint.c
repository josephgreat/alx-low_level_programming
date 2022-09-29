#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a double linked list from memory
 * @head: head node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		
	}
	return;
}
