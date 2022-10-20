#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: is an integer
 * Return: 1 for integer, 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
