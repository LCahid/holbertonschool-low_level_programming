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
	dlistint_t *buf, *temp;

	if (!*h && idx == 0)
		return (add_dnodeint(h, n));
	else if (!*h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	buf = malloc(sizeof(dlistint_t));
	if (!buf)
		return (NULL);
	buf->n = n;
	temp = *h;
	while (temp)
	{
		temp = temp->next;
		a++;
		if (a == idx)
		{
			buf->next = temp->next;
			buf->prev = temp;
			break;
		}
	}
	return (buf);
}
