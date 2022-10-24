#include "main.h"
/**
 * print_rev - print reverse string
 * @s: character
 * Return:Always 0 (success)
 */

void print_rev(char *s)
{
	int string = 0;

	for (string = 0; s[string] != '\0'; string++)
		;
	for (string--; string >= 0; string--)
		_putchar(s[string]);

	_putchar('\n');
}
