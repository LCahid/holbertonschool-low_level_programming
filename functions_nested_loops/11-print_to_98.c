#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - writes the character c to stdout
 *
 * @a: var
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int a)
{
	int i;

	if (a <= 98)
	{
		for (i = a; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = a; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
		printf("\n");
	}
}
