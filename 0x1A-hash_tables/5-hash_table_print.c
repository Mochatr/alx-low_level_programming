#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			flag = 1;
			curr = curr->next;
		}
	}
	printf("}\n");
}
