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
	char *buf = malloc(sizeof(char) * size + 1);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		buf[i] = c;
	}
	buf[i] = '\0';
	return (buf);
}
