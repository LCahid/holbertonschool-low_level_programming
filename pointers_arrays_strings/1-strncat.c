#include <stdio.h>
#include <string.h>
/**
  * _strncat - reset to 98
  *
  * @dest: num
  * @src: num
  * @n: num
  * Return: length
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = strlen(dest);

	while (src[i] != '\0' && n > i)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
