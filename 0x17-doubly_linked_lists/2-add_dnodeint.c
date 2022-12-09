#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - it add node to the begining of a duoble linked list
 * @head: beging of the list
 * @n: data to be added to the newly created node
 * Return: address of new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = 0;
	newnode->next = 0;
	if (*head == 0)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}
