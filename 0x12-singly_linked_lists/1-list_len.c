#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len- a function that returns the number of element in a list
 * @h: variable pointing to the head of the list
 * Return: number of elements in a linked list
 */
int list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}


