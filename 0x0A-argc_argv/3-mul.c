#include <stdio.h>
#include <stdlib.h>
/**
* main - main program
* @argc: number of arguements
* @argv: pointers' array to arguement strings
* Return: multiplication or 1
**/
int main(int argc, char *argv[])
{
	int g, h, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	g = atoi(argv[1]);
	h = atoi(argv[2]);
	result = g * h;
	printf("%d\n", result);
	return (0);
}
