#include "main.h"
/**
 * _strlen - length of a string
 * @s: integer
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
