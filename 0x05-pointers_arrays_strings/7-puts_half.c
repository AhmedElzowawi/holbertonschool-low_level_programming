#include "main.h"

/**
 * puts_half - check the code
 * @str: parameter
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length;
	int secondLength;

	while (str[length] != '\0')
	{
	length++;
	}
	if (length % 2 == 0)
	for (secondLength = (length / 2); secondLength <= (length - 1) secondLength++)
	{
	_putchar(str[secondLength]);
	secondLength = length / 2;
	}
	else
	{
	secondLength = (length + 1) / 2;
	}
	while (secondLength <= (length -1))
	{
	_putchar(str[secondLength]);
	secondLength++;
	}
	_putchar('\n');
}
