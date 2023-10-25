#include "main.h"
#include <string.h>
/**
  * puts2 - reset to 98
  *
  * @str: str
  * Return: length
 */
void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (!(i % 2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
