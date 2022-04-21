#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/


void _puts(char *str)
{
	int i = 0;
	char c;

	while (str[i])
	{
		c = str[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}