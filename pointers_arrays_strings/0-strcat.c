#include <stdio.h>
#include <string.h>
/**
  * _strcat - reset to 98
  *
  * @dest: num
  * @src: num
  * Return: length
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = strlen(dest);

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
