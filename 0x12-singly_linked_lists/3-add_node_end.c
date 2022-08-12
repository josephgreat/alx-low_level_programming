#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: current head node
 * @str: string to be added
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (last == NULL)
		last = new_node;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (last);
}
