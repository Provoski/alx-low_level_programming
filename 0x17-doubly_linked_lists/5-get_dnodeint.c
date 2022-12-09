#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - it add node to the begining of a duoble linked list
 * @head: begining of the list
 * @index: position of node to be returned
 * Return: address of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;
	unsigned int node_len;

	temp = 0;
	i = 0;
	node_len = 0;
	temp = head;
	while (head != 0)
	{
		node_len++;
		head = head->next;
	}
	if ((index == 0) || ((index > 0) && (index < (node_len - 1))))
	{
		while (i < index)
		{
			i++;
			temp = temp->next;
		}
		return (temp);
	}
	else
		return (NULL);
}
