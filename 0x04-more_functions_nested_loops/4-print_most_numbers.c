#include "main.h"
/**
 * print_most_numbers - excluding 2 and 4
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	Return 0;
}