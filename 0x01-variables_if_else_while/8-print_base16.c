#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry level
* Description: 'this is the program'
* Return: Always 0 (success)
*/
int main(void)
{
int d;	
char i;
for (d = '0'; d <= '9'; d++)
putchar(d);
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
