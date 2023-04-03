#include "main.h"

/**
 * print_chessboard - this function prints a chessboard
 * @a: source array to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int g = 0, h;

	for (; g < 8; g++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[g][h]);
		_putchar('\n');
	}
}
