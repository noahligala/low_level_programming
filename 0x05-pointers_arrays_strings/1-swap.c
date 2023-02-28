#include "main.h"

/**
 * swap_int - function to swap addresses
 *
 * @a: function parameter
 *
 * @b: function parameter
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;
	*a = *b;
	*b = *temp;
}
