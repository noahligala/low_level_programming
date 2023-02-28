#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print elements of an array
 *
 * @a: function parameter
 *
 * @n: function parameter
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
