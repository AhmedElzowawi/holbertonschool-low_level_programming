#include "main.h"
/**
 * _memcpy - prints buffer in
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: parameter
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
*dest = *src;
src++;
n--;
}
return (dest);
}
