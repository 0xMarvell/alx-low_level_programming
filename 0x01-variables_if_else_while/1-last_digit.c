#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints value of n after passing through conditional statements
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastint;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastint = n % 10;

	if (lastint > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastint);
	}
	else if (lastint < 6 && lastint != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastint);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastint);
	}
	return (0);
}

