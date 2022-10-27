#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that sums of the values in a list
 * @head: begining of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
