#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a functiin that had node to a the end of a list
 * @head: the head of the list
 * @str: string to be duplicated
 * Return: address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		last = new;
	}
	else
	{
		last->next = new->next;
		last = new-> next;
	}
	return (new);
}
