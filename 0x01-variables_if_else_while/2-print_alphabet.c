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

	for (ch = 'a'; ch  <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(t);
	return (0);
}
