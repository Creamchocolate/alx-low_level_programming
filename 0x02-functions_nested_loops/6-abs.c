#include "main.h"
/**
 * _abs - Entry point
 *
 * Return: Always 0 (success)
 */

int _abs(int r)
{
	
	if (r == -1 || r == 1)
	{
		_putchar(r * r);
	}
	_putchar((r * r) / 2);
}
