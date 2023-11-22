#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * print_opcode - opcode
  * @mp: main pointer
  * @a: a
  */
void print_opcode(int (*mp)(int, char **), char *a)
{
	int k = atoi(a), i = 0, b;

	while (i < k)
	{
		b = ((char *)mp)[i] & 0xff;
		printf("%02x ", b);
		i++;
	}
}
/**
  * main - init
  * @argc: array
  * @argv: size
  * Return: int
  */
int main(int argc, char **argv)
{
	int i, a = 0, k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcode(main, argv[1]);
	printf("\n");
	return (0);
}
