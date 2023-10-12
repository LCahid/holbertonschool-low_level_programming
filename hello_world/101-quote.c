#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int l = strlen(a);
	int i;

	for (i = 0; i < l; i++)
	{
		putchar(a[i]);
	}
	return (1);
}
