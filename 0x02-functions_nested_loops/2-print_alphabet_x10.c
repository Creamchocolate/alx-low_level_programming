#include "main.h"
/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
