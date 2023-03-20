#include "main.h"
/**
 * void print_alphabet_x10(void) - print alphabet 10x
 * Return: 0 Always success
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char letter;

	while (num++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
