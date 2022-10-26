#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t
 * @head: begining of the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head == temp->next;
		free(temp);
	}
	*head == NULL;
}
