#include <stdio.h>
/**
 * main - main program.
 * @argv: source character to print
 * @argc: source character to print
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)

	{
		printf("%s\n", argv[g]);
	}
	return (0);
}

