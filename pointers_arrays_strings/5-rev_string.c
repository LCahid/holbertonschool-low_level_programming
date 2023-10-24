#include "main.h"
#include <string.h>
/**
  * rev_string - reset to 98
  *
  * @s: str
  * Return: length
 */
void rev_string(char *s)
{
	int i = 0;
	int l = strlen(s);
	char temp;

	while (i < l / 2)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
		i++;
	}
}
