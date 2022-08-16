#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums ths data in the linked list
 * @head: head node
 * Return: sum of the data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
