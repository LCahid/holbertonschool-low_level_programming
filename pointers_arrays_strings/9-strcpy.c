#include <stdio.h>
#include <string.h>
/**
  * _strcpy - reset to 98
  *
  * @dest: num
  * @src: num
  * Return: length
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
