#include "stdio.h"
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	long int a, b, c, ch;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		ch = b + c;
		b = c;
		c = ch;
	}
	return (0);
}
