#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_get - retrieves a value associated with a key. 
  * @ht: hash_table
  * @key: key
  * Return:  actual number of letters it could read and print
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || key[0] == '\0')
		return (NULL);
	if (!ht)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
