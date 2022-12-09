#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - it add node to the begining of a duoble linked list
 * @head: beging of the list
 * @n: data to be added to the newly created node
 * Return: address of new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *end;
	dlistint_t *temp;

	temp = 0;
	end = 0;
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
		end = *head;
		temp = *head;
		while (temp->next != 0)
		{
			end = temp->next;
			temp = temp->next;
		}
		end->next = newnode;
		newnode->prev = end;
	}
	return (end);
}
