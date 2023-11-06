#include "main.h"
#include <stdlib.h>
/**
 * create_array - fills memory
 * @size: size
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *buf = malloc(sizeof(char) * size);
	unsigned int i;
	
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buf[i] = c;
	}
	buf[i] = '\0';
	return (buf);
}
