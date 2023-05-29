#include <stdio.h>
#include <stdlib.h>

char* create_array(int a, char b)
{
	char* s;
		
	if (a == 0)
	{
		return NULL;
	}
	s = malloc(a);
	s[0] = b;
	return s;
}
