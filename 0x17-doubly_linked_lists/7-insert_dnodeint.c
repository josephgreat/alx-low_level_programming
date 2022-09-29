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
	if (!new_node)
		return (NULL);

	new_node->n = n;
	while (count < idx - 1)
	{
		if (!current)
			return (NULL);
		current = current->next;
		count++;
	}
	new_node->prev = current;
	new_node->next = current->next;
	new_node->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
