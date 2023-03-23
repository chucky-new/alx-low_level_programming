#include "main.h"
#include <stdio.h>
/**
 * _isdigit - is c a digit
 * @c: is a digit or not
 * Return: 1 if c is a digit or 0 if not
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
