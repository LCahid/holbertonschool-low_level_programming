#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_strings - init
  * @separator: sep
  * @n: number
  * Return: int
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list el;
	unsigned int i;
	char *str;

	va_start(el, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(el, char *);
		if (separator != NULL && i != 0)
		{
			if (str != NULL)
			{
				printf("%s%s", separator, str);
			}
			else
			{
				printf("%s(nil)", separator);
			}
		}
		else
		{
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(el);
}
