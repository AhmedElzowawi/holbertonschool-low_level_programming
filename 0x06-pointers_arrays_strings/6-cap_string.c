#include "main.h"

/**
 * main - check the code
 *cap_string
 *@s: parameter
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] -= 32;
	}
	i++;
}
}
