#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * insert_dnodeint_at_index - add node at index
  * @h: head node
  * @idx: index of value
  * @n: value
  * Return: Node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *buf;

	if (!*h && idx == 0)
		return (add_dnodeint(h, n));
	else if (!*h)
		return (NULL);
	buf->n = n;
	while (*h)
	{
		*h = (*h)->next;
		a++;
		if (a == idx)
		{
			buf->next = (*h)->next;
			buf->prev = (*h);
			break;
		}
	}
	return (buf);
}
