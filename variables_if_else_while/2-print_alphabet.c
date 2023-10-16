#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	
	do
	{
		putchar(a);
		a++;
	}
	while (a <= 'z');
	putchar('\n');
	return (0);
}
