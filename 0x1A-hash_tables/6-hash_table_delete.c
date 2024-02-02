#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return : Always 0 on success
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur, *hold;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];

		while (cur != NULL)
		{
			hold = cur;
			cur = cur->next;
			free(hold->key);
			free(hold->value);
			free(hold);
		}
	}
	free(ht->array);
	free(ht);
}
