#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always (0)
*/

int main(void)
{	unsigned long int n, t1 = 1, t2 = 2, nextterm;

	printf("%lu, %lu, ", t1, t2);
	nextterm = t1 + t2;

	n = nextterm;
	while (n <= 98)
	{
		printf("%lu, ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		n++;
	}
	return (0);
}
