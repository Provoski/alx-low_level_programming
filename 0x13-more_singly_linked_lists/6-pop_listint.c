#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that delete the head node and return the data
 * @head: begining of the list
 * Return: data of the deleted node or zero if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
