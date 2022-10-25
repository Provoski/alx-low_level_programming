#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it free a list
 * @head: begining of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
