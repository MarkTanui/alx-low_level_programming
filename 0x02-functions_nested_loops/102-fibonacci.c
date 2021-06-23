#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always (0)
*/

int main(void)
{	long int n = 48, t1 = 1, t2 = 2, nextTerm, i;

	printf("%ld, %ld, ", t1, t2);
	nextTerm = t1 + t2;

	for (i = 1; i <= n; ++i)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	if (nextTerm = 20365011074)
	printf("%lu", nextTerm);
	return (0);
}
