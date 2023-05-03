#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the pointer of the head of the listint_t list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *low = head, *high = head;
	unsigned int twe = 0;
	int loop = 0;

	while (low && high && high->next)
	{
		if (!(high->next->next))
			break;
		low = low->next;
		high = high->next->next;

		if (low == high)
		{
			low = low->next;
			loop = 1;
			break;
		}
	}

	if (!loop)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			twe++;
		}
		return (twe);
	}

	while (head)
	{
		twe++;
		if (head == low)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
