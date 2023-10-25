#include <stdio.h>
#include <string.h>
/**
  * print_array - reset to 98
  *
  * @a: num
  * @n: num
  * Return: length
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
