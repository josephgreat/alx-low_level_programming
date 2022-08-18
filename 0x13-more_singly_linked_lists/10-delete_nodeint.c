#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a particular index
 * @head: head node
 * @index: index of nod3 to be deleted
 * Return: 1 if successful, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int idx;
	listint_t *rm;	
	if (*head == NULL)
		return (-1);

	idx = -1;

	while (idx < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		idx++;
	}
	rm = tmp->next;
	tmp->next = rm->next;
	free(rm);
	return (1);
}
