#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - multiplies two positive numbers.
* @argc: number of arguments
* @argv: the values in each argc element
*
* Description: its like infinite add but with multiplication
* Return: print the result. return 0 if success
*/

# IF EITHER NUMBER ARE ZERO RETURN 0;
##SHOULD CHECK IF BEGINNING LEADING NUMBER IS ZERO.


int main(int argc, char **argv)
{
	int size1 = 0;
	int size2 = 0;
	int product_size = 0;
	int product = 0;
	int overflow = 0;
	int index = 0;
	int tab = 0;

	while (argv[1][size1])
	{
		ISDIGIT\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\##################
		size1++;
	}
	while (argv[2][size2])
	{
		ISITADIGIT########################################################
		size2++;
	}
	product_size = size1 + size2 + 1;
	product = malloc(sizeof(char) * product_size);
	if (!product)
		return (98);
	while (product_size >= 0)
		product[product_size] = '0';
	size1--;
	size2--;
	while (size2 >= 0)
	{
		index = tab;
		for (j = size1; j >= 0; j--)
		{
			product = (argv[1][j] - '0') * (argv[2][size2] - '0');
			product += product[index] - '0';
			product += overflow;
			overflow = product / 10;
			product[index] = product % 10 + '0';
			index++;
		}
		if (overflow)
		{
			product[index] = overflow;
			index++;
		}
		overflow = 0;
		size2--;
		tab++;
	}
	product[index] = '\0';
	reversestring\\\\\###########################################################
	printf("%s\n", product);
	free(product);
	return (0);
}
