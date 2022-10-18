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

	if (n < 0)
	{
		_putchar(-n + 48);
		return (-1);
	}
	else
	{
		_putchar(n + 48);
		return (1);
	}
}
