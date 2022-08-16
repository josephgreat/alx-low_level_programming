#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node of the list and returns it's value
 * @head: head node
 * Return: poped node's value
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);

	tmp = (*head)->next;
	val = (*head)->n;

	free(*head);
	*head = tmp;

	return (val);
}
