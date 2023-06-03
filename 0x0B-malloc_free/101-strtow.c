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
	int ind;
	int u;

	if (str == NULL)
		return (NULL);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') && (str[i + 1] != ' '))
		{
			count++;
			if (str[i + 1] == '\0')
				ind = 1;
		}
		i++;
	}
	count++;
	if (str[0] == ' ')
		count--;
	if (ind != 1)
		u = count;
	else
		u = count - 1;
	printf("%d \n", u);
	ai = (int *)malloc(sizeof(int) * u);
	if (ai == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (i < u && str[j] != '\0')
	{
		k = 0;
		while (str[j] != ' ')
		{
			k++;
			j++;
		}
		if (k == 0)
		{
			j++;
			continue;
		}
		ai[i] = k;
		i++;
	}
	for (i = 0; i < u; i++)
		printf("%d ", ai[i]);
	s = (char **)malloc(sizeof(char *) * u);
	if (s == NULL)
		return (NULL);
	k = 0;
	j = 0;
        i = 0;
        while (i < u && str[j] != '\0')
	for (i = 0; i < u; i++)
	{
		s[i] = (char *)malloc(sizeof(char) * ai[i] + 1);
		if (s[i] == NULL)
		{
			for (k = 0; k < i + 1; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
	}
	i = 0;
	j = 0;
	while (i < u && str[j] != '\0')
	{
		k = 0;
		while (str[j] != ' ')
		{
			s[i][k] = str[j];
			printf("Ki is %d \n", k);
			printf("char is %s \n", &str[j]);
			printf("j is %d \n", j);
			k++;
			j++;
		}
		if (k == 0)
		{
			j++;
			printf("K is %d \n", k);
			continue;
		}
		s[i][ai[i]] = '\0';
		i++;
		printf("i is %d \n", i);
	}
	return (s);
}

