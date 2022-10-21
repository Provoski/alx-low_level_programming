#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elemaent of a list
 * @h: variable pointing to the head of the list
 * Return: number of nodes
 */
int print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			count++;
			h = h->next;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}


