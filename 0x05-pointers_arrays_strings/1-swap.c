#include <stdio.h>

/**
 * swap_int -swaps the values of two integers
 * @a: first swapped int
 * @b: second swapped int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
