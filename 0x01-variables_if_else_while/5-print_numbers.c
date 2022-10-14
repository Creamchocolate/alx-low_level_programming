#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	char t = '\n';

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar(t);
	return (0);
}
