#include "main.h"

/**
 * _strspn - function to get the length if a prefix substring
 * @s: function parameter
 * @accept: function parameter
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p = s;
	char *a;

	while (*p)
	{
		a = accept;
		while (*a)
		{
			if (*p == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			/*character not found in accept*/
			return (count);
		}
		p++;
	}
	return (count);
}
