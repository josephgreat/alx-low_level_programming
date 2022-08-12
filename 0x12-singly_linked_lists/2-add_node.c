#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the beginnig of the linked list
 * @head: current head node
 * @str: string to be added
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;

	return ((*head));
}
