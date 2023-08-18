#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
/*if its positive print positive*/
{
printf("%d is positive\n", n);
}
else if (n == 0)
/*if it is equal to zero print zero*/
{
printf("%d is zero\n", n);
}
else
/*if it is negative print negative*/
{
printf("%d is negative\n", n);
}
return (0);
}
