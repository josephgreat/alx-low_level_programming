#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: list head node
 * @index: index of node to be deleted
 * Return: 1 if successful else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (current)
	{
		if (count == index)
		{
			if (!current->next)
			{
				current->prev->next = NULL;
				free(current);
				return (1);
			}

			(current->next)->prev = current->prev;
			(current->prev)->next = current->next;
			free(current);
			return (1);
		}

		current = current->next;
		count++;
	}
	return (-1);
}
