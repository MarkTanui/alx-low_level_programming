#include <stdio.h>

/**
 * main - prints alphabets in lowercase in reverse
 * Return: Always (0)
*/

int main(void)
{	char i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	return (0);
}
