#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - gets the node at a list index
 * @head: head node
 * @index: index of node in search of
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (!current)
			return (NULL);
		current = current->next;
		count++;
	}
	return (current);
}
