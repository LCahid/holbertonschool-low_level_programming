#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_print - retrieves a value associated with a key.
  * @ht: hash_table
  * Return:  actual number of letters it could read and print
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int len, i = 0;
	char f = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return;
	len = ht->size;
	printf("{");
	while (i < len)
	{
		if (ht->array[i])
		{
			if (!temp)
			{
				temp = ht->array[i];
			}
			if (!f)
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			if (temp->next)
				temp = temp->next;
			else
			{
				temp = NULL;
				i++;
			}
			if (!f)
				f++;
		}
		else
		{
			i++;
		}
	}
	printf("}\n");
}
