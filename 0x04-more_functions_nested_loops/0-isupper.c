#include "main.h"

/**
 * _isupper - function that checks if a character is uppercase
 *
 * @c: function parameter
 *
 * Return: returns 1 if uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
