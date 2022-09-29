#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints the integers in a linked list
 * @h: head list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int listLen = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		listLen++;
	}
	return (listLen);
}
