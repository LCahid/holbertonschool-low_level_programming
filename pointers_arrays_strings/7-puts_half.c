#include "main.h"
#include <string.h>
/**
  * puts_half - reset to 98
  *
  * @str: str
  * Return: length
 */
void puts_half(char *str)
{
	int i, s = 0;
	int l = strlen(str);

	for (i = l / 2; i < l; i++)
	{
		if (l % 2 && !s)
		{
			i = (l - 1) / 2;
			s = 1;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
