#include <stdio.h>
#include <time.h>
/**
 * main - determine if number is a postive or negative or equal to zero
 *
 * Return: 0 Always a success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	       printf("%d is positive\n", n);
	} 
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
return (0);
}
