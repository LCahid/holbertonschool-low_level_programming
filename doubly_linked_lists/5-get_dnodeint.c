#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
  * get_dnodeint_at_index - get node at index 
  * @head: head node
  * @index: index of value
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (!head)
		return (NULL);
	while(head || a != index - 1)
	{
		head = head->next;
		a++;
	}
	if (a != index)
		return (NULL);
	return (head);
}
