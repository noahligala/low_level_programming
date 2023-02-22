#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function to count up or down to 98
 *
 * @n: function parameter
 *
 * Return: 0 always
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
