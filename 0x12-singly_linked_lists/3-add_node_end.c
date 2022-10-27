#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a functiin that had node to the end of a list
 * @head: the head of the list
 * @str: string to be duplicated
 * Return: address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	if (*head == NULL)
	{
		*head = newnode;
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->next = NULL;
	return (*head);
}
