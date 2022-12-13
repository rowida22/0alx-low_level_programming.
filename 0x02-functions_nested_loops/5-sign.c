#include "main.h"
/**
 * print_sign - return 0 if letter not lowercase, 1 if letter lowercase
 * @n : number to check
 * return : 0 or 1
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		check = 0;
		_putchar('0');
	}
	else
	{
		check = -1;
		_putchar('-');
	}
	return (check);
}

