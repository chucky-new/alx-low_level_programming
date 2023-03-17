#include <stdio.h>
/**
 * main - print the base numbers and 16 lowercase letters
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putschar((num % 10) + '0');

	for (letter = 'a'; letter < 'f'; letter++)
	       putchar(letter);

	putchar('\n');
	
	return (0);
}
