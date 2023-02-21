#include "main.h"
/**
 * _abs - function to return the absolute value of an integer
 *
 * @a: value to be returned and printed
 *
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
