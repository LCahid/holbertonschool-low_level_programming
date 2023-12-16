#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_delete - deletes a hash table.
  * @ht: hash_table
  * Return:  actual number of letters it could read and print
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int len, i = 0;
	hash_node_t *temp1, *temp2;

	if (!ht)
	{
		return;
	}
	len = ht->size;
	while (i < len)
	{
		temp1 = ht->array[i];
		while (temp1)
		{
			temp2 = temp1->next;
			free(temp1->key);
			free(temp1->value);
			free(temp1);
			temp1 = temp2;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
