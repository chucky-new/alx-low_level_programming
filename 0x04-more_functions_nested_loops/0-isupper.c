#include "main.h"
#include <stdio.h>

/**
 * _isupper(int c)
 * @c: is c upper
 * Return: 1 if c is upper or return 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
