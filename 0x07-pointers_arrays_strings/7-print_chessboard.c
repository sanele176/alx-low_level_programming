#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int g, c;

	for (g = 0; g < 8; g++)
	{
		for (c = 0; c < 8; c++)
		{
			printf(a[g][c]);
		}

		printf('\n');
	}
}
