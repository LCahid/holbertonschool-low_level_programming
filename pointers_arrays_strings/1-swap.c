#include "main.h"
/**
  * swap_int - reset to 98
  *
  * @a: num
  * @b: num
  *
  */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
