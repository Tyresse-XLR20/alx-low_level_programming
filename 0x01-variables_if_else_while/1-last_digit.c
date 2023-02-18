#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("Last digit of 98 is 8 and is greater than 5\n", n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n", n % 10);
	}
	else
	{
		printf("Last digit of 980 is 0 and is 0\n", n % 10);
	}
	return (0);

}
