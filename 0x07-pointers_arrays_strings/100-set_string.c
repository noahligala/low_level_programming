#include "main.h"

/**
* set_string - sets the value of a pointer to a char.
* @s: pointer to a pointer to a char.
* @to: pointer to a char, the new value to be set.
* The function sets the value of a pointer to a new char pointer.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
