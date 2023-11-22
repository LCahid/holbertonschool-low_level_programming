#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * print_opcode - opcode
  * @mp: main pointer
  */
void print_opcode(int (*mp)(int, char **), char *a)
{
	int k = atoi(a), i = 0;

	while (i < k)
	{
		printf("%p", mp);
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
	while (a < i)
	{
		k = *(int *)(main + a) & 0xff;
		printf("%02x ", k);
		a++;
	}
	printf("\n");
	return (0);
}
