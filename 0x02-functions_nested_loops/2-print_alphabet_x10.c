#include "main.h"
/**
 * main - print alphabet 10x
 * Return: 0 Always success
 */
void void print_alphabet(void)
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
