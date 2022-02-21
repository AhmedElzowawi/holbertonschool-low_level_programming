#include "main.h"
/**
 * _memset - check the code
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned i;

for (; i < n; i++)
{
*s = b;
}
return (s);
}
