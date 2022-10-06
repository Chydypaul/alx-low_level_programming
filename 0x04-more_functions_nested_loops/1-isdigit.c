#include "main.h"
#include <stdio.h>

/**
 * _isdigit - prints 1 if c is a digit else 0
 *
 * @c: test c
 *
 * Return: Always 0;
 */

int _isdigit(int c)
{

if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}

}
