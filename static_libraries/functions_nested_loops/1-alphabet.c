#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
}
