#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints the length of a linked list
 * @h: head node of liked list
 * Return: length of liked list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int len;

	if (h == NULL)
	{
		len = 0;
		return (len);
	}

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
