#include "main.h"
/**
 * _print_sign - Entry point
 * @n: integer
 * Return: signs either 1 0 -1
 */

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
