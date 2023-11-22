#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * sum_them_all - init
  * @n: number
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg (ap, int);
	}
	return (sum);
}
