#include "main.h"

/**
 * string_toupper - check the code
 * @a: parameter
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
	if (a[i] >= 'a' && a[i] <= 'z')
	{
	a[i] -= 32;
	}
	i++;
	}
	return (a);
}
