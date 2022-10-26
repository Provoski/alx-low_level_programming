#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the begining of the list
 * @head: start of the list
 * @n: variable for the number
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
