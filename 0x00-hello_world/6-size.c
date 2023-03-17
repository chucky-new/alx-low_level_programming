#include <stdio.h>
/**
 * main - print sizes of various types
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %1u bytes(s)\n", (unsigned long) sizeof(a));
	printf("Size of int: %1u bytes(s)\n", (unsigned long) sizeof(b));
	printf("Size of long int: %1u bytes(s)\n", (unsigned long) sizeof(c));
	printf("Size of long long int: %1u bytes(s)\n", (unsigned long) sizeof(d));
	printf("Size of float: %1u bytes(s)\n", (unsigned long) sizeof(f));
	return (0);
}
