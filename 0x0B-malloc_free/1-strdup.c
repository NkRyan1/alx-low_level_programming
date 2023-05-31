#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - main block
 *Description: Returns a pointer to a newly allocated space.
 *@str: Address to the string given as parameter.
 * Return: a char pointer or NULL when it fails
 *
 */

char *_strdup(const char *str)
{
	char *s;
	int lg;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	lg = 1 + strlen(str);
	if (lg == 1)
	{
		s = (char *)malloc(sizeof(char) * lg);
		s[0] = \0;
		return (s);
	}
	s = (char *)malloc(sizeof(char) * lg);
	i = 0;
	while (i < lg-1)
	{
		s[i] = str[i];
		i++;
	}
	s[lg-1] = '\0';
	return (s);
	free(s);
}
