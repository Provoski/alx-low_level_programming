#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t
 * @head: begining of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
