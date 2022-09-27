/**
 * File: 10-set_string.c
 * Auth: Chydy Paul
 */

#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer.
 * @to: The char.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
