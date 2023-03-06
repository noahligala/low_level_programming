#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function to search another string
 * @s: function parameter
 * @accept: function parameter
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	char *a;

	while (*p)
	{
		a = accept;
		while (*a)
		{
			if (*p == *a)
			{
				return (p);
			}
			a++;
		}
		p++;
	}
	return (NULL);
}
