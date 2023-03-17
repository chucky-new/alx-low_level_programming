#include <stdio.h>
/**
 * main - print upper and lower case letters in the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letters;

	for (letters = 'a', <= 'z', letters++)
		putchar(letters);

	for (letters = 'A', <= 'Z', letters++)
		putchar(letters);

	putchar('\n');
	
	return (0);
}
