#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "hash_tables.h"
/**
  * hash_table_create - creates hash table
  * @size: size
  * Return:  actual number of letters it could read and print
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = malloc(sizeof(hash_table_t));

	t->size = size;
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (!(t->array))
		return (NULL);
	return (t);
}
