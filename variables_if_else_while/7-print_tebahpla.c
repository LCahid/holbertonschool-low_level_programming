#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'z';

	do {
		putchar(a);
		a--;
	} while (a >= 'a');
	putchar('\n');
	return (0);
}
