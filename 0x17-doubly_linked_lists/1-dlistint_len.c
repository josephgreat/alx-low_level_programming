#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - length of linked list
 * @h: head list
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int listLen = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		listLen++;
	}

	return (listLen);
}
