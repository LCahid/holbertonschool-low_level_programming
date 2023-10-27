#include <stdio.h>
#include <string.h>
/**
  * _strcmp - reset to 98
  *
  * @s1: num
  * @s2: num
  *
  * Return: length
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, p = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			p = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (p);
}
