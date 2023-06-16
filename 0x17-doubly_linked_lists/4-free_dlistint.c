#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * Description: main - function to print the program name
 *
 * @argc: parameter count
 * @argv: parameter 2
 *
 * return: 0 on success
 */

int main(int argc, char *argv[])
{
	int sum, i;

	for (i = 1; i < argc; i++)
	{
		if (argc == 0 || argc < 1)
		{
			return (0);
		}
		else if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
