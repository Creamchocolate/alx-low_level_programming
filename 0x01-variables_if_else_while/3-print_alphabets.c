#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch  = 'a';
	char t = '\n';
	char ph = 'A';
	for (ch = 'a'; ch  <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ph = 'A'; ph <= 'Z'; ph++)
	{
		putchar(ph);
	}
	putchar(t);
	return (0);
}
