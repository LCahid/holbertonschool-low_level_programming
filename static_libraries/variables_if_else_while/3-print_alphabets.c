#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 96;

	do {
		a++;
		if (a == 'z')
		{
			putchar(a);
			a = 'A';
		}
		putchar(a);
	} while (a != 'Z');
	putchar('\n');
	return (0);
}
