#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - main
  * @argc: argc 
  * @argv: argv
  * Return: return
  */
int main(int argc, char **argv)
{
	int (*p)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((p == op_div && b == 0) || (p == op_mod && b == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", p(a, b));
	return (0);
}
