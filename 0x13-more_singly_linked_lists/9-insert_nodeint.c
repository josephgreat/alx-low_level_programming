#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a specific index
 * @head: head node
 * @idx: index in list where node should be inserted
 * @n: value of node
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	listint_t *idxnode = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	i = 0;
	while (i != idx)
	{
		if (idxnode == NULL)
			return (NULL);	
		idxnode = (idxnode)->next;
		i++;
	}
	new_node->next = idxnode;
	idxnode = new_node;
	return (idxnode);
}
