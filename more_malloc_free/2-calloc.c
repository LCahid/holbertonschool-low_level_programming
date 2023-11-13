#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - fills memory
 * @nmemb: tr
 * @size: str
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buf;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buf = malloc(nmemb * size);
	if (buf == NULL)
		return (NULL);
	return (buf);
}