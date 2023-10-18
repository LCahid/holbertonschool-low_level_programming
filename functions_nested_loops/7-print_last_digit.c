#include "main.h"

/**
 * print_last_digit - writes the character c to stdout
 *
 * @n: var
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
