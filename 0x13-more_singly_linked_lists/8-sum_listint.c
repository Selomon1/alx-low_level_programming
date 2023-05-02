#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - the sum of all the data (n)
 *	of a listint_t linked list
 * @head: a pointer of the head of the listint_t list
 * Return: the sum of all the data (n)
 *	or if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
