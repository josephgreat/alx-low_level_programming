#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - clears memory by removing list and set @head to null
 * @head: list head node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
