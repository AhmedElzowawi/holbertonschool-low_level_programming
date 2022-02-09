#include "main.h"

/**
  * print_last_digit - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
int print_last_digit(int n)
{
	if (n < 0)
	{
	n = n * -1;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
