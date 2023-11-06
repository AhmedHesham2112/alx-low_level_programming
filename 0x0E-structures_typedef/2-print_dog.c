#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  prints a struct dog
 * @d: pointer to struct dog to initialize
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
