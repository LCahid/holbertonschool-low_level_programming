#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * dlistint_len - descp
  * @h: salam
  * Return: size_t
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
