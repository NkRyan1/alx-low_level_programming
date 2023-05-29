#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - main block
 *Description: Create an array and initialise it with the given char
 *a: int parameter
 *b: char parameter
 * Return: a char pointer or NULL when it fails
 *
 */

char *create_array(int a, char b)
{
	char *s;
	int i;
	if (a == 0)
	{
		return (NULL);
	}
	s = malloc(a);
	i = 0;
	while (i < a)
	{
		s[i] = b;
		i++;
	}
	return (s);
	free(s);
}
