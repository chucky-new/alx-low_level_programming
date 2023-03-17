#include <stdio.h>
/**
 * main - print numbers using char
 *
 * Return: 0 (success)
 */
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	
	putchar('\n');

	return (0);
}

