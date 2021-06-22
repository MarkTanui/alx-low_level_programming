#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always (0)
*/

int main(void)
{	int n, t1 = 1, t2 = 2, nextterm;

	printf("%d, %d, ", t1, t2);
	nextterm = t1 + t2;

	n = nextterm;
	while (n <= 50)
	{
		printf("%d, ", nextterm);
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		n++;
	}
	return (0);
}
