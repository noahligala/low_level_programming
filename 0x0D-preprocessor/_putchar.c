#include <unistd.h>

/**
 * _putchar - writes a single char to std.out
 * @c: character to be printed
 *
 * Return: 1 on success.
 * On error -1 is returned, and error is handled appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
