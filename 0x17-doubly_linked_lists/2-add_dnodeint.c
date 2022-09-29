#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds new node at the beginning f a list
 * @head: head node
 * @n: new node integer
 * Return: NULL if failed else new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
