#include "main.h"

/**
 * _strlen - function to find the length of a string
 *
 * @c: function parameter
 *
 * Return: Returns s
 */
int _strlen(char *c)
{
	int s = 0;

	while (c[s] != '\0')
	{
		s++;
	}
	return (s);
}
