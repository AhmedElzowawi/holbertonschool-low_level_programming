#include "main.h"

/**
 * rev_string - check the code
 * @s: parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	for (i -= 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
}
