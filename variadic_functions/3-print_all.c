#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_all - init
  * @format: sep
  * Return: int
  */
void print_all(const char * const format, ...)
{
	va_list el;
	int i = 0;
	char *str;

	va_start(el, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(el, int));
			break;
		case 'i':
			printf("%d", va_arg(el, int));
			break;
		case 'f':
			printf("%f", va_arg(el, double));
			break;
		case 's':
			str = va_arg(el, char *);
			if (str == NULL)
				str = "(nil)"
			printf("%s", str);
			break;
		default:
			continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(el);
}
