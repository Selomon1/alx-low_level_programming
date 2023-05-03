#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the pointer of the head of the listint_t list
 * Return: The address of the node where the loop starts,
 *	or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *jerry, *tom;

	if (head == NULL || head->next == NULL)
		return (NULL);

	jerry = head->next;
	tom = head->next->next;

	while (tom)
	{
		if (jerry == tom)
		{
			jerry = head;

			while (jerry != tom)
			{
				jerry = jerry->next;
				tom = tom->next;
			}

			return (jerry);
		}

		jerry = jerry->next;
		tom = tom->next->next;
	}

	return (NULL);
}
