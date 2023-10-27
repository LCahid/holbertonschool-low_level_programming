#include "main.h"
#include <string.h>
/**
  * cap_string - reset to 98
  *
  * @s: str
  * Return: length
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i != 0)
		{
			if (s[i - 1] < 48 && s[i - 1] != '-')
			{
				if (s[i] >= 97 && s[i] <= 122)
				{
					s[i] -= 32;
				}
			}
		}
		else
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
