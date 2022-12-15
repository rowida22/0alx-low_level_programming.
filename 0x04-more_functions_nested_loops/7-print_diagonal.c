#include "main.h"

/**
 * print_diagonal -  draws a diagonal line
 * @n: parameter
 * return: new line
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
