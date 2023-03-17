#include <stdio.h>
/**
 * main - print upper and lower case letters in the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a', <= 'z', letter++)
		putchar(letter);

	for (letter = 'A', <= 'Z', letter++)
		putchar(letter);

	putchar('\n');
	
	return (0);
}
