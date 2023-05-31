#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - main block
 *Description: Frees a 2 dimensional array previousely created with alloc.
 *@a: 2 dimensional array to be freed.
 *@r: Number of rows.
 * Return: notthing.
 *
 */

void free_grid(int **a, int r)
{
	int k;

	if ((a != NULL) && (r != 0))
	{
		for (k = 0; k < r; k++)
			free(a[k]);
		free(a);
	}
}

