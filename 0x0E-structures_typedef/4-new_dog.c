#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k, l;
	dog_t *dog;

	for (i = 0; name[i]; i++)
	{
	}
	for (j = 0; owner[j]; j++)
	{
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		dog->name[k] = name[k];
	}
	dog->age = age;
	dog->owner = malloc(sizeof(char) * j);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (l = 0; l < j; l++)
	{
		dog->owner[l] = owner[l];
	}
	return (dog);
}
