#include <stdio.h>
#include <string.h>
/**
  * _strncpy - reset to 98
  *
  * @dest: num
  * @src: num
  * @n: num
  * Return: length
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int l = strlen(src);

	while (i < n)
	{
		if (i < l)
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
