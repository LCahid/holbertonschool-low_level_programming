#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - fills memory
 * @nmemb: str
 * @size: str
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buf;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buf = malloc(nmemb * size);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		buf[nmemb] = 0;
	return (buf);
}
