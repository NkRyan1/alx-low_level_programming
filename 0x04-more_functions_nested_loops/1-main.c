#include"main.h"
#include<stdio.h>
#include<ctype.h>

/**
 * main - check the code.
 *
 *
 * Return: Always 0.
 *
 */

 int main(void)
{
	char c;
	int e;

        c = '1';
	e = _isdigit(c);
	printf("%c: %d\n", c, e);
        c = 'a';
	e = _isdigit(c);
	printf("%c: %d\n", c, e);
	return (0);
}
