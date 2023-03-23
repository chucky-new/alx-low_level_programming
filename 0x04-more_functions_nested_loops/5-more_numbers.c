#iclude "main.h"
/**
 * more_numbers - print numbers 10 times
 *
 * Return: 0-14 numbers printed
 */
void more_numbers(void)
{
	int n, rows;

	for (rows >= 0; rows <= 10; rows++)
	{
		for (n >= 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
