#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "0123456789abcdef";
	int k = strlen(a);
	int i;

	for (i = 0; i < k; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
