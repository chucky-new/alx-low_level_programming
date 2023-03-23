#include "main.h"
/**
 * print_line - draw straight line
 * @n: number of the line in terminal and should be '_' printed 
 * Return: Straight LINE
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
