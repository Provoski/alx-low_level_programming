#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - a function that prints the number
 * of nodes in double linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != 0)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
