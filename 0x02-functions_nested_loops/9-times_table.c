#include "holberton.h"

/**
 * times_table - prints the times table of 9
*/

void times_table(void)
{	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 0; b++)
		{
			c = a * b;
			_putchar(a);
			_putchar(',');
			_putchar(' ');
			_putchar(c);
		}
		_putchar('\n');
	}
}
