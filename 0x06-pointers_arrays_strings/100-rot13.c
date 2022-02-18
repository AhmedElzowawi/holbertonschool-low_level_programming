#include "main.h"

/**
 * rot13 - check the code for
 * @s: parameter
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int i;
	int j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char l1[] = "abcdefghijklmnopqrstuvwxyz";
	char n2[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; l[j] != '\0' && l1[j] != '\0'; j++)
	{
	if (s[i] == l[j] || s[i] == l1[j])
	{
	s[i] = n[j];
	s[i] = n2[j];
	}
	}
	}
	return (s);
}
