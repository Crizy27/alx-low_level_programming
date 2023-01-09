#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}

	for (int i = 0; i < ht->size; i++)
	{
		printf("[%d]", i);
		for (node_t *node = ht->array[i]; node != NULL; node = node->next)
		{
			printf(" (%s, %s)", node->key, node->value);
		}
		printf("\n");
	}
}
