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
		return (r * r);
	}
	else
	{
		return ((r * r) / 2);
	}
}
