#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_name - init
  * @name: name
  * @f: func
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
