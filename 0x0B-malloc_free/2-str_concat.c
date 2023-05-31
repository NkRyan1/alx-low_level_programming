#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - main block
 *Description: Concatenates two strings.
 *@str1: Address to the 1st string given as parameter.
 *@str2: Address to the 2nd string given as parameter.
 * Return: a char pointer or NULL when it fails
 *
 */

char *str_concat(char *str1, char *str2)
{
	char *s;
	char *s2;
	int lg;
	int lg1;
	int i;

	if ((str1 == NULL)||(str2 == NULL))
	{
		return (NULL);
	}
	lg = 1 + strlen(str1) + strlen(str2);
	lg1 = 1 + strlen(str1);
	if (lg == 1)
	{
		s = (char *)malloc(sizeof(char) * lg);
		if (s == NULL)
		{
			return (NULL);
		}
		s[0] = '\0';
		return (s);
	}
	s = (char *)malloc(sizeof(char) * lg);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < lg1 - 1)
	{
		s[i] = str1[i];
		i++;
	}
//	s[lg1 - 1] = '\0';
	strcat(s, str2);
//	s[lg - 1] = '\0';
	return (s);
	free(s);
}
