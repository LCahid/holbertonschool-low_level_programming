#include "main.h"

/**
 * print_triangle - writes the character c to stdout
 *
 * @size: val
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size - i - 1 > j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}
