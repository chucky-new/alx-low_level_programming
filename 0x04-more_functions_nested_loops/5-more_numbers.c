#include "main.h"
/**
 * more_numbers - print numbers 10 times
 *
 * Return: 0-14 numbers printed
 */
void more_numbers(void)
{
	int i, rows;

	for (rows = 0; rows < 10; rows++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
