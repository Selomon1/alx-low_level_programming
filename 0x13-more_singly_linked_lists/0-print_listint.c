#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print the integer data
 * list of listint_t
 *
 *
 * @h: the first pointer of the link
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int n;

	ptr = h;
	n = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}

	return (n);
}
