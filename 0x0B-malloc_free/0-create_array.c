#include <stdlib.h>
/**
 * create_array - check the code
 * @size: parameter
 * @c: parameter
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char*) malloc(size * sizeof(char));
	(void)c;
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
	}
}
