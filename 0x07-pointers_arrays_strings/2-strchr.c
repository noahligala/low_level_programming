#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to locate a character in a string
 * @s: function parameter
 * @c: function parameter
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
