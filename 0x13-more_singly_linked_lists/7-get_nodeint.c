#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return data of a node at nth index
 * @head: begining of the list
 * @index: position of node
 * Return: data of node or NULL if index does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos;
	listint_t *temp;

	pos = 0;
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (pos == index)
		{
			break;
		}
		temp = temp->next;
		pos++;
	}
	return (temp);
}
