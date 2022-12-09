#include <stdio.h>

/**
 * main - Returns combination between 2 digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';

	for (num1 = 0; num1 <= '9' ; num1++)
	{
		for (num2 = 0; num2 <= '9' ; num2++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(num1);
				putchar(num2);
			}
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
