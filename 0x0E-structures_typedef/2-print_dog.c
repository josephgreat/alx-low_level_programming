#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the value of the dog prototype
 * @d: dog prototype
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
