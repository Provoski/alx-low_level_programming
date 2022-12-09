#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free a double list
 * @head: begining of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
