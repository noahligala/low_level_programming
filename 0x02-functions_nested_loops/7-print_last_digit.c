#include "main.h"
/**
 * print_last_digit - function to get the last digit of a number
 *
 * @i: digit to be displayed
 *
 * Return: always k
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
