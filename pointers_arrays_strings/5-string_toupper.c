#include <stdio.h>
#include <string.h>
/**
  * string_toupper - reset to 98
  *
  * @s: num
  *
  * Return: length
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
