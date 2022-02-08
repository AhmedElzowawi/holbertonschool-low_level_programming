#include "main.h"

/**
  * print_to_98 - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
