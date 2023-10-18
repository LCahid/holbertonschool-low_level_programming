#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int j, i = 0;

	for (j = 0; j < 10; j++)
	{
		while (a[i] != '\0')
		{
			_putchar(a[i]);
			i++;
		}
		i = 0;
		_putchar('\n');
	}
}
