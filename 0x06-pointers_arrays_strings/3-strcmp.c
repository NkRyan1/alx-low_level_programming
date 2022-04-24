#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, and ns1 - ns2 if not matching
*/

int _strcmp(char *s1, char *s2)
{
	char c1;
	char c2;

	do
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	}
	while (c1 == c2);
	return (c1 -c2);
}
