#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @a: the size of the array
 * @b: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(int a, char b)
{
	char *array;
	unsigned int i;

	if (a == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * a);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		array[i] = b;

	return (array);
}
