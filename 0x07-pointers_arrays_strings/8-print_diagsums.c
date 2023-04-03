#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function  prints sum of two diagonals
 * of a square matrix of integers.
 * @a: square matrix of integers
 * @size: source integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int g = 0, max = size * size, total1 = 0, total2 = 0;

	for (; g < max; g += size + 1)
		total1 += a[g];

	for (g = size - 1; g < max - 1; g += size - 1)
		total2 += a[g];

	printf("%d, %d\n", total1, total2);
}
