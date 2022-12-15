#include "main.h"

/**
 * print_line -  draws a line
 * Return: new line
 */

void print_line(int n)
{
	int i = 1;

	if (i <= n)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
