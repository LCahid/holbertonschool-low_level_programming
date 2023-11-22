#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_numbers - init
  * @separator: sep
  * @n: number
  * Return: int
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list el;
	unsigned int i;
	int k;

	va_start(el, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(el, int);
		if (separator != NULL && i != 0)
			printf("%s%d", separator, k);
		else
			printf("%d", k);
	}
	va_end(el);
	printf("\n");
}
