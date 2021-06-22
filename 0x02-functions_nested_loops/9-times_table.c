#include "holberton.h"

/**
 * times_table - prints the times table of 9
*/

void times_table(void)
{	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a);

		for (b = 0; b <= 0; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			_putchar(c);
		}
		_putchar('\n');
	}
}
