#include "hash_tables.h"

/**
 *hash_table_delete - functions that deletes a hash table
 *@ht: is the hash table you want to print values and key from
 *Return: No return
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i = 0, size = 0;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	size = ht->size;
	while (i < size)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
