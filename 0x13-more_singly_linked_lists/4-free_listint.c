#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - clears memory by removing list
 * @head: list head node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
