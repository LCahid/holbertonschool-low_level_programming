#include <stdlib.h>
#include <stdio.h>
/**
  * array_iterator - init
  * @array: array
  * @size: size
  * @action: action
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
