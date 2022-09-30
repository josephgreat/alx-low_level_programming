#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a list index
 * @h: head node
 * @idx: index in list where new node should be placed
 * @n: data of new node
 * Return: if failed return NULL else new node address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node || !h)
		return (NULL);

	new_node->n = n;

	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current)
	{
		if (!current->next)
			return (add_dnodeint_end(h, n));
		else if (count == idx)
		{

			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			new_node->next = current;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
