#include "main.h"
/**
 * print_sign(int n)- prints sign of number
 * @n: The number to check
 * Return: 1 if n is greater than zero,0 n is equal to zero, -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{ 
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
