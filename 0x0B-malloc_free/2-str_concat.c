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
	int lg;
	int lg1;
	int i;

	if ((str1 == NULL) || (str2 == NULL))
	{
		if (str1 == NULL)
		{
			lg1 = 1 + strlen(str2);
			s = (char *)malloc(sizeof(char) * lg1);
			if (s == NULL)
			{
				return (NULL);
			}
			while (i <= lg1 - 1)
			{
				if (i == lg1 - 1)
				{
					s[i] = '\0';
				}
				else
				{
					s[i] = str2[i];
				}
				i++;
			}
			return (s);
		}
		else if (str2 == NULL)
		{
			lg1 = 1 + strlen(str1);
			s = (char *)malloc(sizeof(char) * lg1);
			if (s == NULL)
			{
				return (NULL);
			}
			while (i <= lg1 - 1)
			{
				if (i == lg1 - 1)
				{
					s[i] = '\0';
				}
				else
				{
					s[i] = str1[i];
				}
				i++;
			}
			return (s);
		}
		return (NULL);
	}
	lg = 1 + strlen(str1) + strlen(str2);
	lg1 = 1 + strlen(str1);
	s = (char *)malloc(sizeof(char) * lg);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= lg1 - 1)
	{
		if (i == lg1 - 1)
		{
			s[i] = '\0';
		}
		else
		{
			s[i] = str1[i];
		}
		i++;
	}
	strcat(s, str2);
	return (s);
	free(s);
}
