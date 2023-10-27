#include <stdio.h>
#include <string.h>
/**
  * reverse_array - reset to 98
  *
  * @a: num
  * @n: num
  *
  * Return: length
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
