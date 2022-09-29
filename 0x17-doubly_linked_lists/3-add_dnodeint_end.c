#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds new node at the beginning f a list
 * @head: head node
 * @n: new node integer
 * Return: NULL if failed else new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
