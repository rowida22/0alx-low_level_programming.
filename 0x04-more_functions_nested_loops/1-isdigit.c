#include "mian.h"

/**
 * _isdigit - checks if c digit
 * @c: parameter
 * Retutn: 0 Done
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
