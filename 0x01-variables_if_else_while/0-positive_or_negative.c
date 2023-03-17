#include <stdio.h>
/**
 * main - print line of int 
 *
 * Return: 0
 */
int main()
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 ){
	       printf("%d is positive\n",n);
	} 
	else if ( n = 0 ){
	printf("%d is equals to zero\n",n);
	}
	else if ( n < 0){
	printf("%d is negative\n",n);
	}
return (0);
}
