#include "main.h"
/**
 * _islower - Entry point
 * @c: - is any character
 * Return: Always 0 (sucecess)
 */

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}

	}
	return (0);
}
