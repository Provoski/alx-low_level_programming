#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 * @h: star of the list
 * Return: number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
