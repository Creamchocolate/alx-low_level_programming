#include "main.h"
/**
 * _abs - Entry point
 * @r: integer
 * Return: Always 0 (success)
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return ((r) / -1);
	}
}
