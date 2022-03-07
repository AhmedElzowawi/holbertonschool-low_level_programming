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
	struct dog *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
