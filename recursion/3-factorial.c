#include "main.h"
/**
 * factorial - fills memory
 * @n: data
 *
 * Return: char
 */
int factorial(int n)
{
	if (n == 0)
		return (0);
	return (n + factorial(n - 1));
}
