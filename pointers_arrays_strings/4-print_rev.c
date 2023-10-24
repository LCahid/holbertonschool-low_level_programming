#include "main.h"
#include <string.h>
/**
  * print_rev - reset to 98
  *
  * @s: str
  * Return: length
  */
void print_rev(char *s)
{
	int i = 0;
	int l = strlen(s);

	while (s[i] != '\0')
	{
		_putchar(s[l - i - 1]);
		i++;
	}
	_putchar('\n');
}
