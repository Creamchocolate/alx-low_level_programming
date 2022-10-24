#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * @a: integer one
 * @b: integer two
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
