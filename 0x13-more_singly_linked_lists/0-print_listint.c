#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the element of "listint_t"
 * @h: first node of the list
 * Return: the number of node in the list
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
