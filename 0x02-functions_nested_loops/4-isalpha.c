#include "main.h"
/**
 * _isalpha(int c) - check code
 * @c: check if character is lower or uppercase
 * Return: 1 if c is lowercase ro uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else 
		return (0);
}
