#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog -  initialize a variable of type struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Description: a new dog is initialized.
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lth_n, lth_o;

	if (name == NULL || owner == NULL)
		return (NULL);
	lth_n = strlen(name);
	lth_o = strlen(owner);
	dog = malloc(sizeof(dog_t));
	dog->name = malloc(lth_n + 1);
	dog->owner = malloc(lth_o + 1);
	if (dog->name == NULL || dog->owner == NULL)
		return (NULL);
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
