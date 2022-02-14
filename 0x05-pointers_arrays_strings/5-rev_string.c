#include "main.h"

/**
 * rev_string - check the code
 * @s: parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char revL;

	while (s[length] != '\0')
	{
	i++;
	}
	for (i -= 1; i >= 0; i--)
	{
	revL = s[i];
	i++;
	s[i] = s[length];
	s[length] = revL;
	}
}
