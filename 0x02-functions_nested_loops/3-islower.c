#include "main.h"
/**
 * _islower - return if 1 is lower
 * @c: the character to be checked
 * Return: 1 if char is lower, unless 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
