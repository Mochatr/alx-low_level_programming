#include "hash_tables.h"

/**
 * make_hash_node - Creates a new hash node.
 * @key: The key for the node.
 * @value: value
 * Return: A new node, or NULL in case of a failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table.
 * @key: The key.
 * @value: Value associated with the key.
 * Return: 1 if it succeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Initialize the index variable */
	unsigned long int idx;

	hash_node_t *new_node, *curr;
	char *newValue;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	|| key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			newValue = strdup(value);
			if (newValue == NULL)
				return (0);

			free(curr->value);
			curr->value = newValue;
			return (1);
		}
		curr = curr->next;
	}
	new_node = make_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
