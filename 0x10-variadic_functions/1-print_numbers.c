#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers supllied to the funtion
 * @separator: string to follow number
 * @n: number of arguments passed
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(ap, int));
		}
		printf("%d%s ", va_arg(ap, int), separator);
	}
	printf("\n");

	va_end(ap);
}
