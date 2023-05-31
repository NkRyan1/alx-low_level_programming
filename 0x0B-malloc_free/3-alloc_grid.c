#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - main block
 *Description: Creates a 2 dimensional array.
 *@r: Number of rows.
 *@c: Number of columns.
 * Return: a pointer or NULL when it fails
 *
 */

int **alloc_grid(int c, int r)
{
	int **s;
	int i;
	int j;
	int k;

	if (c == 0 || r == 0)
		return (NULL);
	s = (int **)malloc(sizeof(int *) * r);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < r; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * c);
		if (s[i] == NULL)
		{
			for (k = 0; k < i+1; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < c; j++)
			s[i][j] = 0;
	}
	return (s);
}

