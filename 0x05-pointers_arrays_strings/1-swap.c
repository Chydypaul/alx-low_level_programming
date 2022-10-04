#include "main.h"

/**
 * swap_int - swap values of files between two variables
 *
 * @a:1st variable to be swapped
 *
 * @b: 2nd var to be swaped
 *
 * Return: 0;
 */

void swap_int(int *a, int *b)
{
int j;
j = *b;
*b = *a;
*a = j;
}
