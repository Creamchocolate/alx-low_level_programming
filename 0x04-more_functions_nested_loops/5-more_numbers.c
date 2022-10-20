#include "main.h"
/**
 * more_numbers - 0 - 14 ten times
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		i++;
	}
	_putchar('\n');
	Return 0;
}
