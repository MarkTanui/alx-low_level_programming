#include "holberton.h"
#include <math.h>

/**
 * _pow_recursion - returns x to the power of y
 * @x: x
 * @y: y
 * Return: -1 or x to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	return (pow(x, y));
}
