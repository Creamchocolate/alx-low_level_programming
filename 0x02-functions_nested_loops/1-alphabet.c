#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char ch;

	for (ch ='a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
