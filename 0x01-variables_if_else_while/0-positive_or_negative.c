#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/

/* betty style doc for function main gows there */
/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 */

int main(positive or negative)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
