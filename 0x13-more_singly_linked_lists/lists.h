#ifndef _HEADER_
#define _HEADER_
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer.
 * @next: pointer to next node.
 *
 * Description: singly linked list node structure.
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
