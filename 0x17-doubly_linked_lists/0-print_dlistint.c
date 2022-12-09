#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a fuctuon that prunts data of a double linked list
 * @h: pointer to the head of the list
 * Return: nuber of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
