#include "main.h"

/**
 * puts2 - check the code
 * @str: parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str += 2;
	}
	_putchar('\n');
}
