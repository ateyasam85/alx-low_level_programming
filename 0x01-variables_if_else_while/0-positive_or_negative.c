#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main = Determines if a number is positive, negative or zero.*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		/*if its negative print negative*/
	{
		printf("%d is negative", n);
	}
	else if (n == 0)
		/*if it is equal to zero print zero*/
	{
		printf("%d is zero", n);
	}
	else
		/*if it is positive print positive*/
	{
		printf("%d is positive", n);
	}
	return (0);
}
