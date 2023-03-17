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
	float e;
	
	printf("Size of a char: %1u bytes(S)\n", (unsigned long)sizeof (a));
	printf("Size of a char: %1u bytes(S)\n", (unsigned long)sizeof (b));
		printf("Size of a char: %1u bytes(S)\n", (unsigned long)sizeof (c));
		printf("Size of a char: %1u bytes(S)\n", (unsigned long)sizeof (d));
		printf("Size of a char: %1u bytes(S)\n", (unsigned long)sizeof (e));
		return (0);
}
