#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at n index;
 * @head: begining of the list
 * @idx: position of node
 * @n: node data
 * Return: data of node or NULL if index does not exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos;
	listint_t *newnode;
	listint_t *temp, *temp2;

	pos = 1;
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	if (head == NULL)
		*head = newnode;
	temp = *head;
	temp2 = *head;
	while (temp != NULL)
	{
		if (pos == idx)
		{
			newnode->next = temp;
			temp2->next = newnode;
		}
		temp2 = temp2->next;
		temp = temp->next;
		pos++;
	}
	return (*head);
}
