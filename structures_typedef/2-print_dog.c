#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - init
  * @d: dog
  */
void print_dog(struct dog *d)
{	
	if (d == NULL)
	{
		printf("(nil)");
		exit(0);
	}
	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	d->age == 0 ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
