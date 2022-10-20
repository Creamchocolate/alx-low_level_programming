#include "main.h"
/**
 * _isupper - checks for upper case letters
 * @c: characters
 * Return: 1 for uppercase, 0 else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
