#include "main.h"
/**
 * _puts - print a string
 * @str: character
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int string;

	for (string = 0; *(str + string) != '\0'; string++)
		_putchar(*(str + string));
	_putchar('\n');
}
