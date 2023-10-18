#include "main.h"

/**
 * _abs - writes the character c to stdout
 *
 * @n: var
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _abs(int n)
{
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
