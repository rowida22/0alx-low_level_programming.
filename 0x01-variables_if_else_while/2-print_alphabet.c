#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int char = 'a';

	while(char <= 'z')
	{
		putchar(char);
		char++;
	}
	putchar('\n');
	return (0);
}

