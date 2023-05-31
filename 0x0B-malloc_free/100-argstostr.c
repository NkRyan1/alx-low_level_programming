#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - main block
 *Description: Concatenates the arguments of a programme.
 *@arr: 2 dimensional char array
 *@r: Number of rows in the 2D array 's'.
 * Return: a char pointer or NULL when it fails
 *
 */

char *argstostr(int r, char **arr)
{
	char *s;
	int i;
	int j;
	int k;

	k = 0;
	if (r == 0 || arr == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(char) * r * 10);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			s[k] = arr[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		k++;
	}
	s[k - 1] = '\0';
	return (s);
}
