#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - determine the length of a string
 * @str: the string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string
 * @dest: where to copy
 * @src: source
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *oddie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	oddie = malloc(sizeof(dog_t));
	if (oddie == NULL)
		return (NULL);

	oddie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (oddie->name == NULL)
	{
		free(oddie);
		return (NULL);
	}

	oddie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (oddie->owner == NULL)
	{
		free(oddie->name);
		free(oddie);
		return (NULL);
	}

	oddie->name = _strcopy(oddie->name, name);
	oddie->age = age;
	oddie->owner = _strcopy(oddie->owner, owner);

	return (oddie);
}
