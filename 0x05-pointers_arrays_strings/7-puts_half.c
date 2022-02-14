#include "main.h"

/**
 * puts_half - check the code
 * @str: parameter
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int n;

	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 0)
	{
	n = i / 2;
	}
	else
	{
	n = (i + 1) / 2;
	}
	while ()
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
