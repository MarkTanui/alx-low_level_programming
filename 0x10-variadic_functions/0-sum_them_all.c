#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - sums all arguments supllied
 * @n: number of arguments
 * @...: variadic arguments
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int sum = 0, i;

	if (n == NULL)
	return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
