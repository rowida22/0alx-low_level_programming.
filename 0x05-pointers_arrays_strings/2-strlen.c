#include <stdio.h>
#include "main.h"

/**
 * _strlen - a fun returns the length of a string
 * @s: parameter
 * return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
