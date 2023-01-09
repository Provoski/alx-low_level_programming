#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a functiin that add node to the begining of a list
 * @head: the head of the list
 * @str: string to be duplicated
 * Return: address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t *));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (*head);
}
