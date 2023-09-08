#include "hash_tables.h"

/**
 * check_add_node - check and add a new node
 * @key: the key
 * @value: the value associated with the key
 * @head: pointer
 * Return: Node if success or NULL
 */

int check_add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *node;
	hash_node_t *curr = (*head);

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			free(node);
			return (1);
		}
		curr = curr->next;
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = (*head);
	(*head) = node;
	return (1);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @key: the key
 * @value: the value associated with the key
 * @ht: a pointer to hash table to add
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int nd = 0;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	nd = check_add_node(&ht->array[index], (char *)key, (char *)value);

	if (nd == 1)
		return (1);
	return (0);
}
