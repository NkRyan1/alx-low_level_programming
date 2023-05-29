#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	char *st;

	st = create_array(4, 'H');
	st[1] = 'o';
	st[2] = 'w';
	printf("We've got %s \n", st);
	st = create_array(0, 'S');
	printf("We've got %s \n", st);
	
	return 0;
}
