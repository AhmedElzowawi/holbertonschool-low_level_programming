#include "main.h"

/**
 * print_rev - check the code
 * @s: paremeter
 * Return: Always 0.
 */
void print_rev(char *s)
{
   while (*s != '\0')
   {
		s++;
   }
   while ((*s == '\0') || (*s != '\0' && *s > 1))
   {
	s--;
	_putchar(*s);
   }
   _putchar('\n');
}
