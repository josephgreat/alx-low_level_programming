#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: head node
 * @index: node index to return
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (i < index)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
		i++;
	}

	return (node);
}
