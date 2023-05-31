#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - main block
 *Description: Splits strings in to words.
 *@str: String to be split in to words.
 * Return: a pointer or NULL when it fails
 *
 */

char **strtow(char *str)
{
	char **s;
	int *ai;
	int i;
	int j;
	int k;
	int count;
	
	if (str == NULL)
		return (NULL);
	count = 0;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			count++;
		i++;
	}
	ai = (int *)malloc(sizeof(int) * count + 1);
	if (ai == NULL)
		return (NULL);
	for (i = 0; i <= count; i++)
	{
		k = 0;
		while (str[j] != ' ')
		{
			k++;
			j++;
		}
		ai[i] = k;
		j++;
	}
	s = (char **)malloc(sizeof(char *) * count + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i <= count; i++)
	{
		s[i] = (char *)malloc(sizeof(char) * ai[i] + 1);
		if (s[i] == NULL)
		{
			for (k = 0; k < i + 1; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < ai[i]; j++)
			s[i][j] = str[k + j];
		s[i][ai[i]] = '\0';
		k = k + ai[i] + 1;
	}
	return (s);
}
