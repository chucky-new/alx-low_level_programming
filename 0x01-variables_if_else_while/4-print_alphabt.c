#include <stdio.h>
/**
 * main - print lowercase letters execpt e and q
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if( letter != 'a'; letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
