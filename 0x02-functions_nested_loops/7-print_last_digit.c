#include "main.h"
/**
 * print_last_digit - entry point
 * @r: last digit
 * Return: Always 0 (success)
 */
int print_last_digit(int r)
{
	int n;

	n = r % 10;
	_putchar(n);
	return (0);
}
