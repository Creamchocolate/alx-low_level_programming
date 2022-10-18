#include "main.h"
/**
 *  _isalpha - Entry point
 *  @c: any character
 *  Return: 1 if alphabet. else 0
 */

int _isalpha(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		char ph;

		for (ph = 'a'; ph <= 'z'; ph++)
		{
			if (c == ch && c == ph)
			{
				return (1);
			}
		}
	}
	return (0);
}
