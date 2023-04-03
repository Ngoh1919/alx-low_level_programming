#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int firstSum, secSum, x;

	firstSum = 0;
	secSum = 0;

	for (x = 0; x < size; x++)
	{
		firstSum = firstSum + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		secSum += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", firstSum, secSum);
}

