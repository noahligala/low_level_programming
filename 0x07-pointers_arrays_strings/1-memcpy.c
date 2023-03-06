#include "main.h"

/**
 * _memcpy - Entry Point
 * @dest: function parameter
 * @src: function parameter
 * @n: bytes
 * Return: value of dest (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
