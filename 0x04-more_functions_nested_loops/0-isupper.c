#include "main.h"

/**
 * _isupper - check if char is uppercase
 * @c: parameter
 * Return : 0 Done
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
