#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - main block
 *Description: Returns a pointer to a newly allocated space in memory containing *the string given as parameter.
 *@str: Address to the string given as parameter.
 * Return: a char pointer or NULL when it fails
 *
 */

char *_strdup(const char *str)
{
	char *s;
	int lg;

	lg = strlen(str);
	if (lg == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * lg);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < a)
	{
		s[i] = str[i];
		i++;
	}
	s[a] = '\0';
	return (s);
	free(s);
}
