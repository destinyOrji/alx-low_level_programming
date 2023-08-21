#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @d: integer to swap
 * @q: integer to swap
 */
void swap_int(int *d, int *q)
{
	int m;

	m = *d;
	*d = *q;
	*q = m;
}
