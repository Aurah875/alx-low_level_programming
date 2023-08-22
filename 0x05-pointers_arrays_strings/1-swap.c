#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: one of the integet to be swapped
 * @b: the other integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
