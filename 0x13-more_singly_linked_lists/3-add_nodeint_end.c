#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: beginbg of the list
 * @n: variable for integer element
 * Return: address of new element or "NULL" if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
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
