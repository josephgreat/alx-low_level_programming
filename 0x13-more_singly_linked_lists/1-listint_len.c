#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - prints the length of a linked list
 * @h: head node of liked list
 * Return: length of liked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len;

	len = 0;
	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
