#include  "holberton.h"

/**
 * print_line - prints a line
 * @n: number of (_)
*/

void print_line(int n)
{	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		_putchar(i);

	}
	_putchar('\n');
}
