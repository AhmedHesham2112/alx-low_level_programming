#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the string.
 * @src: input text.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

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
	lth_n = _strlen(name);
	lth_o = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	dog->name = malloc(lth_n + 1);
	dog->owner = malloc(lth_o + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
