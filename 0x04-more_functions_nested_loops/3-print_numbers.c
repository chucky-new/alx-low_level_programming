#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers 0-9
 *
 * Return: 0 
 */
void print_numbers(void)
{
	int num;

	for (num >= '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
	return (0);
}
