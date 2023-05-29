#include <stdio.h>
#include <stdlib.h>

char* create_array(int a, char b)
{
	char* s;
	int i;
		
	if (a == 0)
	{
		return NULL;
	}
	s = malloc(a);
	i = 0;
	while (i < a)
	{
		s[i] = b;
		i++;
	}
	return s;
}
