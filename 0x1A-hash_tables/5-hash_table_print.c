#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	size_t print = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (print == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			print = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
