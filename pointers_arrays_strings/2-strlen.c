#include "main.h"
/**
  * _strlen - reset to 98
  *
  * @s: str
  *
  */
int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;
	return (i);
}
