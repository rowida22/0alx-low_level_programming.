#include "main.h"

/**
 * main - check if char is uppercase or lowercase
 * @c: parameter
 * return : 0 Done
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
