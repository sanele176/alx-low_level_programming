#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program.
 * @argc: number of arguments passed to the program.
 * @argv: pointers to the arguments.
 *
 * Return: 1 if numbers contains symbols that are non-digits, Otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i, digit, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);

	return (0);
}

