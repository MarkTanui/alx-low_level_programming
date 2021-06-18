#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - determines whether a random number is positive or negative
 *@n: the random number
 *Return: positive if n is greater than 0, negative if n is less than 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
	return (0);
}
