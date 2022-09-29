#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sums all data of a dlistint_t linked list
 * @head: head node
 * Return: sum of n
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
