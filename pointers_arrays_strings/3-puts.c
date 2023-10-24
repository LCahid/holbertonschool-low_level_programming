#include "main.h"
/**
  * _puts - reset to 98
  *
  * @str: str
  * Return: length
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
