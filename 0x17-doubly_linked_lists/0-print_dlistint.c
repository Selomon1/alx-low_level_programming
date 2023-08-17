#include "lists.h"

/**
 * print_dlistint - prints aall eelements of lists
 * @h: head pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
