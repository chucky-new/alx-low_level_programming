#include "main.h"
/**
 * print_most_numbers - checks code for 0-9
 *
 * Return: 0-9 except for 2 and 4
 */
void print_most_numbers(void)
{
	int n;

	for (n >= '0'; n <= '9'; n++);
	{
		if (n == '2' || n == '4')
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
