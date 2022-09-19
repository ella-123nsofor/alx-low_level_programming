#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int i;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		_putchar(c);
		i++;
		c = *(str + i);
	}
	_putchar('\n');
}
