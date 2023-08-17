#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of the list
 * @head: head pointer
 * Return: 0 if the list is empty, else sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
