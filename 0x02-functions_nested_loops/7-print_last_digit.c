#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: 0
*/

int print_last_digit(int n)
{	int m = n % 10;

	_putchar(m + '0');
	return (m);
}
