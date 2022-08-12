#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints the length of the linked list
 * @h: head of list
 * Return: lenght
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
