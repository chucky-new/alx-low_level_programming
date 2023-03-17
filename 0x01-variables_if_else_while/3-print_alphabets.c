#include <stdio.h>
/**
 * main - print upper and lower case letters in the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	
	return (0);}
