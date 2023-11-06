#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - fills memory
 * @str: str
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int size = strlen(str);
	char *buf = malloc(sizeof(char) * size);
	int i;
	
	if (str == NULL)
		return (NULL);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		buf[i] = str[i];
	}
	return (buf);
}
